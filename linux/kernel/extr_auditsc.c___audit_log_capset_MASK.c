
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct cred {int cap_ambient; int cap_permitted; int cap_effective; } ;
struct TYPE_3__ {int ambient; int permitted; int inheritable; int effective; } ;
struct TYPE_4__ {TYPE_1__ cap; int pid; } ;
struct audit_context {int type; TYPE_2__ capset; } ;


 int VAR_0 ;
 struct audit_context* FUNC_0 () ;
 int VAR_1 ;
 int FUNC_1 (int ) ;

void FUNC_2(const struct cred *VAR_2, const struct cred *VAR_3)
{
 struct audit_context *VAR_4 = FUNC_0();
 VAR_4->capset.pid = FUNC_1(VAR_1);
 VAR_4->capset.cap.effective = VAR_2->cap_effective;
 VAR_4->capset.cap.inheritable = VAR_2->cap_effective;
 VAR_4->capset.cap.permitted = VAR_2->cap_permitted;
 VAR_4->capset.cap.ambient = VAR_2->cap_ambient;
 VAR_4->type = VAR_0;
}
