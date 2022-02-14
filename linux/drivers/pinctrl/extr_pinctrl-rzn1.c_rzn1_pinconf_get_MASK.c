
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct rzn1_pinctrl {TYPE_2__* lev2; TYPE_1__* lev1; } ;
struct pinctrl_dev {int dummy; } ;
typedef enum pin_config_param { ____Placeholder_pin_config_param } pin_config_param ;
struct TYPE_4__ {int * conf; } ;
struct TYPE_3__ {int * conf; } ;


 unsigned int FUNC_0 (int *) ;
 int VAR_0 ;
 int VAR_1 ;





 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 unsigned long FUNC_1 (int,int) ;
 int FUNC_2 (unsigned long) ;
 struct rzn1_pinctrl* FUNC_3 (struct pinctrl_dev*) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static int FUNC_5(struct pinctrl_dev *VAR_10, unsigned int VAR_11,
       unsigned long *VAR_12)
{
 struct rzn1_pinctrl *VAR_13 = FUNC_3(VAR_10);
 enum pin_config_param VAR_14 = FUNC_2(*VAR_12);
 const u32 VAR_15[4] = { 4, 6, 8, 12 };
 u32 VAR_16, VAR_17, VAR_18;
 u32 VAR_19, VAR_20, VAR_21 = 0;

 if (VAR_11 >= FUNC_0(VAR_13->lev1->conf))
  return -VAR_0;

 VAR_19 = FUNC_4(&VAR_13->lev1->conf[VAR_11]);

 VAR_18 = VAR_19 & VAR_4;
 VAR_16 = (VAR_19 >> VAR_6) & 0x3;
 VAR_17 = (VAR_19 >> VAR_5) & 0x3;

 switch (VAR_14) {
 case 129:
  if (VAR_16 != VAR_9)
   return -VAR_0;
  break;
 case 130:
  if (VAR_16 != VAR_7)
   return -VAR_0;
  break;
 case 132:
  if (VAR_16 != VAR_8)
   return -VAR_0;
  break;
 case 128:
  VAR_21 = VAR_15[VAR_17];
  break;
 case 131:
  VAR_20 = FUNC_4(&VAR_13->lev2->conf[VAR_11]);
  if (VAR_18 == VAR_3) {
   if (VAR_20 != 0)
    return -VAR_0;
  } else if (VAR_18 != VAR_2) {
   return -VAR_0;
  }
  break;
 default:
  return -VAR_1;
 }

 *VAR_12 = FUNC_1(VAR_14, VAR_21);

 return 0;
}
