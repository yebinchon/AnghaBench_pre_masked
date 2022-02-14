
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_8__ {TYPE_3__* tty; } ;
struct TYPE_5__ {scalar_t__ mode; } ;
struct mgsl_struct {int irq_spinlock; TYPE_4__ port; scalar_t__ netcount; scalar_t__ dsr_chkcount; scalar_t__ ri_chkcount; scalar_t__ cts_chkcount; scalar_t__ dcd_chkcount; TYPE_1__ params; scalar_t__ xmit_tail; scalar_t__ xmit_head; scalar_t__ xmit_cnt; } ;
struct TYPE_6__ {int c_cflag; } ;
struct TYPE_7__ {TYPE_2__ termios; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 int FUNC_0 (int *,unsigned long) ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (struct mgsl_struct*,int ) ;
 int FUNC_3 (struct mgsl_struct*,scalar_t__) ;
 int FUNC_4 (struct mgsl_struct*) ;
 int FUNC_5 (struct mgsl_struct*) ;
 int FUNC_6 (struct mgsl_struct*) ;
 int FUNC_7 (struct mgsl_struct*) ;
 int FUNC_8 (struct mgsl_struct*) ;
 int FUNC_9 (struct mgsl_struct*) ;
 int FUNC_10 (struct mgsl_struct*) ;

__attribute__((used)) static void FUNC_11(struct mgsl_struct *VAR_8)
{
 unsigned long VAR_9;

 FUNC_0(&VAR_8->irq_spinlock,VAR_9);

 FUNC_9(VAR_8);
 FUNC_10(VAR_8);
 VAR_8->xmit_cnt = VAR_8->xmit_head = VAR_8->xmit_tail = 0;

 if (VAR_8->params.mode == VAR_2 ||
     VAR_8->params.mode == VAR_3 ||
     VAR_8->netcount)
  FUNC_7(VAR_8);
 else
  FUNC_5(VAR_8);

 FUNC_6(VAR_8);

 VAR_8->dcd_chkcount = 0;
 VAR_8->cts_chkcount = 0;
 VAR_8->ri_chkcount = 0;
 VAR_8->dsr_chkcount = 0;

 FUNC_3(VAR_8,VAR_4+VAR_6+VAR_5+VAR_7);
 FUNC_2(VAR_8, VAR_1);
 FUNC_4(VAR_8);

 if (VAR_8->netcount || VAR_8->port.tty->termios.c_cflag & VAR_0)
  FUNC_8(VAR_8);

 FUNC_1(&VAR_8->irq_spinlock,VAR_9);
}
