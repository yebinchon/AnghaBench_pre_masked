
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bfa_ioc {int dbg_fwsave_len; int dbg_fwsave; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (void*,int ,int) ;

int
FUNC_1(struct bfa_ioc *VAR_2, void *VAR_3, int *VAR_4)
{
 int VAR_5;

 if (VAR_2->dbg_fwsave_len == 0)
  return VAR_0;

 VAR_5 = *VAR_4;
 if (VAR_5 > VAR_2->dbg_fwsave_len)
  VAR_5 = VAR_2->dbg_fwsave_len;

 FUNC_0(VAR_3, VAR_2->dbg_fwsave, VAR_5);
 *VAR_4 = VAR_5;
 return VAR_1;
}
