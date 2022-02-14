
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct pinctrl_dev {int dummy; } ;
struct owl_pinctrl {TYPE_1__* soc; } ;
struct owl_padinfo {int dummy; } ;
struct TYPE_2__ {int (* padctl_val2arg ) (struct owl_padinfo const*,unsigned int,int *) ;struct owl_padinfo* padinfo; } ;


 int VAR_0 ;
 int FUNC_0 (struct owl_padinfo const*,unsigned int,int *,int *,int *) ;
 int FUNC_1 (struct owl_pinctrl*,int ,int ,int ) ;
 unsigned long FUNC_2 (unsigned int,int ) ;
 unsigned int FUNC_3 (unsigned long) ;
 struct owl_pinctrl* FUNC_4 (struct pinctrl_dev*) ;
 int FUNC_5 (struct owl_padinfo const*,unsigned int,int *) ;

__attribute__((used)) static int FUNC_6(struct pinctrl_dev *VAR_1,
    unsigned int VAR_2,
    unsigned long *VAR_3)
{
 int VAR_4 = 0;
 struct owl_pinctrl *VAR_5 = FUNC_4(VAR_1);
 const struct owl_padinfo *VAR_6;
 unsigned int VAR_7 = FUNC_3(*VAR_3);
 u32 VAR_8, VAR_9, VAR_10, VAR_11;

 VAR_6 = &VAR_5->soc->padinfo[VAR_2];

 VAR_4 = FUNC_0(VAR_6, VAR_7, &VAR_8, &VAR_9, &VAR_10);
 if (VAR_4)
  return VAR_4;

 VAR_11 = FUNC_1(VAR_5, VAR_8, VAR_9, VAR_10);

 if (!VAR_5->soc->padctl_val2arg)
  return -VAR_0;

 VAR_4 = VAR_5->soc->padctl_val2arg(VAR_6, VAR_7, &VAR_11);
 if (VAR_4)
  return VAR_4;

 *VAR_3 = FUNC_2(VAR_7, VAR_11);

 return VAR_4;
}
