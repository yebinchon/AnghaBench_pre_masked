
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct rtc_wkalrm {scalar_t__ enabled; int time; } ;
struct device {int dummy; } ;
typedef int efi_time_t ;
typedef scalar_t__ efi_status_t ;
typedef int efi_bool_t ;
struct TYPE_2__ {scalar_t__ (* set_wakeup_time ) (int ,int *) ;} ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int *) ;
 int FUNC_1 (struct device*,char*,int) ;
 TYPE_1__ VAR_2 ;
 scalar_t__ FUNC_2 (int ,int *) ;

__attribute__((used)) static int FUNC_3(struct device *VAR_3, struct rtc_wkalrm *VAR_4)
{
 efi_time_t VAR_5;
 efi_status_t VAR_6;

 FUNC_0(&VAR_4->time, &VAR_5);
 VAR_6 = VAR_2.set_wakeup_time((efi_bool_t)VAR_4->enabled, &VAR_5);

 FUNC_1(VAR_3, "write status is %d\n", (int)VAR_6);

 return VAR_6 == VAR_0 ? 0 : -VAR_1;
}
