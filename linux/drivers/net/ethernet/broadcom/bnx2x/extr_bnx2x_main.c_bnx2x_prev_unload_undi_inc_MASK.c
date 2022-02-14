
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
typedef int u32 ;
typedef scalar_t__ u16 ;
struct bnx2x {int dummy; } ;


 int FUNC_0 (char*,int ,int,int ,scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (scalar_t__,scalar_t__) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int) ;
 scalar_t__ FUNC_5 (int ) ;
 int FUNC_6 (struct bnx2x*) ;
 int FUNC_7 (struct bnx2x*) ;
 int FUNC_8 (struct bnx2x*,int ) ;
 int FUNC_9 (struct bnx2x*,int ,int ) ;

__attribute__((used)) static void FUNC_10(struct bnx2x *VAR_0, u8 VAR_1)
{
 u16 VAR_2, VAR_3;
 u32 VAR_4, VAR_5;

 if (FUNC_6(VAR_0) < 2)
  VAR_4 = FUNC_3(FUNC_7(VAR_0));
 else
  VAR_4 = FUNC_4(FUNC_6(VAR_0) - 2);

 VAR_5 = FUNC_8(VAR_0, VAR_4);
 VAR_2 = FUNC_5(VAR_5) + VAR_1;
 VAR_3 = FUNC_1(VAR_5) + VAR_1;

 VAR_5 = FUNC_2(VAR_2, VAR_3);
 FUNC_9(VAR_0, VAR_4, VAR_5);

 FUNC_0("UNDI producer [%d/%d][%08x] rings bd -> 0x%04x, rcq -> 0x%04x\n",
         FUNC_7(VAR_0), FUNC_6(VAR_0), VAR_4, VAR_3, VAR_2);
}
