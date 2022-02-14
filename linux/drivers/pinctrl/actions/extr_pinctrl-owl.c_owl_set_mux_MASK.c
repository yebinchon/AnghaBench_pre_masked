
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct pinctrl_dev {int dummy; } ;
struct owl_pingroup {scalar_t__ mfpctl_reg; } ;
struct owl_pinctrl {int lock; scalar_t__ base; TYPE_1__* soc; } ;
struct TYPE_2__ {struct owl_pingroup* groups; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct owl_pingroup const*,unsigned int,int *,int *) ;
 int FUNC_1 (scalar_t__,int ,int ) ;
 struct owl_pinctrl* FUNC_2 (struct pinctrl_dev*) ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (int *,unsigned long) ;

__attribute__((used)) static int FUNC_5(struct pinctrl_dev *VAR_1,
    unsigned int VAR_2,
    unsigned int VAR_3)
{
 struct owl_pinctrl *VAR_4 = FUNC_2(VAR_1);
 const struct owl_pingroup *VAR_5;
 unsigned long VAR_6;
 u32 VAR_7, VAR_8;

 VAR_5 = &VAR_4->soc->groups[VAR_3];

 if (FUNC_0(VAR_5, VAR_2, &VAR_8, &VAR_7))
  return -VAR_0;

 FUNC_3(&VAR_4->lock, VAR_6);

 FUNC_1(VAR_4->base + VAR_5->mfpctl_reg, VAR_8, VAR_7);

 FUNC_4(&VAR_4->lock, VAR_6);

 return 0;
}
