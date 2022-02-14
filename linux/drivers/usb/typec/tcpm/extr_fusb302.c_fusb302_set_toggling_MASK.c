
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fusb302_chip {int intr_bc_lvl; int intr_comp_chng; int intr_togdone; int toggling_mode; void* cc2; void* cc1; int vconn_on; } ;
typedef enum toggling_mode { ____Placeholder_toggling_mode } toggling_mode ;


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




 void* VAR_12 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (struct fusb302_chip*,int ,int) ;
 int FUNC_2 (struct fusb302_chip*,int ,int ,int ) ;
 int FUNC_3 (struct fusb302_chip*,int ,int) ;

__attribute__((used)) static int FUNC_4(struct fusb302_chip *VAR_13,
    enum toggling_mode VAR_14)
{
 int VAR_15 = 0;


 VAR_15 = FUNC_1(VAR_13, VAR_0,
         VAR_6);
 if (VAR_15 < 0)
  return VAR_15;

 VAR_15 = FUNC_3(VAR_13, VAR_7,
       VAR_10 |
       VAR_11);
 if (VAR_15 < 0)
  return VAR_15;
 VAR_13->intr_bc_lvl = 0;
 VAR_13->intr_comp_chng = 0;

 switch (VAR_14) {
 case 130:
  VAR_15 = FUNC_2(VAR_13, VAR_0,
          VAR_3,
          VAR_4);
  if (VAR_15 < 0)
   return VAR_15;
  break;
 case 129:
  VAR_15 = FUNC_2(VAR_13, VAR_0,
          VAR_3,
          VAR_5);
  if (VAR_15 < 0)
   return VAR_15;
  break;
 case 128:
  VAR_15 = FUNC_2(VAR_13, VAR_0,
          VAR_3,
          VAR_1);
  if (VAR_15 < 0)
   return VAR_15;
  break;
 case 131:
  VAR_15 = FUNC_2(VAR_13, VAR_0,
          VAR_3,
          VAR_2);
  if (VAR_15 < 0)
   return VAR_15;
  break;
 default:
  break;
 }

 if (VAR_14 == 130) {

  VAR_15 = FUNC_3(VAR_13, VAR_8,
        VAR_9);
  if (VAR_15 < 0)
   return VAR_15;
  VAR_13->intr_togdone = 0;
 } else {

  FUNC_0(VAR_13->vconn_on, "Vconn is on during toggle start");

  VAR_15 = FUNC_1(VAR_13, VAR_8,
          VAR_9);
  if (VAR_15 < 0)
   return VAR_15;
  VAR_13->intr_togdone = 1;

  VAR_15 = FUNC_3(VAR_13, VAR_0,
        VAR_6);
  if (VAR_15 < 0)
   return VAR_15;

  VAR_13->cc1 = VAR_12;
  VAR_13->cc2 = VAR_12;
 }
 VAR_13->toggling_mode = VAR_14;

 return VAR_15;
}
