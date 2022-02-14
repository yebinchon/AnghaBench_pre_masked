
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct device {int dummy; } ;
struct platform_device {struct device dev; } ;
struct atmel_nand_controller_caps {scalar_t__ legacy_of_bindings; } ;
struct TYPE_4__ {int smc; } ;
struct atmel_hsmc_nand_controller {TYPE_1__ base; int irq; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct atmel_hsmc_nand_controller*) ;
 int FUNC_1 (struct atmel_hsmc_nand_controller*) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (TYPE_1__*,struct platform_device*,struct atmel_nand_controller_caps const*) ;
 int VAR_6 ;
 int FUNC_5 (struct device*,char*,int) ;
 struct atmel_hsmc_nand_controller* FUNC_6 (struct device*,int,int ) ;
 int FUNC_7 (struct device*,int ,int ,int ,char*,struct atmel_hsmc_nand_controller*) ;
 int FUNC_8 (int ,int ,int) ;

__attribute__((used)) static int FUNC_9(struct platform_device *VAR_7,
    const struct atmel_nand_controller_caps *VAR_8)
{
 struct device *VAR_9 = &VAR_7->dev;
 struct atmel_hsmc_nand_controller *VAR_10;
 int VAR_11;

 VAR_10 = FUNC_6(VAR_9, sizeof(*VAR_10), VAR_4);
 if (!VAR_10)
  return -VAR_3;

 VAR_11 = FUNC_4(&VAR_10->base, VAR_7, VAR_8);
 if (VAR_11)
  return VAR_11;

 if (VAR_8->legacy_of_bindings)
  VAR_11 = FUNC_1(VAR_10);
 else
  VAR_11 = FUNC_0(VAR_10);

 if (VAR_11)
  return VAR_11;


 FUNC_8(VAR_10->base.smc, VAR_2, 0xffffffff);
 VAR_11 = FUNC_7(VAR_9, VAR_10->irq, VAR_6,
          VAR_5, "nfc", VAR_10);
 if (VAR_11) {
  FUNC_5(VAR_9,
   "Could not get register NFC interrupt handler (err = %d)\n",
   VAR_11);
  goto err;
 }


 FUNC_8(VAR_10->base.smc, VAR_0,
       VAR_1);

 VAR_11 = FUNC_3(&VAR_10->base);
 if (VAR_11)
  goto err;

 return 0;

err:
 FUNC_2(&VAR_10->base);

 return VAR_11;
}
