
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rtc_time {int dummy; } ;
struct device {int dummy; } ;
struct bd70528_rtc {int mfd; } ;


 int FUNC_0 (struct device*,struct rtc_time*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 struct bd70528_rtc* FUNC_3 (struct device*) ;

__attribute__((used)) static int FUNC_4(struct device *VAR_0, struct rtc_time *VAR_1)
{
 int VAR_2;
 struct bd70528_rtc *VAR_3 = FUNC_3(VAR_0);

 FUNC_1(VAR_3->mfd);
 VAR_2 = FUNC_0(VAR_0, VAR_1);
 FUNC_2(VAR_3->mfd);
 return VAR_2;
}
