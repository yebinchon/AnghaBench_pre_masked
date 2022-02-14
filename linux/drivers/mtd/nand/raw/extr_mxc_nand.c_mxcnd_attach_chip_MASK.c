
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_6__ {int mode; int bytes; int strength; int write_oob; int write_page_raw; int write_page; int read_oob; int read_page_raw; int read_page; } ;
struct nand_chip {int bbt_options; TYPE_3__ ecc; int * bbt_md; int * bbt_td; } ;
struct mxc_nand_host {int eccsize; int used_oobsize; TYPE_2__* devtype_data; scalar_t__ data_buf; } ;
struct TYPE_4__ {struct device* parent; } ;
struct mtd_info {scalar_t__ oobsize; scalar_t__ writesize; TYPE_1__ dev; } ;
struct device {int dummy; } ;
struct TYPE_5__ {int (* preset ) (struct mtd_info*) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;


 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct device*,void*) ;
 scalar_t__ FUNC_1 (struct device*,scalar_t__,int ) ;
 scalar_t__ FUNC_2 (struct mxc_nand_host*) ;
 scalar_t__ FUNC_3 (struct mxc_nand_host*) ;
 int FUNC_4 (scalar_t__,unsigned int) ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 struct mxc_nand_host* FUNC_5 (struct nand_chip*) ;
 struct mtd_info* FUNC_6 (struct nand_chip*) ;
 int FUNC_7 (struct mtd_info*) ;

__attribute__((used)) static int FUNC_8(struct nand_chip *VAR_12)
{
 struct mtd_info *VAR_13 = FUNC_6(VAR_12);
 struct mxc_nand_host *VAR_14 = FUNC_5(VAR_12);
 struct device *VAR_15 = VAR_13->dev.parent;

 switch (VAR_12->ecc.mode) {
 case 129:
  VAR_12->ecc.read_page = VAR_7;
  VAR_12->ecc.read_page_raw = VAR_8;
  VAR_12->ecc.read_oob = VAR_6;
  VAR_12->ecc.write_page = VAR_10;
  VAR_12->ecc.write_page_raw = VAR_11;
  VAR_12->ecc.write_oob = VAR_9;
  break;

 case 128:
  break;

 default:
  return -VAR_0;
 }

 if (VAR_12->bbt_options & VAR_3) {
  VAR_12->bbt_td = &VAR_4;
  VAR_12->bbt_md = &VAR_5;
 }


 FUNC_0(VAR_15, (void *)VAR_14->data_buf);
 VAR_14->data_buf = FUNC_1(VAR_15, VAR_13->writesize + VAR_13->oobsize,
          VAR_2);
 if (!VAR_14->data_buf)
  return -VAR_1;


 VAR_14->devtype_data->preset(VAR_13);

 if (!VAR_12->ecc.bytes) {
  if (VAR_14->eccsize == 8)
   VAR_12->ecc.bytes = 18;
  else if (VAR_14->eccsize == 4)
   VAR_12->ecc.bytes = 9;
 }
 VAR_14->used_oobsize = FUNC_4(VAR_13->oobsize, 218U);

 if (VAR_12->ecc.mode == 129) {
  if (FUNC_2(VAR_14) || FUNC_3(VAR_14))
   VAR_12->ecc.strength = 1;
  else
   VAR_12->ecc.strength = (VAR_14->eccsize == 4) ? 4 : 8;
 }

 return 0;
}
