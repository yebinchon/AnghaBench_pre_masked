
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct rtc_time {int dummy; } ;
struct device {int dummy; } ;
typedef int efi_time_t ;
typedef int efi_time_cap_t ;
typedef scalar_t__ efi_status_t ;
struct TYPE_2__ {scalar_t__ (* get_time ) (int *,int *) ;} ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,struct rtc_time*) ;
 int FUNC_1 (struct device*,char*) ;
 TYPE_1__ VAR_3 ;
 scalar_t__ FUNC_2 (int *,int *) ;

__attribute__((used)) static int FUNC_3(struct device *VAR_4, struct rtc_time *VAR_5)
{
 efi_status_t VAR_6;
 efi_time_t VAR_7;
 efi_time_cap_t VAR_8;

 VAR_6 = VAR_3.get_time(&VAR_7, &VAR_8);

 if (VAR_6 != VAR_0) {

  FUNC_1(VAR_4, "can't read time\n");
  return -VAR_1;
 }

 if (!FUNC_0(&VAR_7, VAR_5))
  return -VAR_2;

 return 0;
}
