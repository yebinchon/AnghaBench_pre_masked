
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct bnx2x_virtf {int abs_vfid; } ;
struct bnx2x_vf_mbx {TYPE_3__* msg; } ;
struct bnx2x {int dummy; } ;
struct TYPE_4__ {int vf_qid; } ;
struct TYPE_5__ {TYPE_1__ q_op; } ;
struct TYPE_6__ {TYPE_2__ req; } ;


 int VAR_0 ;
 int FUNC_0 (int ,char*,int ,int) ;
 int FUNC_1 (struct bnx2x*,struct bnx2x_virtf*,int) ;
 int FUNC_2 (struct bnx2x*,struct bnx2x_virtf*,int) ;

__attribute__((used)) static void FUNC_3(struct bnx2x *VAR_1, struct bnx2x_virtf *VAR_2,
        struct bnx2x_vf_mbx *VAR_3)
{
 int VAR_4 = VAR_3->msg->req.q_op.vf_qid;
 int VAR_5;

 FUNC_0(VAR_0, "VF[%d] Q_TEARDOWN: vf_qid=%d\n",
    VAR_2->abs_vfid, VAR_4);

 VAR_5 = FUNC_2(VAR_1, VAR_2, VAR_4);
 FUNC_1(VAR_1, VAR_2, VAR_5);
}
