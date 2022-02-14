
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ time64_t ;
struct rtc_wkalrm {int enabled; int time; } ;
struct rtc_device {int dummy; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef scalar_t__ ssize_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 (char const*,int ,scalar_t__*) ;
 scalar_t__ FUNC_1 (struct rtc_device*,struct rtc_wkalrm*) ;
 scalar_t__ FUNC_2 (struct rtc_device*,int *) ;
 scalar_t__ FUNC_3 (struct rtc_device*,struct rtc_wkalrm*) ;
 int FUNC_4 (scalar_t__,int *) ;
 scalar_t__ FUNC_5 (int *) ;
 struct rtc_device* FUNC_6 (struct device*) ;

__attribute__((used)) static ssize_t
FUNC_7(struct device *VAR_2, struct device_attribute *VAR_3,
  const char *VAR_4, size_t VAR_5)
{
 ssize_t VAR_6;
 time64_t VAR_7, VAR_8;
 time64_t VAR_9 = 0;
 struct rtc_wkalrm VAR_10;
 struct rtc_device *VAR_11 = FUNC_6(VAR_2);
 const char *VAR_12;
 int VAR_13 = 0;




 VAR_6 = FUNC_2(VAR_11, &VAR_10.time);
 if (VAR_6 < 0)
  return VAR_6;
 VAR_7 = FUNC_5(&VAR_10.time);

 VAR_12 = VAR_4;
 if (*VAR_12 == '+') {
  VAR_12++;
  if (*VAR_12 == '=') {
   VAR_12++;
   VAR_9 = 1;
  } else {
   VAR_13 = 1;
  }
 }
 VAR_6 = FUNC_0(VAR_12, 0, &VAR_8);
 if (VAR_6)
  return VAR_6;
 if (VAR_13)
  VAR_8 += VAR_7;
 if (VAR_8 > VAR_7 || VAR_9) {




  VAR_6 = FUNC_1(VAR_11, &VAR_10);
  if (VAR_6 < 0)
   return VAR_6;
  if (VAR_10.enabled) {
   if (VAR_9) {
    VAR_9 = FUNC_5(&VAR_10.time);
    VAR_8 += VAR_9;
   } else
    return -VAR_0;
  } else if (VAR_9)
   return -VAR_1;
  VAR_10.enabled = 1;
 } else {
  VAR_10.enabled = 0;




  VAR_8 = VAR_7 + 300;
 }
 FUNC_4(VAR_8, &VAR_10.time);

 VAR_6 = FUNC_3(VAR_11, &VAR_10);
 return (VAR_6 < 0) ? VAR_6 : VAR_5;
}
