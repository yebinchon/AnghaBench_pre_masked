
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int year ;
struct rtc_time {int tm_year; } ;
struct rtc_mem {int nr; unsigned char* data; int loc; } ;
struct i2c_client {int dummy; } ;
struct device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct i2c_client*,struct rtc_mem*) ;
 int FUNC_1 (struct i2c_client*,struct rtc_time*,int) ;
 int FUNC_2 (struct i2c_client*,struct rtc_mem*) ;
 struct i2c_client* FUNC_3 (struct device*) ;

__attribute__((used)) static int FUNC_4(struct device *VAR_2, struct rtc_time *VAR_3)
{
 struct i2c_client *VAR_4 = FUNC_3(VAR_2);
 unsigned char VAR_5[2], VAR_6;
 struct rtc_mem VAR_7 = {
  .loc = VAR_1,
  .nr = sizeof(VAR_5),
  .data = VAR_5
 };
 struct rtc_mem VAR_8 = {
  .loc = VAR_0,
  .nr = 1,
  .data = &VAR_6
 };
 unsigned int VAR_9 = VAR_3->tm_year + 1900;
 int VAR_10;






 VAR_10 = FUNC_1(VAR_4, VAR_3, 1);
 if (VAR_10)
  return VAR_10;

 VAR_10 = FUNC_0(VAR_4, &VAR_8);
 if (VAR_10)
  return VAR_10;

 VAR_10 = FUNC_0(VAR_4, &VAR_7);
 if (VAR_10)
  return VAR_10;

 VAR_6 -= VAR_5[1] + VAR_5[0];

 VAR_5[1] = VAR_9 / 100;
 VAR_5[0] = VAR_9 % 100;

 VAR_6 += VAR_5[1] + VAR_5[0];

 VAR_10 = FUNC_2(VAR_4, &VAR_7);

 if (VAR_10)
  return VAR_10;

 VAR_10 = FUNC_2(VAR_4, &VAR_8);

 return VAR_10;
}
