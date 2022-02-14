
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bnx2x_virtf {int abs_vfid; } ;
struct bnx2x {int dummy; } ;


 int FUNC_0 (char*,int ,int,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int ,char*,int ,int) ;
 int VAR_4 ;
 scalar_t__ FUNC_2 (struct bnx2x*,struct bnx2x_virtf*,int) ;
 int FUNC_3 (struct bnx2x*,struct bnx2x_virtf*,int *,int ,int) ;
 int FUNC_4 (struct bnx2x*,struct bnx2x_virtf*,int) ;
 int FUNC_5 (struct bnx2x*,struct bnx2x_virtf*,int,int ) ;
 int FUNC_6 (struct bnx2x*,struct bnx2x_virtf*,int,int,int ) ;

int FUNC_7(struct bnx2x *VAR_5, struct bnx2x_virtf *VAR_6, int VAR_7)
{
 int VAR_8;

 FUNC_1(VAR_0, "vf[%d:%d]\n", VAR_6->abs_vfid, VAR_7);


 if (VAR_7 == VAR_4) {
  VAR_8 = FUNC_5(VAR_5, VAR_6, VAR_7, 0);
  if (VAR_8)
   goto op_err;


  if (FUNC_2(VAR_5, VAR_6, 1)) {
   VAR_8 = FUNC_6(VAR_5, VAR_6, VAR_7,
           0,
           VAR_3);
   if (VAR_8)
    goto op_err;
   VAR_8 = FUNC_6(VAR_5, VAR_6, VAR_7,
           0,
           VAR_2);
   if (VAR_8)
    goto op_err;
   VAR_8 = FUNC_6(VAR_5, VAR_6, VAR_7,
           0,
           VAR_1);
   if (VAR_8)
    goto op_err;
   VAR_8 = FUNC_3(VAR_5, VAR_6, ((void*)0), 0, 0);
   if (VAR_8)
    goto op_err;
  }
 }


 VAR_8 = FUNC_4(VAR_5, VAR_6, VAR_7);
 if (VAR_8)
  goto op_err;
 return VAR_8;
op_err:
 FUNC_0("vf[%d:%d] error: rc %d\n",
    VAR_6->abs_vfid, VAR_7, VAR_8);
 return VAR_8;
}
