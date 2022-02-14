
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bnx2x_virtf {int abs_vfid; } ;
struct bnx2x_vf_mbx {int dummy; } ;
struct bnx2x {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int ,char*,int ) ;
 int FUNC_1 (struct bnx2x*,struct bnx2x_virtf*) ;
 int FUNC_2 (struct bnx2x*,struct bnx2x_virtf*,int) ;

__attribute__((used)) static void FUNC_3(struct bnx2x *VAR_1, struct bnx2x_virtf *VAR_2,
      struct bnx2x_vf_mbx *VAR_3)
{
 int VAR_4;

 FUNC_0(VAR_0, "VF[%d] VF_CLOSE\n", VAR_2->abs_vfid);

 VAR_4 = FUNC_1(VAR_1, VAR_2);
 FUNC_2(VAR_1, VAR_2, VAR_4);
}
