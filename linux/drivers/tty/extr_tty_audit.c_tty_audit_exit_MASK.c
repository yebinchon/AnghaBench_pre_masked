
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct tty_audit_buf {int dummy; } ;
struct TYPE_4__ {TYPE_1__* signal; } ;
struct TYPE_3__ {int tty_audit_buf; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 TYPE_2__* VAR_1 ;
 int FUNC_1 (struct tty_audit_buf*) ;
 int FUNC_2 (struct tty_audit_buf*) ;
 struct tty_audit_buf* FUNC_3 (int *,int ) ;

void FUNC_4(void)
{
 struct tty_audit_buf *VAR_2;

 VAR_2 = FUNC_3(&VAR_1->signal->tty_audit_buf, FUNC_0(-VAR_0));
 if (!VAR_2)
  return;

 FUNC_2(VAR_2);
 FUNC_1(VAR_2);
}
