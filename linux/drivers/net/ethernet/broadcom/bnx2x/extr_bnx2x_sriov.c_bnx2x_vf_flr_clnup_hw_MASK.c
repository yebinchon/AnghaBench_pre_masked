
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct bnx2x_virtf {int abs_vfid; } ;
struct bnx2x {int dummy; } ;


 int FUNC_0 (char*,int ) ;
 int FUNC_1 (struct bnx2x*) ;
 int VAR_0 ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (struct bnx2x*,int ) ;
 int FUNC_4 (struct bnx2x*) ;
 int FUNC_5 (struct bnx2x*,int ,char*,int ) ;
 int FUNC_6 (struct bnx2x*,int ) ;
 scalar_t__ FUNC_7 (struct bnx2x*,int ,int ) ;
 int FUNC_8 (struct bnx2x*,int ) ;

__attribute__((used)) static void FUNC_9(struct bnx2x *VAR_1, struct bnx2x_virtf *VAR_2)
{
 u32 VAR_3 = FUNC_4(VAR_1);


 FUNC_6(VAR_1, FUNC_3(VAR_1, VAR_2->abs_vfid));
 FUNC_5(VAR_1, VAR_0,
     "DQ VF usage counter timed out",
     VAR_3);
 FUNC_6(VAR_1, FUNC_1(VAR_1));


 if (FUNC_7(VAR_1, (u8)FUNC_2(VAR_2->abs_vfid),
       VAR_3))
  FUNC_0("VF[%d] Final cleanup timed-out\n", VAR_2->abs_vfid);


 FUNC_8(VAR_1, VAR_3);
}
