
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct rzn1_pinctrl {TYPE_1__* lev1; int dev; } ;
struct pinctrl_dev {int dummy; } ;
typedef enum pin_config_param { ____Placeholder_pin_config_param } pin_config_param ;
struct TYPE_2__ {int * conf; } ;


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
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int FUNC_1 (int ,char*,unsigned int,...) ;
 int FUNC_2 (int ,char*,int) ;
 int FUNC_3 (unsigned long) ;
 int FUNC_4 (unsigned long) ;
 struct rzn1_pinctrl* FUNC_5 (struct pinctrl_dev*) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (struct rzn1_pinctrl*,int ,int ) ;
 int FUNC_8 (int,int *) ;

__attribute__((used)) static int FUNC_9(struct pinctrl_dev *VAR_14, unsigned int VAR_15,
       unsigned long *VAR_16, unsigned int VAR_17)
{
 struct rzn1_pinctrl *VAR_18 = FUNC_5(VAR_14);
 enum pin_config_param VAR_19;
 unsigned int VAR_20;
 u32 VAR_21, VAR_22;
 u32 VAR_23;
 u32 VAR_24;

 if (VAR_15 >= FUNC_0(VAR_18->lev1->conf))
  return -VAR_0;

 VAR_21 = FUNC_6(&VAR_18->lev1->conf[VAR_15]);
 VAR_22 = VAR_21;

 for (VAR_20 = 0; VAR_20 < VAR_17; VAR_20++) {
  VAR_19 = FUNC_4(VAR_16[VAR_20]);
  VAR_24 = FUNC_3(VAR_16[VAR_20]);

  switch (VAR_19) {
  case 129:
   FUNC_1(VAR_18->dev, "set pin %d pull up\n", VAR_15);
   VAR_21 &= ~(0x3 << VAR_10);
   VAR_21 |= (VAR_13 << VAR_10);
   break;
  case 130:
   FUNC_1(VAR_18->dev, "set pin %d pull down\n", VAR_15);
   VAR_21 &= ~(0x3 << VAR_10);
   VAR_21 |= (VAR_11 << VAR_10);
   break;
  case 132:
   FUNC_1(VAR_18->dev, "set pin %d bias off\n", VAR_15);
   VAR_21 &= ~(0x3 << VAR_10);
   VAR_21 |= (VAR_12 << VAR_10);
   break;
  case 128:
   FUNC_1(VAR_18->dev, "set pin %d drv %umA\n", VAR_15, VAR_24);
   switch (VAR_24) {
   case 4:
    VAR_23 = VAR_7;
    break;
   case 6:
    VAR_23 = VAR_8;
    break;
   case 8:
    VAR_23 = VAR_9;
    break;
   case 12:
    VAR_23 = VAR_6;
    break;
   default:
    FUNC_2(VAR_18->dev,
     "Drive strength %umA not supported\n",
     VAR_24);

    return -VAR_0;
   }

   VAR_21 &= ~(0x3 << VAR_5);
   VAR_21 |= (VAR_23 << VAR_5);
   break;

  case 131:
   FUNC_1(VAR_18->dev, "set pin %d High-Z\n", VAR_15);
   VAR_21 &= ~VAR_4;
   VAR_21 |= VAR_3;
   break;
  default:
   return -VAR_1;
  }
 }

 if (VAR_21 != VAR_22) {
  FUNC_7(VAR_18, VAR_2, VAR_2);
  FUNC_8(VAR_21, &VAR_18->lev1->conf[VAR_15]);
  FUNC_7(VAR_18, VAR_2, 0);
 }

 return 0;
}
