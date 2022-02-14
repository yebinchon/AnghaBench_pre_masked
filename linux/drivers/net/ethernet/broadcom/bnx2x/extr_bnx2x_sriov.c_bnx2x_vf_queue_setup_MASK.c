
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bnx2x_virtf {int abs_vfid; } ;
struct bnx2x_vf_queue_construct_params {int dummy; } ;
struct bnx2x {int dummy; } ;


 int FUNC_0 (char*,int ,int,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int ,char*,int ,int) ;
 int FUNC_2 (struct bnx2x*,int ,int ) ;
 int FUNC_3 (struct bnx2x*,struct bnx2x_virtf*,int,struct bnx2x_vf_queue_construct_params*) ;

int FUNC_4(struct bnx2x *VAR_2, struct bnx2x_virtf *VAR_3, int VAR_4,
    struct bnx2x_vf_queue_construct_params *VAR_5)
{
 int VAR_6;

 FUNC_1(VAR_0, "vf[%d:%d]\n", VAR_3->abs_vfid, VAR_4);

 VAR_6 = FUNC_3(VAR_2, VAR_3, VAR_4, VAR_5);
 if (VAR_6)
  goto op_err;


 FUNC_2(VAR_2, VAR_1,
          VAR_0);
 return 0;
op_err:
 FUNC_0("QSETUP[%d:%d] error: rc %d\n", VAR_3->abs_vfid, VAR_4, VAR_6);
 return VAR_6;
}
