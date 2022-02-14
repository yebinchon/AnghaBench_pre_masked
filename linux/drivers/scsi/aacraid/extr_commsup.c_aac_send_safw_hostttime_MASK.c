
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int wellness_str ;
typedef int u32 ;
typedef scalar_t__ time64_t ;
struct tm {int tm_mon; int tm_year; int tm_hour; int tm_min; int tm_sec; int tm_mday; } ;
struct timespec64 {scalar_t__ tv_sec; } ;
struct aac_dev {int sa_firmware; } ;
struct TYPE_2__ {int tz_minuteswest; } ;


 int VAR_0 ;
 int FUNC_0 (struct aac_dev*,char*,int) ;
 char FUNC_1 (int) ;
 TYPE_1__ VAR_1 ;
 int FUNC_2 (scalar_t__,int ,struct tm*) ;

int FUNC_3(struct aac_dev *VAR_2, struct timespec64 *VAR_3)
{
 struct tm VAR_4;
 char VAR_5[] = "<HW>TD\010\0\0\0\0\0\0\0\0\0DW\0\0ZZ";
 u32 VAR_6 = sizeof(VAR_5);
 time64_t VAR_7;
 int VAR_8 = -VAR_0;

 if (!VAR_2->sa_firmware)
  goto out;

 VAR_7 = (VAR_3->tv_sec - (VAR_1.tz_minuteswest * 60));
 FUNC_2(VAR_7, 0, &VAR_4);
 VAR_4.tm_mon += 1;
 VAR_4.tm_year += 1900;
 VAR_5[8] = FUNC_1(VAR_4.tm_hour);
 VAR_5[9] = FUNC_1(VAR_4.tm_min);
 VAR_5[10] = FUNC_1(VAR_4.tm_sec);
 VAR_5[12] = FUNC_1(VAR_4.tm_mon);
 VAR_5[13] = FUNC_1(VAR_4.tm_mday);
 VAR_5[14] = FUNC_1(VAR_4.tm_year / 100);
 VAR_5[15] = FUNC_1(VAR_4.tm_year % 100);

 VAR_8 = FUNC_0(VAR_2, VAR_5, VAR_6);

out:
 return VAR_8;
}
