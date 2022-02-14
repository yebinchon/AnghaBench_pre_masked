
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct rt2880_priv {unsigned int group_count; TYPE_2__* groups; } ;
struct pinctrl_dev {int dummy; } ;
struct TYPE_4__ {TYPE_1__* func; } ;
struct TYPE_3__ {unsigned int* pins; unsigned int pin_count; } ;


 int VAR_0 ;
 struct rt2880_priv* FUNC_0 (struct pinctrl_dev*) ;

__attribute__((used)) static int FUNC_1(struct pinctrl_dev *VAR_1,
     unsigned int VAR_2,
     const unsigned int **VAR_3,
     unsigned int *VAR_4)
{
 struct rt2880_priv *VAR_5 = FUNC_0(VAR_1);

 if (VAR_2 >= VAR_5->group_count)
  return -VAR_0;

 *VAR_3 = VAR_5->groups[VAR_2].func[0].pins;
 *VAR_4 = VAR_5->groups[VAR_2].func[0].pin_count;

 return 0;
}
