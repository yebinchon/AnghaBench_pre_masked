
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hotplug_slot {int dummy; } ;
struct controller {int state; int request_result; int state_lock; int pending_events; int requester; } ;




 int VAR_0 ;
 int VAR_1 ;




 int FUNC_0 (int *) ;
 int FUNC_1 (struct controller*,char*,int ,int) ;
 int FUNC_2 (struct controller*,char*,int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (struct controller*,int ) ;
 int FUNC_6 (struct controller*) ;
 struct controller* FUNC_7 (struct hotplug_slot*) ;
 int FUNC_8 (int ,int) ;

int FUNC_9(struct hotplug_slot *VAR_2)
{
 struct controller *VAR_3 = FUNC_7(VAR_2);

 FUNC_3(&VAR_3->state_lock);
 switch (VAR_3->state) {
 case 133:
 case 130:
  FUNC_4(&VAR_3->state_lock);
  FUNC_5(VAR_3, VAR_0);
  FUNC_8(VAR_3->requester,
      !FUNC_0(&VAR_3->pending_events));
  return VAR_3->request_result;
 case 129:
  FUNC_2(VAR_3, "Slot(%s): Already in powering off state\n",
     FUNC_6(VAR_3));
  break;
 case 132:
 case 131:
 case 128:
  FUNC_2(VAR_3, "Slot(%s): Already disabled\n",
     FUNC_6(VAR_3));
  break;
 default:
  FUNC_1(VAR_3, "Slot(%s): Invalid state %#x\n",
    FUNC_6(VAR_3), VAR_3->state);
  break;
 }
 FUNC_4(&VAR_3->state_lock);

 return -VAR_1;
}
