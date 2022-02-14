
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






union power_supply_propval {int intval; } ;
struct da9150_fg {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct da9150_fg*,int ,int ) ;

__attribute__((used)) static int FUNC_1(struct da9150_fg *VAR_2,
     union power_supply_propval *VAR_3)
{
 VAR_3->intval = FUNC_0(VAR_2, VAR_0,
            VAR_1);

 VAR_3->intval = (VAR_3->intval * 10) / 1048576;

 return 0;
}
