
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct pcmcia_socket {int state; int suspended_state; TYPE_1__* callback; int dev; scalar_t__ resume_status; int ops_mutex; } ;
struct TYPE_2__ {int (* early_resume ) (struct pcmcia_socket*) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int *,char*,int,int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct pcmcia_socket*) ;
 int FUNC_4 (struct pcmcia_socket*) ;
 int FUNC_5 (struct pcmcia_socket*) ;

__attribute__((used)) static int FUNC_6(struct pcmcia_socket *VAR_5)
{
 int VAR_6 = 0;

 FUNC_1(&VAR_5->ops_mutex);
 VAR_5->state &= ~(VAR_4 | VAR_2);
 FUNC_2(&VAR_5->ops_mutex);

 if (!(VAR_5->state & VAR_3)) {
  VAR_6 = FUNC_3(VAR_5);
  if (VAR_6 == -VAR_0)
   VAR_6 = 0;
  return VAR_6;
 }

 if (VAR_5->resume_status) {
  FUNC_4(VAR_5);
  return 0;
 }

 if (VAR_5->suspended_state != VAR_5->state) {
  FUNC_0(&VAR_5->dev,
   "suspend state 0x%x != resume state 0x%x\n",
   VAR_5->suspended_state, VAR_5->state);

  FUNC_4(VAR_5);
  return FUNC_3(VAR_5);
 }

 if (!(VAR_5->state & VAR_1) && (VAR_5->callback))
  VAR_6 = VAR_5->callback->early_resume(VAR_5);
 return VAR_6;
}
