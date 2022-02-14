
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct rtc_time {int tm_year; int tm_mon; int tm_mday; int tm_hour; int tm_min; int tm_sec; } ;
struct hid_time_state {struct rtc_time time_buf; } ;
struct hid_sensor_hub_device {int dummy; } ;


 int VAR_0 ;






 scalar_t__ FUNC_0 (size_t,char*) ;
 struct hid_time_state* FUNC_1 (void*) ;

__attribute__((used)) static int FUNC_2(struct hid_sensor_hub_device *VAR_1,
    unsigned VAR_2, size_t VAR_3,
    char *VAR_4, void *VAR_5)
{
 struct hid_time_state *VAR_6 = FUNC_1(VAR_5);
 struct rtc_time *VAR_7 = &VAR_6->time_buf;

 switch (VAR_2) {
 case 128:





  if (VAR_3 == 1) {
   VAR_7->tm_year = *(u8 *)VAR_4;
   if (VAR_7->tm_year < 70)

    VAR_7->tm_year += 100;
  } else
   VAR_7->tm_year =
    (int)FUNC_0(VAR_3, VAR_4)-1900;
  break;
 case 130:

  VAR_7->tm_mon = (int)FUNC_0(VAR_3, VAR_4)-1;
  break;
 case 133:
  VAR_7->tm_mday = (int)FUNC_0(VAR_3, VAR_4);
  break;
 case 132:
  VAR_7->tm_hour = (int)FUNC_0(VAR_3, VAR_4);
  break;
 case 131:
  VAR_7->tm_min = (int)FUNC_0(VAR_3, VAR_4);
  break;
 case 129:
  VAR_7->tm_sec = (int)FUNC_0(VAR_3, VAR_4);
  break;
 default:
  return -VAR_0;
 }
 return 0;
}
