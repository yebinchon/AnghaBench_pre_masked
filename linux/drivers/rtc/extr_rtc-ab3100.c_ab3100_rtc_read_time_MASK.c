
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u64 ;
typedef int time64_t ;
struct rtc_time {int dummy; } ;
struct device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct device*,int ,int ,int*) ;
 int FUNC_1 (struct device*,int ,int ,int*,int) ;
 int FUNC_2 (struct device*,char*) ;
 int FUNC_3 (int,struct rtc_time*) ;

__attribute__((used)) static int FUNC_4(struct device *VAR_4, struct rtc_time *VAR_5)
{
 time64_t VAR_6;
 u8 VAR_7;
 int VAR_8;

 VAR_8 = FUNC_0(VAR_4, 0,
      VAR_0, &VAR_7);
 if (VAR_8)
  return VAR_8;

 if (!(VAR_7 & 0x01)) {
  FUNC_2(VAR_4, "clock not set (lost power)");
  return -VAR_3;
 } else {
  u64 VAR_9;
  u8 VAR_10[6];


  VAR_8 = FUNC_1(VAR_4, 0,
            VAR_2,
            VAR_10, 6);
  if (VAR_8 != 0)
   return VAR_8;

  VAR_9 = ((u64) VAR_10[5] << 40) | ((u64) VAR_10[4] << 32) |
   ((u64) VAR_10[3] << 24) | ((u64) VAR_10[2] << 16) |
   ((u64) VAR_10[1] << 8) | (u64) VAR_10[0];
  VAR_6 = VAR_9 / (u64) (VAR_1 * 2);
 }

 FUNC_3(VAR_6, VAR_5);

 return 0;
}
