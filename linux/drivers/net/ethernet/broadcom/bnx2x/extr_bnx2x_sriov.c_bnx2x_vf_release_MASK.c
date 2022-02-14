
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bnx2x_virtf {int abs_vfid; } ;
struct bnx2x {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,char*,int ) ;
 int FUNC_1 (int,char*,int ,int) ;
 int FUNC_2 (struct bnx2x*,struct bnx2x_virtf*,int ) ;
 int FUNC_3 (struct bnx2x*,struct bnx2x_virtf*,int ) ;
 int FUNC_4 (struct bnx2x*,struct bnx2x_virtf*) ;

int FUNC_5(struct bnx2x *VAR_2, struct bnx2x_virtf *VAR_3)
{
 int VAR_4;

 FUNC_0(VAR_0, "PF releasing vf %d\n", VAR_3->abs_vfid);
 FUNC_2(VAR_2, VAR_3, VAR_1);

 VAR_4 = FUNC_4(VAR_2, VAR_3);
 if (VAR_4)
  FUNC_1(VAR_4,
       "VF[%d] Failed to allocate resources for release op- rc=%d\n",
       VAR_3->abs_vfid, VAR_4);
 FUNC_3(VAR_2, VAR_3, VAR_1);
 return VAR_4;
}
