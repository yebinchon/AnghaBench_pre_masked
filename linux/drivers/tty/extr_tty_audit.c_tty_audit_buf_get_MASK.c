
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct tty_audit_buf {int dummy; } ;
struct TYPE_4__ {TYPE_1__* signal; } ;
struct TYPE_3__ {int tty_audit_buf; } ;


 int FUNC_0 (char*) ;
 int * FUNC_1 (int *,int *,struct tty_audit_buf*) ;
 TYPE_2__* VAR_0 ;
 struct tty_audit_buf* FUNC_2 () ;
 int FUNC_3 (struct tty_audit_buf*) ;
 struct tty_audit_buf* FUNC_4 () ;

__attribute__((used)) static struct tty_audit_buf *FUNC_5(void)
{
 struct tty_audit_buf *VAR_1;

 VAR_1 = FUNC_4();
 if (VAR_1)
  return VAR_1;

 VAR_1 = FUNC_2();
 if (VAR_1 == ((void*)0)) {
  FUNC_0("out of memory in TTY auditing");
  return ((void*)0);
 }


 if (FUNC_1(&VAR_0->signal->tty_audit_buf, ((void*)0), VAR_1) != ((void*)0))
  FUNC_3(VAR_1);
 return FUNC_4();
}
