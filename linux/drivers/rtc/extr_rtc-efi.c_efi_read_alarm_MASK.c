
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct rtc_wkalrm {int time; int pending; int enabled; } ;
struct device {int dummy; } ;
typedef int efi_time_t ;
typedef scalar_t__ efi_status_t ;
typedef int efi_bool_t ;
struct TYPE_2__ {scalar_t__ (* get_wakeup_time ) (int *,int *,int *) ;} ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,int *) ;
 TYPE_1__ VAR_3 ;
 int FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (int *,int *,int *) ;

__attribute__((used)) static int FUNC_3(struct device *VAR_4, struct rtc_wkalrm *VAR_5)
{
 efi_time_t VAR_6;
 efi_status_t VAR_7;




 VAR_7 = VAR_3.get_wakeup_time((efi_bool_t *)&VAR_5->enabled,
         (efi_bool_t *)&VAR_5->pending, &VAR_6);

 if (VAR_7 != VAR_0)
  return -VAR_1;

 if (!FUNC_0(&VAR_6, &VAR_5->time))
  return -VAR_2;

 return FUNC_1(&VAR_5->time);
}
