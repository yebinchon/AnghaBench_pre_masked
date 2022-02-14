
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct tty_audit_buf {int mutex; } ;
struct TYPE_4__ {TYPE_1__* signal; } ;
struct TYPE_3__ {int audit_tty; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct tty_audit_buf*) ;
 TYPE_2__* VAR_2 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct tty_audit_buf*) ;
 struct tty_audit_buf* FUNC_4 () ;

int FUNC_5(void)
{
 struct tty_audit_buf *VAR_3;

 if (~VAR_2->signal->audit_tty & VAR_0)
  return -VAR_1;

 VAR_3 = FUNC_4();
 if (!FUNC_0(VAR_3)) {
  FUNC_1(&VAR_3->mutex);
  FUNC_3(VAR_3);
  FUNC_2(&VAR_3->mutex);
 }
 return 0;
}
