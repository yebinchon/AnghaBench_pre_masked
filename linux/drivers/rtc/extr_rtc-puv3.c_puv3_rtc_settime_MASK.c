
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rtc_time {int dummy; } ;
struct device {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct device*,char*,struct rtc_time*) ;
 int FUNC_1 (struct rtc_time*,unsigned long*) ;
 int FUNC_2 (unsigned long,int ) ;

__attribute__((used)) static int FUNC_3(struct device *VAR_1, struct rtc_time *VAR_2)
{
 unsigned long VAR_3 = 0;

 FUNC_0(VAR_1, "set time %ptRr\n", VAR_2);

 FUNC_1(VAR_2, &VAR_3);
 FUNC_2(VAR_3, VAR_0);

 return 0;
}
