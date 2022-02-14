
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rtc_wkalrm {scalar_t__ enabled; int time; } ;
struct max8925_rtc_info {int rtc; } ;
struct device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (unsigned char*,int *,int) ;
 struct max8925_rtc_info* FUNC_1 (struct device*) ;
 int FUNC_2 (int ,int ,int,unsigned char*) ;
 int FUNC_3 (int ,int ,int) ;

__attribute__((used)) static int FUNC_4(struct device *VAR_3, struct rtc_wkalrm *VAR_4)
{
 struct max8925_rtc_info *VAR_5 = FUNC_1(VAR_3);
 unsigned char VAR_6[VAR_2];
 int VAR_7;

 VAR_7 = FUNC_0(VAR_6, &VAR_4->time, VAR_2);
 if (VAR_7 < 0)
  goto out;
 VAR_7 = FUNC_2(VAR_5->rtc, VAR_1, VAR_2, VAR_6);
 if (VAR_7 < 0)
  goto out;
 if (VAR_4->enabled)

  VAR_7 = FUNC_3(VAR_5->rtc, VAR_0, 0x77);
 else
  VAR_7 = FUNC_3(VAR_5->rtc, VAR_0, 0x0);
out:
 return VAR_7;
}
