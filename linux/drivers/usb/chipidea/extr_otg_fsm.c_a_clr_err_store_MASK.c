
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
struct TYPE_2__ {int a_clr_err; int lock; } ;
struct ci_hdrc {TYPE_1__ fsm; } ;
typedef int ssize_t ;


 int FUNC_0 (struct ci_hdrc*) ;
 struct ci_hdrc* FUNC_1 (struct device*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static ssize_t
FUNC_4(struct device *VAR_0, struct device_attribute *VAR_1,
     const char *VAR_2, size_t VAR_3)
{
 struct ci_hdrc *VAR_4 = FUNC_1(VAR_0);

 if (VAR_3 > 2)
  return -1;

 FUNC_2(&VAR_4->fsm.lock);
 if (VAR_2[0] == '1')
  VAR_4->fsm.a_clr_err = 1;

 FUNC_0(VAR_4);
 FUNC_3(&VAR_4->fsm.lock);

 return VAR_3;
}
