
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct pinctrl_dev {int dummy; } ;
struct ltq_pinmux_info {TYPE_1__* mfp; int * membase; } ;
struct TYPE_2__ {int pin; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int VAR_1 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,int,int ) ;
 struct ltq_pinmux_info* FUNC_4 (struct pinctrl_dev*) ;

__attribute__((used)) static inline int FUNC_5(struct pinctrl_dev *VAR_2,
   int VAR_3, int VAR_4)
{
 struct ltq_pinmux_info *VAR_5 = FUNC_4(VAR_2);
 int VAR_6 = FUNC_1(VAR_5->mfp[VAR_3].pin);

 if ((VAR_6 >= VAR_1) || (!VAR_5->membase[VAR_6]))
  return -VAR_0;

 FUNC_3(VAR_5->membase[VAR_6], VAR_4,
  FUNC_0(FUNC_2(VAR_5->mfp[VAR_3].pin)));
 return 0;
}
