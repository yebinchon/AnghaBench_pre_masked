
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_2__ {scalar_t__ tm_sec; scalar_t__ tm_min; scalar_t__ tm_hour; scalar_t__ tm_mday; scalar_t__ tm_mon; } ;
struct rtc_wkalrm {scalar_t__ enabled; TYPE_1__ time; } ;
struct i2c_client {int dummy; } ;
struct device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (struct device*,char*) ;
 int FUNC_2 (struct i2c_client*,int ) ;
 int FUNC_3 (struct i2c_client*,int ,int) ;
 int FUNC_4 (struct i2c_client*,int ,int,int*) ;
 struct i2c_client* FUNC_5 (struct device*) ;

__attribute__((used)) static int FUNC_6(struct device *VAR_5, struct rtc_wkalrm *VAR_6)
{
 struct i2c_client *VAR_7 = FUNC_5(VAR_5);
 u8 VAR_8[5];
 int VAR_9, VAR_10;

 VAR_8[0] = FUNC_0(VAR_6->time.tm_mon + 1);
 VAR_8[1] = FUNC_0(VAR_6->time.tm_mday);
 VAR_8[2] = FUNC_0(VAR_6->time.tm_hour);
 VAR_8[3] = FUNC_0(VAR_6->time.tm_min);
 VAR_8[4] = FUNC_0(VAR_6->time.tm_sec);


 VAR_9 = FUNC_2(VAR_7, VAR_3);
 if (VAR_9 < 0)
  return VAR_9;
 VAR_10 = FUNC_3(VAR_7, VAR_3,
     VAR_9 & ~(VAR_0));
 if (VAR_10 < 0) {
  FUNC_1(VAR_5, "Unable to clear AFE bit\n");
  return VAR_10;
 }


 VAR_8[0] |= (VAR_9 & VAR_1);

 VAR_9 = FUNC_2(VAR_7, VAR_4);
 if (VAR_9 < 0)
  return VAR_9;

 VAR_10 = FUNC_3(VAR_7, VAR_4,
     VAR_9 & ~(VAR_2));
 if (VAR_10 < 0) {
  FUNC_1(VAR_5, "Unable to clear AF bit\n");
  return VAR_10;
 }


 VAR_10 = FUNC_4(VAR_7, VAR_3,
          5, VAR_8);
 if (VAR_10)
  return VAR_10;


 if (VAR_6->enabled) {
  VAR_8[0] |= VAR_0;
  VAR_10 = FUNC_3(VAR_7, VAR_3,
      VAR_8[0]);
  if (VAR_10)
   return VAR_10;
 }

 return 0;
}
