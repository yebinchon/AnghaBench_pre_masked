
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int time64_t ;
struct rtc_time {int dummy; } ;
struct device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (unsigned long) ;
 int FUNC_1 (unsigned long) ;
 int FUNC_2 (unsigned long) ;
 int FUNC_3 (unsigned long) ;
 int FUNC_4 (unsigned long) ;
 int FUNC_5 (struct rtc_time*,int ,int) ;
 int FUNC_6 (int,int ,int ,int ,int ,int ) ;
 void* FUNC_7 (int ) ;
 int FUNC_8 (int,struct rtc_time*) ;

__attribute__((used)) static int FUNC_9(struct device *VAR_3, struct rtc_time *VAR_4)
{
 unsigned long VAR_5;
 time64_t VAR_6;

 VAR_5 = FUNC_7(VAR_1);
 VAR_6 = FUNC_7(VAR_2);

 FUNC_5(VAR_4, 0, sizeof(struct rtc_time));
 VAR_6 = FUNC_6((VAR_6 & VAR_0), FUNC_3(VAR_5),
   FUNC_0(VAR_5), FUNC_1(VAR_5),
   FUNC_2(VAR_5), FUNC_4(VAR_5));
 FUNC_8(VAR_6, VAR_4);

 return 0;
}
