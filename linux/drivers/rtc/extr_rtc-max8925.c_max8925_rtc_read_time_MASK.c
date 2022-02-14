
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rtc_time {int dummy; } ;
struct max8925_rtc_info {int rtc; } ;
struct device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct max8925_rtc_info* FUNC_0 (struct device*) ;
 int FUNC_1 (int ,int ,int,unsigned char*) ;
 int FUNC_2 (struct rtc_time*,unsigned char*,int) ;

__attribute__((used)) static int FUNC_3(struct device *VAR_2, struct rtc_time *VAR_3)
{
 struct max8925_rtc_info *VAR_4 = FUNC_0(VAR_2);
 unsigned char VAR_5[VAR_1];
 int VAR_6;

 VAR_6 = FUNC_1(VAR_4->rtc, VAR_0, VAR_1, VAR_5);
 if (VAR_6 < 0)
  goto out;
 VAR_6 = FUNC_2(VAR_3, VAR_5, VAR_1);
out:
 return VAR_6;
}
