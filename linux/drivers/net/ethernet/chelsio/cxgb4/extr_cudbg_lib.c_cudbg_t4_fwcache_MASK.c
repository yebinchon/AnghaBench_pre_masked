
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cudbg_init {struct adapter* adap; } ;
struct cudbg_error {int sys_warn; } ;
struct adapter {int dummy; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct cudbg_init*) ;
 int FUNC_1 (struct adapter*,int ) ;

__attribute__((used)) static void FUNC_2(struct cudbg_init *VAR_1,
        struct cudbg_error *VAR_2)
{
 struct adapter *VAR_3 = VAR_1->adap;
 int VAR_4;

 if (FUNC_0(VAR_1)) {

  VAR_4 = FUNC_1(VAR_3, VAR_0);
  if (VAR_4)
   VAR_2->sys_warn = VAR_4;
 }
}
