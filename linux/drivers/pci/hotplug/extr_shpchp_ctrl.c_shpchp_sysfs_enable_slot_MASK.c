
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct slot {int state; int lock; int work; struct controller* ctrl; } ;
struct controller {int dummy; } ;




 int VAR_0 ;



 int FUNC_0 (int *) ;
 int FUNC_1 (struct controller*,char*,int ) ;
 int FUNC_2 (struct controller*,char*,int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (struct slot*) ;
 int FUNC_6 (struct slot*) ;

int FUNC_7(struct slot *VAR_1)
{
 int VAR_2 = -VAR_0;
 struct controller *VAR_3 = VAR_1->ctrl;

 FUNC_3(&VAR_1->lock);
 switch (VAR_1->state) {
 case 131:
  FUNC_0(&VAR_1->work);

 case 128:
  VAR_1->state = 129;
  FUNC_4(&VAR_1->lock);
  VAR_2 = FUNC_5(VAR_1);
  FUNC_3(&VAR_1->lock);
  VAR_1->state = 128;
  break;
 case 129:
  FUNC_2(VAR_3, "Slot %s is already in powering on state\n",
     FUNC_6(VAR_1));
  break;
 case 132:
 case 130:
  FUNC_2(VAR_3, "Already enabled on slot %s\n",
     FUNC_6(VAR_1));
  break;
 default:
  FUNC_1(VAR_3, "Not a valid state on slot %s\n",
    FUNC_6(VAR_1));
  break;
 }
 FUNC_4(&VAR_1->lock);

 return VAR_2;
}
