
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct power_supply_config {TYPE_1__* drv_data; } ;
struct platform_device {int dev; } ;
struct TYPE_6__ {void* psy; int work_lock; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (int *,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_2 (void*) ;
 int FUNC_3 (void*) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int ,TYPE_1__*) ;
 int FUNC_6 (int ,int ) ;
 int FUNC_7 (int ,int ) ;
 int FUNC_8 (int ) ;
 int FUNC_9 () ;
 int FUNC_10 (int *) ;
 void* FUNC_11 (int *,int *,struct power_supply_config*) ;
 int FUNC_12 (void*) ;
 int FUNC_13 (int ,int ,int,char*,TYPE_1__*) ;
 int FUNC_14 (int *) ;
 TYPE_1__ VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 TYPE_1__ VAR_11 ;
 int VAR_12 ;
 TYPE_1__ VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;

__attribute__((used)) static int FUNC_15(struct platform_device *VAR_16)
{
 int VAR_17;
 struct power_supply_config VAR_18 = {},
       VAR_19 = {},
       VAR_20 = {};

 if (!FUNC_9())
  return -VAR_0;

 VAR_17 = FUNC_7(VAR_10, FUNC_0(VAR_10));
 if (VAR_17)
  return VAR_17;

 FUNC_10(&VAR_13.work_lock);
 FUNC_10(&VAR_11.work_lock);

 FUNC_1(&VAR_6, VAR_15);

 VAR_18.drv_data = &VAR_13;
 VAR_13.psy = FUNC_11(&VAR_16->dev,
        &VAR_14,
        &VAR_18);
 if (FUNC_2(VAR_13.psy)) {
  VAR_17 = FUNC_3(VAR_13.psy);
  goto err_psy_reg_main;
 }

 VAR_19.drv_data = &VAR_11;
 VAR_11.psy = FUNC_11(&VAR_16->dev,
          &VAR_12,
          &VAR_19);
 if (FUNC_2(VAR_11.psy)) {
  VAR_17 = FUNC_3(VAR_11.psy);
  goto err_psy_reg_jacket;
 }

 VAR_20.drv_data = &VAR_7;
 VAR_7.psy = FUNC_11(&VAR_16->dev, &VAR_8,
      &VAR_20);
 if (FUNC_2(VAR_7.psy)) {
  VAR_17 = FUNC_3(VAR_7.psy);
  goto err_psy_reg_bu;
 }

 VAR_17 = FUNC_13(FUNC_8(VAR_3),
    VAR_9,
    VAR_2 | VAR_1,
    "main full", &VAR_13);
 if (VAR_17)
  goto err_req_main;

 VAR_17 = FUNC_13(FUNC_8(VAR_4),
    VAR_9,
    VAR_2 | VAR_1,
    "jacket full", &VAR_11);
 if (VAR_17)
  goto err_req_jacket;

 VAR_17 = FUNC_13(FUNC_8(VAR_5),
    VAR_9,
    VAR_2 | VAR_1,
    "jacket detect", &VAR_11);
 if (!VAR_17) {
  FUNC_14(&VAR_6);
  return 0;
 }

 FUNC_5(FUNC_8(VAR_4), &VAR_11);
err_req_jacket:
 FUNC_5(FUNC_8(VAR_3), &VAR_13);
err_req_main:
 FUNC_12(VAR_7.psy);
err_psy_reg_bu:
 FUNC_12(VAR_11.psy);
err_psy_reg_jacket:
 FUNC_12(VAR_13.psy);
err_psy_reg_main:


 FUNC_4(&VAR_6);

 FUNC_6(VAR_10, FUNC_0(VAR_10));
 return VAR_17;
}
