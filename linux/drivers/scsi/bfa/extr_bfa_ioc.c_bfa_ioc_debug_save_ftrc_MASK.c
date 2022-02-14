
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bfa_ioc_s {int dbg_fwsave_len; int dbg_fwsave; scalar_t__ dbg_fwsave_once; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct bfa_ioc_s*,int ,int*) ;

void
FUNC_1(struct bfa_ioc_s *VAR_1)
{
 int VAR_2;

 if (VAR_1->dbg_fwsave_once) {
  VAR_1->dbg_fwsave_once = VAR_0;
  if (VAR_1->dbg_fwsave_len) {
   VAR_2 = VAR_1->dbg_fwsave_len;
   FUNC_0(VAR_1, VAR_1->dbg_fwsave, &VAR_2);
  }
 }
}
