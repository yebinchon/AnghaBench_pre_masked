
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct set_vf_state_cookie {int state; struct bnx2x_virtf* vf; } ;
struct bnx2x_virtf {int abs_vfid; } ;
struct bnx2x {int dummy; } ;


 int FUNC_0 (char*,int ,int) ;
 int VAR_0 ;
 int FUNC_1 (int ,char*,...) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (struct bnx2x*,int ,struct set_vf_state_cookie*) ;
 int FUNC_3 (struct bnx2x*,struct bnx2x_virtf*) ;
 int FUNC_4 (struct bnx2x*,struct bnx2x_virtf*) ;
 int FUNC_5 (struct bnx2x*,struct bnx2x_virtf*,int) ;
 int FUNC_6 (struct bnx2x_virtf*) ;

int FUNC_7(struct bnx2x *VAR_3, struct bnx2x_virtf *VAR_4)
{
 int VAR_5 = 0, VAR_6;

 FUNC_1(VAR_0, "vf[%d]\n", VAR_4->abs_vfid);


 for (VAR_6 = 0; VAR_6 < FUNC_6(VAR_4); VAR_6++) {
  VAR_5 = FUNC_5(VAR_3, VAR_4, VAR_6);
  if (VAR_5)
   goto op_err;
 }


 FUNC_1(VAR_0, "disabling igu\n");
 FUNC_4(VAR_3, VAR_4);


 FUNC_1(VAR_0, "clearing qtbl\n");
 FUNC_3(VAR_3, VAR_4);





 {
  struct set_vf_state_cookie VAR_7;

  VAR_7.vf = VAR_4;
  VAR_7.state = VAR_1;
  VAR_5 = FUNC_2(VAR_3, VAR_2, &VAR_7);
  if (VAR_5)
   goto op_err;
 }

 FUNC_1(VAR_0, "set state to acquired\n");

 return 0;
op_err:
 FUNC_0("vf[%d] CLOSE error: rc %d\n", VAR_4->abs_vfid, VAR_5);
 return VAR_5;
}
