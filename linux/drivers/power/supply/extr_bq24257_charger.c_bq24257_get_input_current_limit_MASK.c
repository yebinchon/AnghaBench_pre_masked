
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






union power_supply_propval {int intval; } ;
struct bq24257_device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct bq24257_device*,int ) ;
 int * VAR_3 ;

__attribute__((used)) static int FUNC_1(struct bq24257_device *VAR_4,
        union power_supply_propval *VAR_5)
{
 int VAR_6;

 VAR_6 = FUNC_0(VAR_4, VAR_2);
 if (VAR_6 < 0)
  return VAR_6;
 if (VAR_6 >= VAR_0)
  return -VAR_1;

 VAR_5->intval = VAR_3[VAR_6];

 return 0;
}
