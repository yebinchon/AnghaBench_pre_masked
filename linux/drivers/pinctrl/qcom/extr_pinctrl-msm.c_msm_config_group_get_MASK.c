
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef unsigned int u32 ;
struct pinctrl_dev {int dummy; } ;
struct msm_pingroup {int in_bit; } ;
struct msm_pinctrl {TYPE_1__* soc; } ;
struct TYPE_2__ {int pull_no_keeper; struct msm_pingroup* groups; } ;


 unsigned int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 unsigned int VAR_4 ;
 unsigned int VAR_5 ;
 unsigned int VAR_6 ;







 int FUNC_1 (struct msm_pinctrl*,struct msm_pingroup const*,unsigned int,unsigned int*,unsigned int*) ;
 unsigned int FUNC_2 (struct msm_pinctrl*,struct msm_pingroup const*) ;
 unsigned int FUNC_3 (struct msm_pinctrl*,struct msm_pingroup const*) ;
 unsigned int FUNC_4 (unsigned int) ;
 unsigned long FUNC_5 (unsigned int,unsigned int) ;
 unsigned int FUNC_6 (unsigned long) ;
 struct msm_pinctrl* FUNC_7 (struct pinctrl_dev*) ;

__attribute__((used)) static int FUNC_8(struct pinctrl_dev *VAR_7,
    unsigned int VAR_8,
    unsigned long *VAR_9)
{
 const struct msm_pingroup *VAR_10;
 struct msm_pinctrl *VAR_11 = FUNC_7(VAR_7);
 unsigned VAR_12 = FUNC_6(*VAR_9);
 unsigned VAR_13;
 unsigned VAR_14;
 unsigned VAR_15;
 int VAR_16;
 u32 VAR_17;

 VAR_10 = &VAR_11->soc->groups[VAR_8];

 VAR_16 = FUNC_1(VAR_11, VAR_10, VAR_12, &VAR_13, &VAR_15);
 if (VAR_16 < 0)
  return VAR_16;

 VAR_17 = FUNC_2(VAR_11, VAR_10);
 VAR_14 = (VAR_17 >> VAR_15) & VAR_13;


 switch (VAR_12) {
 case 133:
  if (VAR_14 != VAR_3)
   return -VAR_0;
  VAR_14 = 1;
  break;
 case 132:
  if (VAR_14 != VAR_4)
   return -VAR_0;
  VAR_14 = 1;
  break;
 case 134:
  if (VAR_11->soc->pull_no_keeper)
   return -VAR_1;

  if (VAR_14 != VAR_2)
   return -VAR_0;
  VAR_14 = 1;
  break;
 case 131:
  if (VAR_11->soc->pull_no_keeper)
   VAR_14 = VAR_14 == VAR_6;
  else
   VAR_14 = VAR_14 == VAR_5;
  if (!VAR_14)
   return -VAR_0;
  break;
 case 130:
  VAR_14 = FUNC_4(VAR_14);
  break;
 case 128:

  if (!VAR_14)
   return -VAR_0;

  VAR_17 = FUNC_3(VAR_11, VAR_10);
  VAR_14 = !!(VAR_17 & FUNC_0(VAR_10->in_bit));
  break;
 case 129:

  if (VAR_14)
   return -VAR_0;
  VAR_14 = 1;
  break;
 default:
  return -VAR_1;
 }

 *VAR_9 = FUNC_5(VAR_12, VAR_14);

 return 0;
}
