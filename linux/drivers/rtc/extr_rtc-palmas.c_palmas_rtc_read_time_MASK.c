
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rtc_time {void* tm_year; void* tm_mon; void* tm_mday; void* tm_hour; void* tm_min; void* tm_sec; } ;
struct palmas {int dummy; } ;
struct device {int parent; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 void* FUNC_0 (unsigned char) ;
 int FUNC_1 (struct device*,char*,int) ;
 struct palmas* FUNC_2 (int ) ;
 int FUNC_3 (struct palmas*,int ,int ,unsigned char*,int) ;
 int FUNC_4 (struct palmas*,int ,int ,int ,int ) ;

__attribute__((used)) static int FUNC_5(struct device *VAR_5, struct rtc_time *VAR_6)
{
 unsigned char VAR_7[VAR_0];
 struct palmas *VAR_8 = FUNC_2(VAR_5->parent);
 int VAR_9;


 VAR_9 = FUNC_4(VAR_8, VAR_1, VAR_2,
  VAR_3, VAR_3);
 if (VAR_9 < 0) {
  FUNC_1(VAR_5, "RTC CTRL reg update failed, err: %d\n", VAR_9);
  return VAR_9;
 }

 VAR_9 = FUNC_3(VAR_8, VAR_1, VAR_4,
   VAR_7, VAR_0);
 if (VAR_9 < 0) {
  FUNC_1(VAR_5, "RTC_SECONDS reg read failed, err = %d\n", VAR_9);
  return VAR_9;
 }

 VAR_6->tm_sec = FUNC_0(VAR_7[0]);
 VAR_6->tm_min = FUNC_0(VAR_7[1]);
 VAR_6->tm_hour = FUNC_0(VAR_7[2]);
 VAR_6->tm_mday = FUNC_0(VAR_7[3]);
 VAR_6->tm_mon = FUNC_0(VAR_7[4]) - 1;
 VAR_6->tm_year = FUNC_0(VAR_7[5]) + 100;

 return VAR_9;
}
