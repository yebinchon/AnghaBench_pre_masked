
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hvc_struct {int dummy; } ;
struct hvc_iucv_private {int lock; scalar_t__ sndbuf_len; int tty_state; int tty_inqueue; int tty_outqueue; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (struct hvc_iucv_private*) ;
 struct hvc_iucv_private* FUNC_2 (int) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static void FUNC_5(struct hvc_struct *VAR_1, int VAR_2)
{
 struct hvc_iucv_private *VAR_3;

 VAR_3 = FUNC_2(VAR_2);
 if (!VAR_3)
  return;

 FUNC_1(VAR_3);

 FUNC_3(&VAR_3->lock);
 FUNC_0(&VAR_3->tty_outqueue);
 FUNC_0(&VAR_3->tty_inqueue);
 VAR_3->tty_state = VAR_0;
 VAR_3->sndbuf_len = 0;
 FUNC_4(&VAR_3->lock);
}
