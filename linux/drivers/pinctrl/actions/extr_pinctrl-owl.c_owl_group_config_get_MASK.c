
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct pinctrl_dev {int dummy; } ;
struct owl_pingroup {int dummy; } ;
struct owl_pinctrl {TYPE_1__* soc; } ;
struct TYPE_2__ {struct owl_pingroup* groups; } ;


 int FUNC_0 (struct owl_pingroup const*,unsigned int,int *,int *,int *) ;
 int FUNC_1 (struct owl_pingroup const*,unsigned int,int *) ;
 int FUNC_2 (struct owl_pinctrl*,int ,int ,int ) ;
 unsigned long FUNC_3 (unsigned int,int ) ;
 unsigned int FUNC_4 (unsigned long) ;
 struct owl_pinctrl* FUNC_5 (struct pinctrl_dev*) ;

__attribute__((used)) static int FUNC_6(struct pinctrl_dev *VAR_0,
    unsigned int VAR_1,
    unsigned long *VAR_2)
{
 const struct owl_pingroup *VAR_3;
 struct owl_pinctrl *VAR_4 = FUNC_5(VAR_0);
 unsigned int VAR_5 = FUNC_4(*VAR_2);
 u32 VAR_6, VAR_7, VAR_8, VAR_9;
 int VAR_10;

 VAR_3 = &VAR_4->soc->groups[VAR_1];

 VAR_10 = FUNC_0(VAR_3, VAR_5, &VAR_6, &VAR_7, &VAR_8);
 if (VAR_10)
  return VAR_10;

 VAR_9 = FUNC_2(VAR_4, VAR_6, VAR_7, VAR_8);

 VAR_10 = FUNC_1(VAR_3, VAR_5, &VAR_9);
 if (VAR_10)
  return VAR_10;

 *VAR_2 = FUNC_3(VAR_5, VAR_9);

 return VAR_10;

}
