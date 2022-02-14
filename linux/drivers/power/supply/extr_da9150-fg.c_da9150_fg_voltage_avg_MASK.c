
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






union power_supply_propval {unsigned long long intval; } ;
typedef scalar_t__ u64 ;
struct da9150_fg {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned long long FUNC_0 (struct da9150_fg*,int ,int ) ;
 int FUNC_1 (scalar_t__,int) ;

__attribute__((used)) static int FUNC_2(struct da9150_fg *VAR_2,
     union power_supply_propval *VAR_3)
{
 u64 VAR_4;

 VAR_3->intval = FUNC_0(VAR_2, VAR_0,
            VAR_1);

 VAR_4 = (u64) (VAR_3->intval * 186ULL);
 FUNC_1(VAR_4, 10000);
 VAR_3->intval = (int) VAR_4;

 return 0;
}
