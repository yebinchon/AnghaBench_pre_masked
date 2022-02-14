
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct controller {int state; int request_result; int state_lock; int button_work; } ;




 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct controller*,int ) ;

void FUNC_4(struct controller *VAR_2)
{
 FUNC_1(&VAR_2->state_lock);
 switch (VAR_2->state) {
 case 128:
 case 129:
  FUNC_0(&VAR_2->button_work);
  break;
 }
 VAR_2->state = VAR_0;
 FUNC_2(&VAR_2->state_lock);

 VAR_2->request_result = FUNC_3(VAR_2, VAR_1);
}
