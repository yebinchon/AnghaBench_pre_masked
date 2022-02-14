
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct bnx2x {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,char*,int) ;
 int VAR_2 ;
 int FUNC_1 (struct bnx2x*,int ) ;

__attribute__((used)) static bool FUNC_2(struct bnx2x *VAR_3)
{
 u32 VAR_4 = FUNC_1(VAR_3, VAR_1);

 FUNC_0(VAR_2, "GEN_REG_VAL=0x%08x\n", VAR_4);
 return (VAR_4 & VAR_0) ? 1 : 0;
}
