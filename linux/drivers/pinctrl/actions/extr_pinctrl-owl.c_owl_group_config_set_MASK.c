
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct pinctrl_dev {int dummy; } ;
struct owl_pingroup {int dummy; } ;
struct owl_pinctrl {int lock; TYPE_1__* soc; } ;
struct TYPE_2__ {struct owl_pingroup* groups; } ;


 int FUNC_0 (struct owl_pingroup const*,unsigned int,int *) ;
 int FUNC_1 (struct owl_pingroup const*,unsigned int,int *,int *,int *) ;
 int FUNC_2 (struct owl_pinctrl*,int ,int ,int ,int ) ;
 int FUNC_3 (unsigned long) ;
 unsigned int FUNC_4 (unsigned long) ;
 struct owl_pinctrl* FUNC_5 (struct pinctrl_dev*) ;
 int FUNC_6 (int *,unsigned long) ;
 int FUNC_7 (int *,unsigned long) ;

__attribute__((used)) static int FUNC_8(struct pinctrl_dev *VAR_0,
    unsigned int VAR_1,
    unsigned long *VAR_2,
    unsigned int VAR_3)
{
 const struct owl_pingroup *VAR_4;
 struct owl_pinctrl *VAR_5 = FUNC_5(VAR_0);
 unsigned long VAR_6;
 unsigned int VAR_7;
 u32 VAR_8, VAR_9, VAR_10, VAR_11;
 int VAR_12, VAR_13;

 VAR_4 = &VAR_5->soc->groups[VAR_1];

 for (VAR_13 = 0; VAR_13 < VAR_3; VAR_13++) {
  VAR_7 = FUNC_4(VAR_2[VAR_13]);
  VAR_11 = FUNC_3(VAR_2[VAR_13]);

  VAR_12 = FUNC_1(VAR_4, VAR_7, &VAR_8, &VAR_9, &VAR_10);
  if (VAR_12)
   return VAR_12;

  VAR_12 = FUNC_0(VAR_4, VAR_7, &VAR_11);
  if (VAR_12)
   return VAR_12;


  FUNC_6(&VAR_5->lock, VAR_6);

  FUNC_2(VAR_5, VAR_8, VAR_11, VAR_9, VAR_10);

  FUNC_7(&VAR_5->lock, VAR_6);
 }

 return 0;
}
