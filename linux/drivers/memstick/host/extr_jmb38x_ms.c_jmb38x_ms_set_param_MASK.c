
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct memstick_host {int dummy; } ;
struct jmb38x_ms_host {int ifmode; TYPE_1__* chip; scalar_t__ addr; int id; } ;
typedef enum memstick_param { ____Placeholder_memstick_param } memstick_param ;
struct TYPE_4__ {int dev; } ;
struct TYPE_3__ {TYPE_2__* pdev; } ;


 scalar_t__ VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 unsigned int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 unsigned int VAR_7 ;
 unsigned int VAR_8 ;
 unsigned int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 unsigned int VAR_14 ;
 unsigned int VAR_15 ;
 unsigned int VAR_16 ;
 unsigned int VAR_17 ;

 int VAR_18 ;
 int VAR_19 ;

 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 scalar_t__ VAR_23 ;
 unsigned int VAR_24 ;
 scalar_t__ VAR_25 ;
 unsigned int VAR_26 ;
 unsigned int VAR_27 ;
 unsigned int VAR_28 ;
 int VAR_29 ;
 int FUNC_0 (int *,char*,...) ;
 int FUNC_1 (struct jmb38x_ms_host*) ;
 struct jmb38x_ms_host* FUNC_2 (struct memstick_host*) ;
 int FUNC_3 (int) ;
 int FUNC_4 (TYPE_2__*,int ,unsigned int) ;
 unsigned int FUNC_5 (scalar_t__) ;
 int FUNC_6 (unsigned int,scalar_t__) ;

__attribute__((used)) static int FUNC_7(struct memstick_host *VAR_30,
          enum memstick_param VAR_31,
          int VAR_32)
{
 struct jmb38x_ms_host *VAR_33 = FUNC_2(VAR_30);
 unsigned int VAR_34 = FUNC_5(VAR_33->addr + VAR_6);
 unsigned int VAR_35 = VAR_3, VAR_36 = 0;
 int VAR_37 = 0;

 switch (VAR_31) {
 case 128:
  if (VAR_32 == VAR_21) {
   VAR_37 = FUNC_1(VAR_33);
   if (VAR_37)
    return VAR_37;

   VAR_34 = 7;
   VAR_34 |= VAR_14
     | VAR_7;
   FUNC_6(VAR_34, VAR_33->addr + VAR_6);

   FUNC_6(VAR_33->id ? VAR_28
     : VAR_27,
          VAR_33->addr + VAR_25);

   FUNC_6(VAR_24,
          VAR_33->addr + VAR_23);

   FUNC_3(10);
   FUNC_0(&VAR_33->chip->pdev->dev, "power on\n");
  } else if (VAR_32 == VAR_20) {
   VAR_34 &= ~(VAR_14
          | VAR_7);
   FUNC_6(VAR_34, VAR_33->addr + VAR_6);
   FUNC_6(0, VAR_33->addr + VAR_23);
   FUNC_6(VAR_26, VAR_33->addr + VAR_25);
   FUNC_0(&VAR_33->chip->pdev->dev, "power off\n");
  } else
   return -VAR_5;
  break;
 case 129:
  FUNC_0(&VAR_33->chip->pdev->dev,
   "Set Host Interface Mode to %d\n", VAR_32);
  VAR_34 &= ~(VAR_8 | VAR_15 |
         VAR_16);
  VAR_34 |= VAR_17 | VAR_9;
  VAR_34 &= ~(3 << VAR_13);

  if (VAR_32 == VAR_22) {
   VAR_34 |= VAR_12
        << VAR_13;
   VAR_34 |= VAR_15;
   VAR_35 |= VAR_1;
   VAR_36 = 0;
  } else if (VAR_32 == VAR_18) {
   VAR_34 |= VAR_8;
   VAR_34 |= VAR_10
        << VAR_13;
   VAR_34 |= VAR_16;
   VAR_35 |= VAR_1;
   VAR_36 = 4;
  } else if (VAR_32 == VAR_19) {
   VAR_34 |= VAR_8;
   VAR_34 |= VAR_11
        << VAR_13;
   VAR_35 |= VAR_2;
   VAR_36 = 0;
  } else
   return -VAR_5;

  FUNC_6(VAR_34, VAR_33->addr + VAR_6);
  FUNC_6(VAR_4, VAR_33->addr + VAR_0);
  FUNC_6(VAR_35, VAR_33->addr + VAR_0);
  FUNC_4(VAR_33->chip->pdev,
          VAR_29 + 1,
          VAR_36);
  VAR_33->ifmode = VAR_32;
  break;
 };
 return 0;
}
