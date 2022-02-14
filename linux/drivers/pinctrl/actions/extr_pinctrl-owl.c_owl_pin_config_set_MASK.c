
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct pinctrl_dev {int dummy; } ;
struct owl_pinctrl {int lock; TYPE_1__* soc; } ;
struct owl_padinfo {int dummy; } ;
struct TYPE_2__ {int (* padctl_arg2val ) (struct owl_padinfo const*,unsigned int,int *) ;struct owl_padinfo* padinfo; } ;


 int VAR_0 ;
 int FUNC_0 (struct owl_padinfo const*,unsigned int,int *,int *,int *) ;
 int FUNC_1 (struct owl_pinctrl*,int ,int ,int ,int ) ;
 int FUNC_2 (unsigned long) ;
 unsigned int FUNC_3 (unsigned long) ;
 struct owl_pinctrl* FUNC_4 (struct pinctrl_dev*) ;
 int FUNC_5 (int *,unsigned long) ;
 int FUNC_6 (int *,unsigned long) ;
 int FUNC_7 (struct owl_padinfo const*,unsigned int,int *) ;

__attribute__((used)) static int FUNC_8(struct pinctrl_dev *VAR_1,
    unsigned int VAR_2,
    unsigned long *VAR_3,
    unsigned int VAR_4)
{
 struct owl_pinctrl *VAR_5 = FUNC_4(VAR_1);
 const struct owl_padinfo *VAR_6;
 unsigned long VAR_7;
 unsigned int VAR_8;
 u32 VAR_9, VAR_10, VAR_11, VAR_12;
 int VAR_13 = 0, VAR_14;

 VAR_6 = &VAR_5->soc->padinfo[VAR_2];

 for (VAR_14 = 0; VAR_14 < VAR_4; VAR_14++) {
  VAR_8 = FUNC_3(VAR_3[VAR_14]);
  VAR_12 = FUNC_2(VAR_3[VAR_14]);

  VAR_13 = FUNC_0(VAR_6, VAR_8, &VAR_9, &VAR_10, &VAR_11);
  if (VAR_13)
   return VAR_13;

  if (!VAR_5->soc->padctl_arg2val)
   return -VAR_0;

  VAR_13 = VAR_5->soc->padctl_arg2val(VAR_6, VAR_8, &VAR_12);
  if (VAR_13)
   return VAR_13;

  FUNC_5(&VAR_5->lock, VAR_7);

  FUNC_1(VAR_5, VAR_9, VAR_12, VAR_10, VAR_11);

  FUNC_6(&VAR_5->lock, VAR_7);
 }

 return VAR_13;
}
