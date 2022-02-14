
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
 unsigned char VAR_1 ;
 unsigned char VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct device*,char*,unsigned char,unsigned char) ;
 int FUNC_1 (struct i2c_client*,unsigned char*) ;
 scalar_t__ FUNC_2 (struct i2c_client*,struct rtc_time*) ;
 scalar_t__ FUNC_3 (struct i2c_client*,struct rtc_mem*) ;
 int FUNC_4 (struct i2c_client*,unsigned char*) ;
 struct i2c_client* FUNC_5 (struct device*) ;

__attribute__((used)) static int FUNC_6(struct device *VAR_4, struct rtc_time *VAR_5)
{
 struct i2c_client *VAR_6 = FUNC_5(VAR_4);
 unsigned char VAR_7, VAR_8[2];
 struct rtc_mem VAR_9 = {
  .loc = VAR_0,
  .nr = sizeof(VAR_8),
  .data = VAR_8
 };
 int VAR_10, VAR_11, VAR_12;




 FUNC_1(VAR_6, &VAR_7);
 if (VAR_7 & (VAR_2 | VAR_1)) {
  unsigned char VAR_13 = VAR_7 & ~(VAR_2 | VAR_1);

  FUNC_0(VAR_4, "resetting control %02x -> %02x\n",
   VAR_7, VAR_13);

  VAR_12 = FUNC_4(VAR_6, &VAR_13);
  if (VAR_12 < 0)
   return VAR_12;
 }

 if (FUNC_2(VAR_6, VAR_5) ||
     FUNC_3(VAR_6, &VAR_9))
  return -VAR_3;

 VAR_10 = VAR_8[0];







 VAR_11 = VAR_5->tm_year - (VAR_10 & 3);
 if (VAR_11 < 0)



  VAR_11 += 4;

 VAR_5->tm_year = (VAR_10 + VAR_11 + VAR_8[1] * 100) - 1900;

 return 0;
}
