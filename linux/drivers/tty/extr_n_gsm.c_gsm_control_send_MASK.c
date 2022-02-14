
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct gsm_mux {int cretries; int n2; int t2; int control_lock; int t2_timer; TYPE_1__** dlci; struct gsm_control* pending_cmd; int event; } ;
struct gsm_control {unsigned int cmd; int len; int * data; } ;
struct TYPE_2__ {scalar_t__ mode; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct gsm_mux*,struct gsm_control*) ;
 scalar_t__ VAR_3 ;
 struct gsm_control* FUNC_1 (int,int ) ;
 int FUNC_2 (int *,scalar_t__) ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (int *,unsigned long) ;
 int FUNC_5 (int ,int ) ;

__attribute__((used)) static struct gsm_control *FUNC_6(struct gsm_mux *VAR_4,
  unsigned int VAR_5, u8 *VAR_6, int VAR_7)
{
 struct gsm_control *VAR_8 = FUNC_1(sizeof(struct gsm_control),
      VAR_1);
 unsigned long VAR_9;
 if (VAR_8 == ((void*)0))
  return ((void*)0);
retry:
 FUNC_5(VAR_4->event, VAR_4->pending_cmd == ((void*)0));
 FUNC_3(&VAR_4->control_lock, VAR_9);
 if (VAR_4->pending_cmd != ((void*)0)) {
  FUNC_4(&VAR_4->control_lock, VAR_9);
  goto retry;
 }
 VAR_8->cmd = VAR_5;
 VAR_8->data = VAR_6;
 VAR_8->len = VAR_7;
 VAR_4->pending_cmd = VAR_8;


 if (VAR_4->dlci[0]->mode == VAR_0)
  VAR_4->cretries = 1;
 else
  VAR_4->cretries = VAR_4->n2;

 FUNC_2(&VAR_4->t2_timer, VAR_3 + VAR_4->t2 * VAR_2 / 100);
 FUNC_0(VAR_4, VAR_8);
 FUNC_4(&VAR_4->control_lock, VAR_9);
 return VAR_8;
}
