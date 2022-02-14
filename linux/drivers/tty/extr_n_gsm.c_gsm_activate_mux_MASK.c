
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gsm_mux {scalar_t__ encoding; int num; scalar_t__ dead; int error; int receive; int tx_lock; int control_lock; int event; int t2_timer; } ;
struct gsm_dlci {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 struct gsm_dlci* FUNC_0 (struct gsm_mux*,int ) ;
 int VAR_6 ;
 struct gsm_mux** VAR_7 ;
 int VAR_8 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *,int ,int ) ;

__attribute__((used)) static int FUNC_6(struct gsm_mux *VAR_9)
{
 struct gsm_dlci *VAR_10;
 int VAR_11 = 0;

 FUNC_5(&VAR_9->t2_timer, VAR_5, 0);
 FUNC_1(&VAR_9->event);
 FUNC_3(&VAR_9->control_lock);
 FUNC_3(&VAR_9->tx_lock);

 if (VAR_9->encoding == 0)
  VAR_9->receive = VAR_3;
 else
  VAR_9->receive = VAR_4;
 VAR_9->error = VAR_6;

 FUNC_2(&VAR_8);
 for (VAR_11 = 0; VAR_11 < VAR_2; VAR_11++) {
  if (VAR_7[VAR_11] == ((void*)0)) {
   VAR_9->num = VAR_11;
   VAR_7[VAR_11] = VAR_9;
   break;
  }
 }
 FUNC_4(&VAR_8);
 if (VAR_11 == VAR_2)
  return -VAR_0;

 VAR_10 = FUNC_0(VAR_9, 0);
 if (VAR_10 == ((void*)0))
  return -VAR_1;
 VAR_9->dead = 0;
 return 0;
}
