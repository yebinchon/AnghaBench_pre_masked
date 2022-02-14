
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct bnx2x {int dummy; } ;


 size_t FUNC_0 (struct bnx2x*) ;
 int FUNC_1 (int ,char*,int ,int ) ;
 int FUNC_2 (struct bnx2x*) ;
 scalar_t__ FUNC_3 (struct bnx2x*) ;
 int VAR_0 ;
 int FUNC_4 (struct bnx2x*,int *) ;
 int FUNC_5 (struct bnx2x*,int ) ;
 int FUNC_6 (struct bnx2x*,int ,int ) ;
 int * VAR_1 ;

void FUNC_7(struct bnx2x *VAR_2, u32 VAR_3)
{
 u32 VAR_4;

 if (!FUNC_2(VAR_2) || !FUNC_4(VAR_2, VAR_1) || FUNC_3(VAR_2))
  return;

 VAR_4 = FUNC_5(VAR_2, VAR_1[FUNC_0(VAR_2)]);
 FUNC_1(VAR_0, "Driver state %08x-->%08x\n",
    VAR_4, VAR_3);

 FUNC_6(VAR_2, VAR_1[FUNC_0(VAR_2)], VAR_3);
}
