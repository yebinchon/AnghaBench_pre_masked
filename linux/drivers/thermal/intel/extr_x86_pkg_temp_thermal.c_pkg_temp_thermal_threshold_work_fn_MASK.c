
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct zone_device {int work_scheduled; struct thermal_zone_device* tzone; } ;
struct work_struct {int dummy; } ;
struct thermal_zone_device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 () ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int VAR_4 ;
 struct zone_device* FUNC_3 (int) ;
 int VAR_5 ;
 int FUNC_4 (int ,int) ;
 int FUNC_5 () ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (struct thermal_zone_device*,int ) ;
 int VAR_6 ;
 int FUNC_9 (int ,int) ;

__attribute__((used)) static void FUNC_10(struct work_struct *VAR_7)
{
 struct thermal_zone_device *VAR_8 = ((void*)0);
 int VAR_9 = FUNC_5();
 struct zone_device *VAR_10;
 u64 VAR_11, VAR_12;

 FUNC_1(&VAR_6);
 FUNC_6(&VAR_4);
 ++VAR_5;

 VAR_10 = FUNC_3(VAR_9);
 if (!VAR_10) {
  FUNC_7(&VAR_4);
  FUNC_2(&VAR_6);
  return;
 }
 VAR_10->work_scheduled = 0;

 FUNC_4(VAR_0, VAR_11);
 VAR_12 = VAR_11 & ~(VAR_2 | VAR_3);
 if (VAR_12 != VAR_11) {
  FUNC_9(VAR_0, VAR_12);
  VAR_8 = VAR_10->tzone;
 }

 FUNC_0();
 FUNC_7(&VAR_4);





 if (VAR_8)
  FUNC_8(VAR_8, VAR_1);

 FUNC_2(&VAR_6);
}
