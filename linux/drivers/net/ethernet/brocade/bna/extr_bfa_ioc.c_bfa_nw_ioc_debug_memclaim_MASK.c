
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ auto_recover; } ;
struct bfa_ioc {TYPE_1__ iocpf; int dbg_fwsave_len; void* dbg_fwsave; } ;


 int VAR_0 ;

void
FUNC_0(struct bfa_ioc *VAR_1, void *VAR_2)
{
 VAR_1->dbg_fwsave = VAR_2;
 VAR_1->dbg_fwsave_len = VAR_1->iocpf.auto_recover ? VAR_0 : 0;
}
