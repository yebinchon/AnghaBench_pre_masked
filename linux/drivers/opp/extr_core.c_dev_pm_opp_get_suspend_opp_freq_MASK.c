
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct opp_table {TYPE_1__* suspend_opp; } ;
struct device {int dummy; } ;
struct TYPE_2__ {scalar_t__ available; } ;


 scalar_t__ FUNC_0 (struct opp_table*) ;
 struct opp_table* FUNC_1 (struct device*) ;
 unsigned long FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (struct opp_table*) ;

unsigned long FUNC_4(struct device *VAR_0)
{
 struct opp_table *VAR_1;
 unsigned long VAR_2 = 0;

 VAR_1 = FUNC_1(VAR_0);
 if (FUNC_0(VAR_1))
  return 0;

 if (VAR_1->suspend_opp && VAR_1->suspend_opp->available)
  VAR_2 = FUNC_2(VAR_1->suspend_opp);

 FUNC_3(VAR_1);

 return VAR_2;
}
