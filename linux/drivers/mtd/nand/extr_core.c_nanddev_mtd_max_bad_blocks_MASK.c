
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct nand_pos {int dummy; } ;
struct TYPE_2__ {scalar_t__ max_bad_eraseblocks_per_lun; } ;
struct nand_device {TYPE_1__ memorg; } ;
struct mtd_info {int dummy; } ;
typedef scalar_t__ loff_t ;


 int VAR_0 ;
 struct nand_device* FUNC_0 (struct mtd_info*) ;
 int FUNC_1 (struct nand_device*,scalar_t__,struct nand_pos*) ;
 scalar_t__ FUNC_2 (struct nand_pos*,struct nand_pos*) ;
 int FUNC_3 (struct nand_device*,struct nand_pos*) ;

int FUNC_4(struct mtd_info *VAR_1, loff_t VAR_2, size_t VAR_3)
{
 struct nand_device *VAR_4 = FUNC_0(VAR_1);
 struct nand_pos VAR_5, VAR_6;
 unsigned int VAR_7 = 0;

 if (!VAR_4->memorg.max_bad_eraseblocks_per_lun)
  return -VAR_0;

 FUNC_1(VAR_4, VAR_2, &VAR_5);
 FUNC_1(VAR_4, VAR_2 + VAR_3, &VAR_6);

 for (FUNC_1(VAR_4, VAR_2, &VAR_5);
      FUNC_2(&VAR_5, &VAR_6) < 0;
      FUNC_3(VAR_4, &VAR_5))
  VAR_7 += VAR_4->memorg.max_bad_eraseblocks_per_lun;

 return VAR_7;
}
