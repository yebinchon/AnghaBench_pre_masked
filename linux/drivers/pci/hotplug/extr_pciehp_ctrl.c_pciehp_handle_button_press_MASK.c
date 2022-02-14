
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct controller {int state; int state_lock; int button_work; } ;




 int VAR_0 ;


 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (struct controller*,char*,int ,int) ;
 int FUNC_2 (struct controller*,char*,int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (struct controller*,int ,int ) ;
 int FUNC_6 (int *,int) ;
 int FUNC_7 (struct controller*) ;

void FUNC_8(struct controller *VAR_5)
{
 FUNC_3(&VAR_5->state_lock);
 switch (VAR_5->state) {
 case 129:
 case 128:
  if (VAR_5->state == 128) {
   VAR_5->state = 131;
   FUNC_2(VAR_5, "Slot(%s): Powering off due to button press\n",
      FUNC_7(VAR_5));
  } else {
   VAR_5->state = 130;
   FUNC_2(VAR_5, "Slot(%s) Powering on due to button press\n",
      FUNC_7(VAR_5));
  }

  FUNC_5(VAR_5, VAR_2,
          VAR_1);
  FUNC_6(&VAR_5->button_work, 5 * VAR_0);
  break;
 case 131:
 case 130:





  FUNC_2(VAR_5, "Slot(%s): Button cancel\n", FUNC_7(VAR_5));
  FUNC_0(&VAR_5->button_work);
  if (VAR_5->state == 131) {
   VAR_5->state = 128;
   FUNC_5(VAR_5, VAR_4,
           VAR_1);
  } else {
   VAR_5->state = 129;
   FUNC_5(VAR_5, VAR_3,
           VAR_1);
  }
  FUNC_2(VAR_5, "Slot(%s): Action canceled due to button press\n",
     FUNC_7(VAR_5));
  break;
 default:
  FUNC_1(VAR_5, "Slot(%s): Ignoring invalid state %#x\n",
    FUNC_7(VAR_5), VAR_5->state);
  break;
 }
 FUNC_4(&VAR_5->state_lock);
}
