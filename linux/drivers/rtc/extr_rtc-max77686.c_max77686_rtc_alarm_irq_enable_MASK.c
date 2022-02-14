
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct max77686_rtc_info {int lock; } ;
struct device {int dummy; } ;


 struct max77686_rtc_info* FUNC_0 (struct device*) ;
 int FUNC_1 (struct max77686_rtc_info*) ;
 int FUNC_2 (struct max77686_rtc_info*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static int FUNC_5(struct device *VAR_0,
      unsigned int VAR_1)
{
 struct max77686_rtc_info *VAR_2 = FUNC_0(VAR_0);
 int VAR_3;

 FUNC_3(&VAR_2->lock);
 if (VAR_1)
  VAR_3 = FUNC_1(VAR_2);
 else
  VAR_3 = FUNC_2(VAR_2);
 FUNC_4(&VAR_2->lock);

 return VAR_3;
}
