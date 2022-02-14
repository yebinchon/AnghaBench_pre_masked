
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bfa_ioc {int dbg_fwsave_once; int dbg_fwsave_len; int dbg_fwsave; } ;


 int FUNC_0 (struct bfa_ioc*,int ,int*) ;

__attribute__((used)) static void
FUNC_1(struct bfa_ioc *VAR_0)
{
 int VAR_1;

 if (VAR_0->dbg_fwsave_once) {
  VAR_0->dbg_fwsave_once = 0;
  if (VAR_0->dbg_fwsave_len) {
   VAR_1 = VAR_0->dbg_fwsave_len;
   FUNC_0(VAR_0, VAR_0->dbg_fwsave, &VAR_1);
  }
 }
}
