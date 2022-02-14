
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct controller {int state; int state_lock; int request_result; int button_work; } ;






 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (struct controller*,char*,int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (struct controller*) ;
 int FUNC_5 (struct controller*) ;
 int FUNC_6 (struct controller*,int ) ;
 int FUNC_7 (struct controller*) ;
 int FUNC_8 (struct controller*) ;

void FUNC_9(struct controller *VAR_5, u32 VAR_6)
{
 bool VAR_7, VAR_8;





 FUNC_2(&VAR_5->state_lock);
 switch (VAR_5->state) {
 case 131:
  FUNC_0(&VAR_5->button_work);

 case 128:
  VAR_5->state = VAR_2;
  FUNC_3(&VAR_5->state_lock);
  if (VAR_6 & VAR_0)
   FUNC_1(VAR_5, "Slot(%s): Link Down\n",
      FUNC_8(VAR_5));
  if (VAR_6 & VAR_1)
   FUNC_1(VAR_5, "Slot(%s): Card not present\n",
      FUNC_8(VAR_5));
  FUNC_6(VAR_5, VAR_4);
  break;
 default:
  FUNC_3(&VAR_5->state_lock);
  break;
 }


 FUNC_2(&VAR_5->state_lock);
 VAR_7 = FUNC_4(VAR_5);
 VAR_8 = FUNC_5(VAR_5);
 if (!VAR_7 && !VAR_8) {
  FUNC_3(&VAR_5->state_lock);
  return;
 }

 switch (VAR_5->state) {
 case 130:
  FUNC_0(&VAR_5->button_work);

 case 129:
  VAR_5->state = VAR_3;
  FUNC_3(&VAR_5->state_lock);
  if (VAR_7)
   FUNC_1(VAR_5, "Slot(%s): Card present\n",
      FUNC_8(VAR_5));
  if (VAR_8)
   FUNC_1(VAR_5, "Slot(%s): Link Up\n",
      FUNC_8(VAR_5));
  VAR_5->request_result = FUNC_7(VAR_5);
  break;
 default:
  FUNC_3(&VAR_5->state_lock);
  break;
 }
}
