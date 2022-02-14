
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






union power_supply_propval {int intval; } ;
struct bq24257_device {int iilimit_setup_work; scalar_t__ iilimit_autoset_enable; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct bq24257_device*,int ,int ) ;
 int FUNC_1 (int ,int ,int ) ;
 int VAR_2 ;
 int FUNC_2 (int *) ;

__attribute__((used)) static int FUNC_3(struct bq24257_device *VAR_3,
     const union power_supply_propval *VAR_4)
{





 if (VAR_3->iilimit_autoset_enable)
  FUNC_2(&VAR_3->iilimit_setup_work);

 return FUNC_0(VAR_3, VAR_1,
       FUNC_1(VAR_4->intval,
          VAR_2,
          VAR_0));
}
