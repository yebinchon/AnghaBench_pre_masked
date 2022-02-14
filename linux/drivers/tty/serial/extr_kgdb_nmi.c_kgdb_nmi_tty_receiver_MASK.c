
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct timer_list {int dummy; } ;
struct TYPE_2__ {scalar_t__ expires; } ;
struct kgdb_nmi_tty_priv {int port; int fifo; TYPE_1__ timer; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (int *) ;
 struct kgdb_nmi_tty_priv* FUNC_2 (int ,struct timer_list*,int ) ;
 scalar_t__ VAR_2 ;
 int FUNC_3 (int *) ;
 scalar_t__ FUNC_4 (int *,char*,int) ;
 int VAR_3 ;
 scalar_t__ FUNC_5 (int) ;
 struct kgdb_nmi_tty_priv* VAR_4 ;
 int VAR_5 ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *,char,int ) ;

__attribute__((used)) static void FUNC_8(struct timer_list *VAR_6)
{
 struct kgdb_nmi_tty_priv *VAR_7 = FUNC_2(VAR_7, VAR_6, VAR_5);
 char VAR_8;

 VAR_7->timer.expires = VAR_2 + (VAR_0/100);
 FUNC_0(&VAR_7->timer);

 if (FUNC_5(!FUNC_1(&VAR_3) ||
     !FUNC_3(&VAR_7->fifo)))
  return;

 while (FUNC_4(&VAR_7->fifo, &VAR_8, 1))
  FUNC_7(&VAR_7->port, VAR_8, VAR_1);
 FUNC_6(&VAR_7->port);
}
