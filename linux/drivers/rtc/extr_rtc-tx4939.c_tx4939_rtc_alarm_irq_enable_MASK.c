
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tx4939rtc_plat_data {int lock; int rtcreg; } ;
struct device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct tx4939rtc_plat_data* FUNC_0 (struct device*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int ,int) ;

__attribute__((used)) static int FUNC_4(struct device *VAR_2, unsigned int VAR_3)
{
 struct tx4939rtc_plat_data *VAR_4 = FUNC_0(VAR_2);

 FUNC_1(&VAR_4->lock);
 FUNC_3(VAR_4->rtcreg,
         VAR_1 |
         (VAR_3 ? VAR_0 : 0));
 FUNC_2(&VAR_4->lock);
 return 0;
}
