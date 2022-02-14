
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int min_time_window_attr; int max_time_window_attr; int min_power_attr; int max_power_attr; int name_attr; int time_window_attr; int power_limit_attr; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 TYPE_1__* VAR_3 ;
 int FUNC_0 (int,char*,int,int *,int ,int *) ;
 int FUNC_1 () ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int * VAR_11 ;
 int * VAR_12 ;

__attribute__((used)) static int FUNC_2(void)
{
 int VAR_13;
 int VAR_14;

 for (VAR_13 = 0; VAR_13 < VAR_0; ++VAR_13) {
  VAR_14 = FUNC_0(VAR_13, "power_limit_uw",
     VAR_2 | VAR_1,
     &VAR_3[VAR_13].power_limit_attr,
     VAR_9,
     VAR_11);
  if (VAR_14)
   goto err_alloc;
  VAR_14 = FUNC_0(VAR_13, "time_window_us",
     VAR_2 | VAR_1,
     &VAR_3[VAR_13].time_window_attr,
     VAR_10,
     VAR_12);
  if (VAR_14)
   goto err_alloc;
  VAR_14 = FUNC_0(VAR_13, "name", VAR_1,
    &VAR_3[VAR_13].name_attr,
    VAR_8,
    ((void*)0));
  if (VAR_14)
   goto err_alloc;
  VAR_14 = FUNC_0(VAR_13, "max_power_uw", VAR_1,
    &VAR_3[VAR_13].max_power_attr,
    VAR_4,
    ((void*)0));
  if (VAR_14)
   goto err_alloc;
  VAR_14 = FUNC_0(VAR_13, "min_power_uw", VAR_1,
    &VAR_3[VAR_13].min_power_attr,
    VAR_6,
    ((void*)0));
  if (VAR_14)
   goto err_alloc;
  VAR_14 = FUNC_0(VAR_13, "max_time_window_us",
    VAR_1,
    &VAR_3[VAR_13].max_time_window_attr,
    VAR_5,
    ((void*)0));
  if (VAR_14)
   goto err_alloc;
  VAR_14 = FUNC_0(VAR_13, "min_time_window_us",
    VAR_1,
    &VAR_3[VAR_13].min_time_window_attr,
    VAR_7,
    ((void*)0));
  if (VAR_14)
   goto err_alloc;

 }

 return 0;

err_alloc:
 FUNC_1();

 return VAR_14;
}
