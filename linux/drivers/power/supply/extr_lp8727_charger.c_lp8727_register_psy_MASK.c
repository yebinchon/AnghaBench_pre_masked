
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct power_supply_config {int num_supplicants; int supplied_to; } ;
struct lp8727_psy {void* ac; void* usb; void* batt; } ;
struct lp8727_chg {int dev; struct lp8727_psy* psy; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_1 (void*) ;
 int VAR_3 ;
 struct lp8727_psy* FUNC_2 (int ,int,int ) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 void* FUNC_3 (int ,int *,struct power_supply_config*) ;
 int FUNC_4 (void*) ;

__attribute__((used)) static int FUNC_5(struct lp8727_chg *VAR_7)
{
 struct power_supply_config VAR_8 = {};
 struct lp8727_psy *VAR_9;

 VAR_9 = FUNC_2(VAR_7->dev, sizeof(*VAR_9), VAR_2);
 if (!VAR_9)
  return -VAR_0;

 VAR_7->psy = VAR_9;

 VAR_8.supplied_to = VAR_3;
 VAR_8.num_supplicants = FUNC_0(VAR_3);

 VAR_9->ac = FUNC_3(VAR_7->dev, &VAR_4, &VAR_8);
 if (FUNC_1(VAR_9->ac))
  goto err_psy_ac;

 VAR_9->usb = FUNC_3(VAR_7->dev, &VAR_6,
      &VAR_8);
 if (FUNC_1(VAR_9->usb))
  goto err_psy_usb;

 VAR_9->batt = FUNC_3(VAR_7->dev, &VAR_5, ((void*)0));
 if (FUNC_1(VAR_9->batt))
  goto err_psy_batt;

 return 0;

err_psy_batt:
 FUNC_4(VAR_9->usb);
err_psy_usb:
 FUNC_4(VAR_9->ac);
err_psy_ac:
 return -VAR_1;
}
