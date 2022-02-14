
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct ida {int dummy; } ;
struct device {int dummy; } ;
struct TYPE_6__ {struct ida mode_ids; } ;
struct TYPE_5__ {struct ida mode_ids; } ;
struct TYPE_4__ {struct ida mode_ids; } ;


 int FUNC_0 (struct ida*,int) ;
 scalar_t__ FUNC_1 (struct device*) ;
 scalar_t__ FUNC_2 (struct device*) ;
 TYPE_3__* FUNC_3 (struct device*) ;
 TYPE_2__* FUNC_4 (struct device*) ;
 TYPE_1__* FUNC_5 (struct device*) ;

__attribute__((used)) static void FUNC_6(struct device *VAR_0, int VAR_1)
{
 struct ida *VAR_2;

 if (FUNC_1(VAR_0))
  VAR_2 = &FUNC_3(VAR_0)->mode_ids;
 else if (FUNC_2(VAR_0))
  VAR_2 = &FUNC_4(VAR_0)->mode_ids;
 else
  VAR_2 = &FUNC_5(VAR_0)->mode_ids;

 FUNC_0(VAR_2, VAR_1);
}
