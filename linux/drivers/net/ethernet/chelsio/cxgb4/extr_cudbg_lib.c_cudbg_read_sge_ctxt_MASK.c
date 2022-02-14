
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct cudbg_init {struct adapter* adap; } ;
struct adapter {int mbox; } ;
typedef enum ctxt_type { ____Placeholder_ctxt_type } ctxt_type ;


 scalar_t__ FUNC_0 (struct cudbg_init*) ;
 int FUNC_1 (struct adapter*,int ,int ,int,int *) ;
 int FUNC_2 (struct adapter*,int ,int,int *) ;

__attribute__((used)) static void FUNC_3(struct cudbg_init *VAR_0, u32 VAR_1,
    enum ctxt_type VAR_2, u32 *VAR_3)
{
 struct adapter *VAR_4 = VAR_0->adap;
 int VAR_5 = -1;
 if (FUNC_0(VAR_0))
  VAR_5 = FUNC_1(VAR_4, VAR_4->mbox, VAR_1, VAR_2, VAR_3);
 if (VAR_5)
  FUNC_2(VAR_4, VAR_1, VAR_2, VAR_3);
}
