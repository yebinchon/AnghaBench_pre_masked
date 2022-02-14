
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct tty_audit_buf {int dummy; } ;
struct TYPE_4__ {TYPE_1__* signal; } ;
struct TYPE_3__ {struct tty_audit_buf* tty_audit_buf; } ;


 struct tty_audit_buf* FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (int) ;
 TYPE_2__* VAR_1 ;

__attribute__((used)) static struct tty_audit_buf *FUNC_2(void)
{
 struct tty_audit_buf *VAR_2;

 VAR_2 = VAR_1->signal->tty_audit_buf;
 FUNC_1(VAR_2 == FUNC_0(-VAR_0));
 return VAR_2;
}
