
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct timer_list {int dummy; } ;
struct TYPE_2__ {int expires; } ;
struct proto {int state; TYPE_1__ timer; int dev; int pid; int restart_counter; } ;
struct ppp {int last_pong; int keepalive_timeout; int keepalive_interval; int lock; int echo_id; int seq; } ;




 int VAR_0 ;
 int VAR_1 ;

 int VAR_2 ;

 int VAR_3 ;
 int VAR_4 ;

 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (TYPE_1__*) ;
 struct proto* FUNC_1 (int ,struct timer_list*,int ) ;
 struct ppp* FUNC_2 (int ) ;
 int VAR_7 ;
 int FUNC_3 (int ,char*) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ,int ,int ,int ,int ,int ,int *) ;
 int FUNC_6 (int ,int ,int ,int ,int ,int *) ;
 int FUNC_7 () ;
 struct proto* VAR_8 ;
 int FUNC_8 (int *,unsigned long) ;
 int FUNC_9 (int *,unsigned long) ;
 int FUNC_10 (int,int) ;
 int VAR_9 ;

__attribute__((used)) static void FUNC_11(struct timer_list *VAR_10)
{
 struct proto *VAR_11 = FUNC_1(VAR_11, VAR_10, VAR_9);
 struct ppp *VAR_12 = FUNC_2(VAR_11->dev);
 unsigned long VAR_13;

 FUNC_8(&VAR_12->lock, VAR_13);
 switch (VAR_11->state) {
 case 128:
 case 129:
 case 132:
 case 131:
  if (VAR_11->restart_counter) {
   FUNC_5(VAR_11->dev, VAR_11->pid, VAR_6, 0, 0,
         0, ((void*)0));
   VAR_11->restart_counter--;
  } else if (FUNC_4(VAR_11->dev))
   FUNC_5(VAR_11->dev, VAR_11->pid, VAR_6, 0, 0,
         0, ((void*)0));
  else
   FUNC_5(VAR_11->dev, VAR_11->pid, VAR_5, 0, 0,
         0, ((void*)0));
  break;

 case 130:
  if (VAR_11->pid != VAR_2)
   break;
  if (FUNC_10(VAR_7, VAR_12->last_pong +
          VAR_12->keepalive_timeout * VAR_0)) {
   FUNC_3(VAR_11->dev, "Link down\n");
   FUNC_5(VAR_11->dev, VAR_2, VAR_4, 0, 0, 0, ((void*)0));
   FUNC_5(VAR_11->dev, VAR_2, VAR_3, 0, 0, 0, ((void*)0));
  } else {
   VAR_12->echo_id = ++VAR_12->seq;
   FUNC_6(VAR_11->dev, VAR_2, VAR_1,
      VAR_12->echo_id, 0, ((void*)0));
   VAR_11->timer.expires = VAR_7 +
    VAR_12->keepalive_interval * VAR_0;
   FUNC_0(&VAR_11->timer);
  }
  break;
 }
 FUNC_9(&VAR_12->lock, VAR_13);
 FUNC_7();
}
