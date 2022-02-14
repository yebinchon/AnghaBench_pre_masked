
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct hvsi_priv {TYPE_2__* tty; scalar_t__ opened; int termno; int is_console; } ;
struct hvc_struct {int lock; } ;
struct TYPE_3__ {int c_cflag; } ;
struct TYPE_4__ {TYPE_1__ termios; } ;


 int VAR_0 ;
 int FUNC_0 (struct hvsi_priv*) ;
 int FUNC_1 (struct hvsi_priv*,int ) ;
 int FUNC_2 (char*,int ) ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (int *,unsigned long) ;
 int FUNC_5 (TYPE_2__*) ;

void FUNC_6(struct hvsi_priv *VAR_1, struct hvc_struct *VAR_2)
{
 unsigned long VAR_3;

 FUNC_2("HVSI@%x: close !\n", VAR_1->termno);

 if (!VAR_1->is_console) {
  FUNC_2("HVSI@%x: Not a console, tearing down\n",
    VAR_1->termno);


  FUNC_3(&VAR_2->lock, VAR_3);
  VAR_1->opened = 0;
  FUNC_4(&VAR_2->lock, VAR_3);


  if (!VAR_1->tty || (VAR_1->tty->termios.c_cflag & VAR_0))
   FUNC_1(VAR_1, 0);


  FUNC_0(VAR_1);
 }

 FUNC_5(VAR_1->tty);
 VAR_1->tty = ((void*)0);
}
