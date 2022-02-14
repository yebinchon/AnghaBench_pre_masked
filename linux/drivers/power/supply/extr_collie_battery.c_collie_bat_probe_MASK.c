
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct ucb1x00_dev {TYPE_1__* ucb; } ;
struct power_supply_config {TYPE_2__* drv_data; } ;
struct TYPE_6__ {void* psy; int work_lock; } ;
struct TYPE_5__ {int dev; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int *,int ) ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_2 (void*) ;
 int FUNC_3 (void*) ;
 int VAR_4 ;
 int FUNC_4 (int *) ;
 TYPE_2__ VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 TYPE_2__ VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_5 (int *,int) ;
 int FUNC_6 (int ,int ) ;
 int FUNC_7 (int ,int ) ;
 int FUNC_8 (int ) ;
 int FUNC_9 () ;
 int FUNC_10 (int *) ;
 void* FUNC_11 (int *,int *,struct power_supply_config*) ;
 int FUNC_12 (void*) ;
 int FUNC_13 (int ,int ,int,char*,TYPE_2__*) ;
 int FUNC_14 (int *) ;
 TYPE_1__* VAR_12 ;

__attribute__((used)) static int FUNC_15(struct ucb1x00_dev *VAR_13)
{
 int VAR_14;
 struct power_supply_config VAR_15 = {}, VAR_16 = {};

 if (!FUNC_9())
  return -VAR_1;

 VAR_12 = VAR_13->ucb;

 VAR_14 = FUNC_7(VAR_11,
     FUNC_0(VAR_11));
 if (VAR_14)
  return VAR_14;

 FUNC_10(&VAR_8.work_lock);

 FUNC_1(&VAR_4, VAR_10);

 VAR_15.drv_data = &VAR_8;
 VAR_8.psy = FUNC_11(&VAR_13->ucb->dev,
          &VAR_9,
          &VAR_15);
 if (FUNC_2(VAR_8.psy)) {
  VAR_14 = FUNC_3(VAR_8.psy);
  goto err_psy_reg_main;
 }

 VAR_16.drv_data = &VAR_5;
 VAR_5.psy = FUNC_11(&VAR_13->ucb->dev,
        &VAR_6,
        &VAR_16);
 if (FUNC_2(VAR_5.psy)) {
  VAR_14 = FUNC_3(VAR_5.psy);
  goto err_psy_reg_bu;
 }

 VAR_14 = FUNC_13(FUNC_8(VAR_0),
    VAR_7,
    VAR_3 | VAR_2,
    "main full", &VAR_8);
 if (VAR_14)
  goto err_irq;

 FUNC_5(&VAR_12->dev, 1);
 FUNC_14(&VAR_4);

 return 0;

err_irq:
 FUNC_12(VAR_5.psy);
err_psy_reg_bu:
 FUNC_12(VAR_8.psy);
err_psy_reg_main:


 FUNC_4(&VAR_4);
 FUNC_6(VAR_11, FUNC_0(VAR_11));
 return VAR_14;
}
