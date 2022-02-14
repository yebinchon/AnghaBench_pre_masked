
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct da9052_pdata {int (* init ) (struct da9052*) ;} ;
struct da9052 {int dev; int chip_id; int done; int auxadc_lock; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (struct da9052*) ;
 int FUNC_2 (struct da9052*) ;
 int FUNC_3 (struct da9052*) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_4 (int ,char*,int) ;
 struct da9052_pdata* FUNC_5 (int ) ;
 int FUNC_6 (int ,char*) ;
 int FUNC_7 (int ,char*) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int ,int ,int ,int ,int *,int ,int *) ;
 int FUNC_10 (int ) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (struct da9052*) ;

int FUNC_13(struct da9052 *VAR_3, u8 VAR_4)
{
 struct da9052_pdata *VAR_5 = FUNC_5(VAR_3->dev);
 int VAR_6;

 FUNC_11(&VAR_3->auxadc_lock);
 FUNC_8(&VAR_3->done);

 VAR_6 = FUNC_1(VAR_3);
 if (VAR_6 < 0)
  FUNC_6(VAR_3->dev, "Cannot clear FAULT_LOG\n");

 if (VAR_5 && VAR_5->init != ((void*)0))
  VAR_5->init(VAR_3);

 VAR_3->chip_id = VAR_4;

 VAR_6 = FUNC_3(VAR_3);
 if (VAR_6 != 0) {
  FUNC_4(VAR_3->dev, "da9052_irq_init failed: %d\n", VAR_6);
  return VAR_6;
 }

 VAR_6 = FUNC_9(VAR_3->dev, VAR_0,
         VAR_1,
         FUNC_0(VAR_1), ((void*)0), 0, ((void*)0));
 if (VAR_6) {
  FUNC_4(VAR_3->dev, "mfd_add_devices failed: %d\n", VAR_6);
  goto err;
 }






 if (!FUNC_7(VAR_3->dev, "dlg,tsi-as-adc")) {
  VAR_6 = FUNC_9(VAR_3->dev, VAR_0,
          VAR_2,
          FUNC_0(VAR_2),
          ((void*)0), 0, ((void*)0));
  if (VAR_6) {
   FUNC_4(VAR_3->dev, "failed to add TSI subdev: %d\n",
    VAR_6);
   goto err;
  }
 }

 return 0;

err:
 FUNC_10(VAR_3->dev);
 FUNC_2(VAR_3);

 return VAR_6;
}
