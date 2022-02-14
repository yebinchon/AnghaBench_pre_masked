
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct rtc_time {int dummy; } ;
struct device {int dummy; } ;
typedef int efi_time_t ;
typedef scalar_t__ efi_status_t ;
struct TYPE_2__ {scalar_t__ (* set_time ) (int *) ;} ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct rtc_time*,int *) ;
 TYPE_1__ VAR_2 ;
 scalar_t__ FUNC_1 (int *) ;

__attribute__((used)) static int FUNC_2(struct device *VAR_3, struct rtc_time *VAR_4)
{
 efi_status_t VAR_5;
 efi_time_t VAR_6;

 FUNC_0(VAR_4, &VAR_6);

 VAR_5 = VAR_2.set_time(&VAR_6);

 return VAR_5 == VAR_0 ? 0 : -VAR_1;
}
