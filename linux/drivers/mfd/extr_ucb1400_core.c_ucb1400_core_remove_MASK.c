
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ucb1400 {int ucb1400_gpio; int ucb1400_ts; } ;
struct device {int dummy; } ;


 struct ucb1400* FUNC_0 (struct device*) ;
 int FUNC_1 (struct ucb1400*) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static int FUNC_3(struct device *VAR_0)
{
 struct ucb1400 *VAR_1 = FUNC_0(VAR_0);

 FUNC_2(VAR_1->ucb1400_ts);
 FUNC_2(VAR_1->ucb1400_gpio);

 FUNC_1(VAR_1);
 return 0;
}
