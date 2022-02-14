
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rtc_test_data {unsigned int alarm_en; int alarm; } ;
struct device {int dummy; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 struct rtc_test_data* FUNC_2 (struct device*) ;

__attribute__((used)) static int FUNC_3(struct device *VAR_0, unsigned int VAR_1)
{
 struct rtc_test_data *VAR_2 = FUNC_2(VAR_0);

 VAR_2->alarm_en = VAR_1;
 if (VAR_1)
  FUNC_0(&VAR_2->alarm);
 else
  FUNC_1(&VAR_2->alarm);

 return 0;
}
