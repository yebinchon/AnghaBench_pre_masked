
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct rt2880_priv {char** group_names; TYPE_1__** func; } ;
struct pinctrl_dev {int dummy; } ;
struct TYPE_2__ {int group_count; size_t* groups; } ;


 struct rt2880_priv* FUNC_0 (struct pinctrl_dev*) ;

__attribute__((used)) static int FUNC_1(struct pinctrl_dev *VAR_0,
           unsigned int VAR_1,
           const char * const **VAR_2,
           unsigned int * const VAR_3)
{
 struct rt2880_priv *VAR_4 = FUNC_0(VAR_0);

 if (VAR_4->func[VAR_1]->group_count == 1)
  *VAR_2 = &VAR_4->group_names[VAR_4->func[VAR_1]->groups[0]];
 else
  *VAR_2 = VAR_4->group_names;

 *VAR_3 = VAR_4->func[VAR_1]->group_count;

 return 0;
}
