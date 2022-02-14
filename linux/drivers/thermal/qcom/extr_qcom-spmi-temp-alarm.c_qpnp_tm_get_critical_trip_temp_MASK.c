
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct thermal_trip {scalar_t__ type; int temperature; } ;
struct qpnp_tm_chip {int tz_dev; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int ) ;
 struct thermal_trip* FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ,int) ;

__attribute__((used)) static int FUNC_3(struct qpnp_tm_chip *VAR_2)
{
 int VAR_3;
 const struct thermal_trip *VAR_4;
 int VAR_5;

 VAR_3 = FUNC_0(VAR_2->tz_dev);
 if (VAR_3 <= 0)
  return VAR_0;

 VAR_4 = FUNC_1(VAR_2->tz_dev);
 if (!VAR_4)
  return VAR_0;

 for (VAR_5 = 0; VAR_5 < VAR_3; VAR_5++) {
  if (FUNC_2(VAR_2->tz_dev, VAR_5) &&
      VAR_4[VAR_5].type == VAR_1)
   return VAR_4[VAR_5].temperature;
 }

 return VAR_0;
}
