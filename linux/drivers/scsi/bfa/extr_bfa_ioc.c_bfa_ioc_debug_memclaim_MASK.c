
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bfa_ioc_s {int dbg_fwsave_len; void* dbg_fwsave; } ;


 int VAR_0 ;

void
FUNC_0(struct bfa_ioc_s *VAR_1, void *VAR_2)
{
 VAR_1->dbg_fwsave = VAR_2;
 VAR_1->dbg_fwsave_len = VAR_0;
}
