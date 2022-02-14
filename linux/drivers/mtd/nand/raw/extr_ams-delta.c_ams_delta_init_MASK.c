
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct platform_device {int dev; } ;
struct TYPE_5__ {int algo; int mode; } ;
struct nand_chip {TYPE_3__* controller; TYPE_2__ ecc; } ;
struct TYPE_4__ {int * parent; } ;
struct mtd_info {TYPE_1__ dev; } ;
struct gpio_descs {int dummy; } ;
struct TYPE_6__ {int * ops; } ;
struct ams_delta_nand {int data_in; TYPE_3__ base; struct gpio_descs* data_gpiods; struct gpio_descs* gpiod_cle; struct gpio_descs* gpiod_ale; struct gpio_descs* gpiod_nwe; struct gpio_descs* gpiod_nre; struct gpio_descs* gpiod_nce; struct gpio_descs* gpiod_nwp; struct gpio_descs* gpiod_rdy; struct nand_chip nand_chip; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_1 (struct gpio_descs*) ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_2 (struct gpio_descs*) ;
 int VAR_7 ;
 int FUNC_3 (int *,char*,int) ;
 int FUNC_4 (int *,char*,int) ;
 void* FUNC_5 (int *,char*,int ) ;
 struct gpio_descs* FUNC_6 (int *,char*,int ) ;
 struct gpio_descs* FUNC_7 (int *,char*,int ) ;
 struct ams_delta_nand* FUNC_8 (int *,int,int ) ;
 int FUNC_9 (struct mtd_info*,int ,int ) ;
 int FUNC_10 (struct nand_chip*) ;
 int FUNC_11 (TYPE_3__*) ;
 int FUNC_12 (struct nand_chip*,int) ;
 int FUNC_13 (struct nand_chip*,struct ams_delta_nand*) ;
 struct mtd_info* FUNC_14 (struct nand_chip*) ;
 int VAR_8 ;
 int FUNC_15 (struct platform_device*,struct ams_delta_nand*) ;

__attribute__((used)) static int FUNC_16(struct platform_device *VAR_9)
{
 struct ams_delta_nand *VAR_10;
 struct nand_chip *VAR_11;
 struct mtd_info *VAR_12;
 struct gpio_descs *VAR_13;
 int VAR_14 = 0;


 VAR_10 = FUNC_8(&VAR_9->dev, sizeof(struct ams_delta_nand),
       VAR_1);
 if (!VAR_10)
  return -VAR_0;

 VAR_11 = &VAR_10->nand_chip;

 VAR_12 = FUNC_14(VAR_11);
 VAR_12->dev.parent = &VAR_9->dev;

 FUNC_13(VAR_11, VAR_10);

 VAR_10->gpiod_rdy = FUNC_7(&VAR_9->dev, "rdy", VAR_2);
 if (FUNC_1(VAR_10->gpiod_rdy)) {
  VAR_14 = FUNC_2(VAR_10->gpiod_rdy);
  FUNC_4(&VAR_9->dev, "RDY GPIO request failed (%d)\n", VAR_14);
  return VAR_14;
 }

 VAR_11->ecc.mode = VAR_6;
 VAR_11->ecc.algo = VAR_5;

 FUNC_15(VAR_9, VAR_10);


 VAR_10->gpiod_nwp = FUNC_5(&VAR_9->dev, "nwp", VAR_3);
 if (FUNC_1(VAR_10->gpiod_nwp)) {
  VAR_14 = FUNC_2(VAR_10->gpiod_nwp);
  FUNC_3(&VAR_9->dev, "NWP GPIO request failed (%d)\n", VAR_14);
  return VAR_14;
 }

 VAR_10->gpiod_nce = FUNC_5(&VAR_9->dev, "nce", VAR_3);
 if (FUNC_1(VAR_10->gpiod_nce)) {
  VAR_14 = FUNC_2(VAR_10->gpiod_nce);
  FUNC_3(&VAR_9->dev, "NCE GPIO request failed (%d)\n", VAR_14);
  return VAR_14;
 }

 VAR_10->gpiod_nre = FUNC_5(&VAR_9->dev, "nre", VAR_3);
 if (FUNC_1(VAR_10->gpiod_nre)) {
  VAR_14 = FUNC_2(VAR_10->gpiod_nre);
  FUNC_3(&VAR_9->dev, "NRE GPIO request failed (%d)\n", VAR_14);
  return VAR_14;
 }

 VAR_10->gpiod_nwe = FUNC_5(&VAR_9->dev, "nwe", VAR_3);
 if (FUNC_1(VAR_10->gpiod_nwe)) {
  VAR_14 = FUNC_2(VAR_10->gpiod_nwe);
  FUNC_3(&VAR_9->dev, "NWE GPIO request failed (%d)\n", VAR_14);
  return VAR_14;
 }

 VAR_10->gpiod_ale = FUNC_5(&VAR_9->dev, "ale", VAR_4);
 if (FUNC_1(VAR_10->gpiod_ale)) {
  VAR_14 = FUNC_2(VAR_10->gpiod_ale);
  FUNC_3(&VAR_9->dev, "ALE GPIO request failed (%d)\n", VAR_14);
  return VAR_14;
 }

 VAR_10->gpiod_cle = FUNC_5(&VAR_9->dev, "cle", VAR_4);
 if (FUNC_1(VAR_10->gpiod_cle)) {
  VAR_14 = FUNC_2(VAR_10->gpiod_cle);
  FUNC_3(&VAR_9->dev, "CLE GPIO request failed (%d)\n", VAR_14);
  return VAR_14;
 }


 VAR_13 = FUNC_6(&VAR_9->dev, "data", VAR_2);
 if (FUNC_1(VAR_13)) {
  VAR_14 = FUNC_2(VAR_13);
  FUNC_3(&VAR_9->dev, "data GPIO request failed: %d\n", VAR_14);
  return VAR_14;
 }
 VAR_10->data_gpiods = VAR_13;
 VAR_10->data_in = 1;


 VAR_10->base.ops = &VAR_7;
 FUNC_11(&VAR_10->base);
 VAR_11->controller = &VAR_10->base;


 VAR_14 = FUNC_12(VAR_11, 1);
 if (VAR_14)
  return VAR_14;


 VAR_14 = FUNC_9(VAR_12, VAR_8,
      FUNC_0(VAR_8));
 if (VAR_14)
  goto err_nand_cleanup;

 return 0;

err_nand_cleanup:
 FUNC_10(VAR_11);

 return VAR_14;
}
