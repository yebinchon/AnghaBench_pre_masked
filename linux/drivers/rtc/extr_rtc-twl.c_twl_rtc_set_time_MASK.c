
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct twl_rtc {int * reg_map; } ;
struct rtc_time {scalar_t__ tm_year; scalar_t__ tm_mon; scalar_t__ tm_mday; scalar_t__ tm_hour; scalar_t__ tm_min; scalar_t__ tm_sec; } ;
struct device {int dummy; } ;


 int VAR_0 ;
 unsigned char VAR_1 ;
 int VAR_2 ;
 size_t VAR_3 ;
 int VAR_4 ;
 unsigned char FUNC_0 (scalar_t__) ;
 int FUNC_1 (struct device*,char*,int) ;
 struct twl_rtc* FUNC_2 (struct device*) ;
 int FUNC_3 (int ,unsigned char*,int ,int) ;
 int FUNC_4 (struct twl_rtc*,unsigned char*,int ) ;
 int FUNC_5 (struct twl_rtc*,unsigned char,int ) ;

__attribute__((used)) static int FUNC_6(struct device *VAR_5, struct rtc_time *VAR_6)
{
 struct twl_rtc *VAR_7 = FUNC_2(VAR_5);
 unsigned char VAR_8;
 unsigned char VAR_9[VAR_0];
 int VAR_10;

 VAR_9[0] = FUNC_0(VAR_6->tm_sec);
 VAR_9[1] = FUNC_0(VAR_6->tm_min);
 VAR_9[2] = FUNC_0(VAR_6->tm_hour);
 VAR_9[3] = FUNC_0(VAR_6->tm_mday);
 VAR_9[4] = FUNC_0(VAR_6->tm_mon + 1);
 VAR_9[5] = FUNC_0(VAR_6->tm_year - 100);


 VAR_10 = FUNC_4(VAR_7, &VAR_8, VAR_2);
 if (VAR_10 < 0)
  goto out;

 VAR_8 &= ~VAR_1;
 VAR_10 = FUNC_5(VAR_7, VAR_8, VAR_2);
 if (VAR_10 < 0)
  goto out;


 VAR_10 = FUNC_3(VAR_4, VAR_9,
  (VAR_7->reg_map[VAR_3]), VAR_0);
 if (VAR_10 < 0) {
  FUNC_1(VAR_5, "rtc_set_time error %d\n", VAR_10);
  goto out;
 }


 VAR_8 |= VAR_1;
 VAR_10 = FUNC_5(VAR_7, VAR_8, VAR_2);

out:
 return VAR_10;
}
