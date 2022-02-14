
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct thermal_trip {scalar_t__ type; } ;
struct qpnp_tm_chip {int lock; int tz_dev; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 struct thermal_trip* FUNC_2 (int ) ;
 int FUNC_3 (struct qpnp_tm_chip*,int) ;

__attribute__((used)) static int FUNC_4(void *VAR_2, int VAR_3, int VAR_4)
{
 struct qpnp_tm_chip *VAR_5 = VAR_2;
 const struct thermal_trip *VAR_6;
 int VAR_7;

 VAR_6 = FUNC_2(VAR_5->tz_dev);
 if (!VAR_6)
  return -VAR_0;

 if (VAR_6[VAR_3].type != VAR_1)
  return 0;

 FUNC_0(&VAR_5->lock);
 VAR_7 = FUNC_3(VAR_5, VAR_4);
 FUNC_1(&VAR_5->lock);

 return VAR_7;
}
