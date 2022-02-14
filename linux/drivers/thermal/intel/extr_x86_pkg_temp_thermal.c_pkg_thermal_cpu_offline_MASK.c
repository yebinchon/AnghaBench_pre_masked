
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct zone_device {unsigned int cpu; int work; scalar_t__ work_scheduled; int msr_pkg_therm_high; int msr_pkg_therm_low; struct thermal_zone_device* tzone; int cpumask; } ;
struct thermal_zone_device {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *,unsigned int) ;
 int FUNC_2 (unsigned int,int *) ;
 int FUNC_3 (struct zone_device*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int VAR_1 ;
 int VAR_2 ;
 struct zone_device* FUNC_6 (unsigned int) ;
 int FUNC_7 (int,int *) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (struct thermal_zone_device*) ;
 int VAR_3 ;
 size_t FUNC_11 (unsigned int) ;
 int FUNC_12 (int ,int ,int ) ;
 int ** VAR_4 ;

__attribute__((used)) static int FUNC_13(unsigned int VAR_5)
{
 struct zone_device *VAR_6 = FUNC_6(VAR_5);
 bool VAR_7, VAR_8;
 int VAR_9;

 if (!VAR_6)
  return 0;

 VAR_9 = FUNC_1(&VAR_6->cpumask, VAR_5);
 FUNC_2(VAR_5, &VAR_6->cpumask);
 VAR_7 = VAR_9 >= VAR_1;




 if (VAR_7) {
  struct thermal_zone_device *VAR_10 = VAR_6->tzone;







  FUNC_4(&VAR_3);
  VAR_6->tzone = ((void*)0);
  FUNC_5(&VAR_3);

  FUNC_10(VAR_10);
 }


 FUNC_8(&VAR_2);






 VAR_8 = VAR_6->cpu == VAR_5;
 VAR_6->cpu = VAR_9;







 if (VAR_7) {
  VAR_4[FUNC_11(VAR_5)] = ((void*)0);

  FUNC_12(VAR_0,
        VAR_6->msr_pkg_therm_low, VAR_6->msr_pkg_therm_high);
 }





 if (VAR_6->work_scheduled && VAR_8) {




  FUNC_9(&VAR_2);
  FUNC_0(&VAR_6->work);
  FUNC_8(&VAR_2);






  if (!VAR_7 && VAR_6->work_scheduled)
   FUNC_7(VAR_9, &VAR_6->work);
 }

 FUNC_9(&VAR_2);


 if (VAR_7)
  FUNC_3(VAR_6);
 return 0;
}
