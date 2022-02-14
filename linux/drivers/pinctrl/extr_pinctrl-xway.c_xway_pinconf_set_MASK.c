
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct pinctrl_dev {int dev; } ;
struct ltq_pinmux_info {int * membase; } ;
typedef enum ltq_pinconf_param { ____Placeholder_ltq_pinconf_param } ltq_pinconf_param ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (unsigned int) ;
 int FUNC_1 (unsigned int) ;
 int FUNC_2 (unsigned int) ;
 int FUNC_3 (unsigned int) ;



 int FUNC_4 (unsigned long) ;
 int FUNC_5 (unsigned long) ;
 int FUNC_6 (unsigned int) ;
 int VAR_4 ;
 int FUNC_7 (unsigned int) ;
 int FUNC_8 (int ,char*,int) ;
 int FUNC_9 (int ,int ,int ) ;
 int FUNC_10 (int ,int ,int ) ;
 struct ltq_pinmux_info* FUNC_11 (struct pinctrl_dev*) ;

__attribute__((used)) static int FUNC_12(struct pinctrl_dev *VAR_5,
    unsigned VAR_6,
    unsigned long *VAR_7,
    unsigned VAR_8)
{
 struct ltq_pinmux_info *VAR_9 = FUNC_11(VAR_5);
 enum ltq_pinconf_param VAR_10;
 int VAR_11;
 int VAR_12 = FUNC_6(VAR_6);
 u32 VAR_13;
 int VAR_14;

 for (VAR_14 = 0; VAR_14 < VAR_8; VAR_14++) {
  VAR_10 = FUNC_5(VAR_7[VAR_14]);
  VAR_11 = FUNC_4(VAR_7[VAR_14]);

  switch (VAR_10) {
  case 130:
   if (VAR_12 == VAR_4)
    VAR_13 = VAR_1;
   else
    VAR_13 = FUNC_1(VAR_6);
   if (VAR_11 == 0)
    FUNC_10(VAR_9->membase[0],
     VAR_13,
     FUNC_7(VAR_6));
   else
    FUNC_9(VAR_9->membase[0],
     VAR_13,
     FUNC_7(VAR_6));
   break;

  case 128:
   if (VAR_12 == VAR_4)
    VAR_13 = VAR_2;
   else
    VAR_13 = FUNC_2(VAR_6);
   if (VAR_11 == 0) {
    FUNC_9(VAR_9->membase[0],
     VAR_13,
     FUNC_7(VAR_6));
    break;
   }
   FUNC_10(VAR_9->membase[0], VAR_13, FUNC_7(VAR_6));

   if (VAR_12 == VAR_4)
    VAR_13 = VAR_3;
   else
    VAR_13 = FUNC_3(VAR_6);
   if (VAR_11 == 1)
    FUNC_9(VAR_9->membase[0],
     VAR_13,
     FUNC_7(VAR_6));
   else if (VAR_11 == 2)
    FUNC_10(VAR_9->membase[0],
     VAR_13,
     FUNC_7(VAR_6));
   else
    FUNC_8(VAR_5->dev,
     "Invalid pull value %d\n", VAR_11);
   break;

  case 129:
   VAR_13 = FUNC_0(VAR_6);
   if (VAR_11 == 0)
    FUNC_9(VAR_9->membase[0],
     VAR_13,
     FUNC_7(VAR_6));
   else
    FUNC_10(VAR_9->membase[0],
     VAR_13,
     FUNC_7(VAR_6));
   break;

  default:
   FUNC_8(VAR_5->dev,
    "Invalid config param %04x\n", VAR_10);
   return -VAR_0;
  }
 }

 return 0;
}
