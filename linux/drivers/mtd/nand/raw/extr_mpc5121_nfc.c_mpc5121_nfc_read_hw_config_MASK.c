
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint ;
struct nand_chip {int options; } ;
struct mtd_info {int writesize; int oobsize; } ;
struct mpc512x_reset_module {int rcwhr; } ;
struct mpc5121_nfc_prv {int dev; } ;
struct device_node {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (int ,char*,int,int,int) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct mpc512x_reset_module*) ;
 struct nand_chip* FUNC_4 (struct mtd_info*) ;
 struct mpc5121_nfc_prv* FUNC_5 (struct nand_chip*) ;
 struct device_node* FUNC_6 (int *,int *,char*) ;
 struct mpc512x_reset_module* FUNC_7 (struct device_node*,int ) ;
 int FUNC_8 (struct device_node*) ;

__attribute__((used)) static int FUNC_9(struct mtd_info *VAR_3)
{
 struct nand_chip *VAR_4 = FUNC_4(VAR_3);
 struct mpc5121_nfc_prv *VAR_5 = FUNC_5(VAR_4);
 struct mpc512x_reset_module *VAR_6;
 struct device_node *VAR_7;
 uint VAR_8 = 0;
 uint VAR_9 = 0;
 uint VAR_10;
 uint VAR_11;
 uint VAR_12, VAR_13;
 int VAR_14 = 0;

 VAR_7 = FUNC_6(((void*)0), ((void*)0), "fsl,mpc5121-reset");
 if (!VAR_7) {
  FUNC_0(VAR_5->dev, "Missing 'fsl,mpc5121-reset' "
     "node in device tree!\n");
  return -VAR_1;
 }

 VAR_6 = FUNC_7(VAR_7, 0);
 if (!VAR_6) {
  FUNC_0(VAR_5->dev, "Error mapping reset module node!\n");
  VAR_14 = -VAR_0;
  goto out;
 }

 VAR_11 = FUNC_2(&VAR_6->rcwhr);


 VAR_10 = ((VAR_11 >> 6) & 0x1) ? 2 : 1;


 VAR_13 = (VAR_11 >> 7) & 0x1;


 VAR_12 = (VAR_11 >> 21) & 0x3;


 switch ((VAR_13 << 2) | VAR_12) {
 case 0x00:
 case 0x01:
  VAR_8 = 512;
  VAR_9 = 16;
  break;
 case 0x02:
 case 0x03:
  VAR_8 = 4096;
  VAR_9 = 128;
  break;
 case 0x04:
 case 0x05:
  VAR_8 = 2048;
  VAR_9 = 64;
  break;
 case 0x06:
 case 0x07:
  VAR_8 = 4096;
  VAR_9 = 218;
  break;
 }

 VAR_3->writesize = VAR_8;
 VAR_3->oobsize = VAR_9;
 if (VAR_10 == 2)
  VAR_4->options |= VAR_2;

 FUNC_1(VAR_5->dev, "Configured for "
    "%u-bit NAND, page size %u "
    "with %u spare.\n",
    VAR_10 * 8, VAR_8,
    VAR_9);
 FUNC_3(VAR_6);
out:
 FUNC_8(VAR_7);
 return VAR_14;
}
