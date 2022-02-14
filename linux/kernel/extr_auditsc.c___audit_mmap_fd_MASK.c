
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int fd; int flags; } ;
struct audit_context {int type; TYPE_1__ mmap; } ;


 int VAR_0 ;
 struct audit_context* FUNC_0 () ;

void FUNC_1(int VAR_1, int VAR_2)
{
 struct audit_context *VAR_3 = FUNC_0();
 VAR_3->mmap.fd = VAR_1;
 VAR_3->mmap.flags = VAR_2;
 VAR_3->type = VAR_0;
}
