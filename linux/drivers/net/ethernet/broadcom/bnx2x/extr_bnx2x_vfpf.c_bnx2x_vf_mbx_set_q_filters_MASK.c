
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct vfpf_set_q_filters_tlv {int vf_qid; } ;
struct bnx2x_virtf {int abs_vfid; } ;
struct bnx2x_vf_mbx {TYPE_2__* msg; } ;
struct bnx2x {int dummy; } ;
struct TYPE_3__ {struct vfpf_set_q_filters_tlv set_q_filters; } ;
struct TYPE_4__ {TYPE_1__ req; } ;


 int VAR_0 ;
 int FUNC_0 (int ,char*,int ,int ) ;
 int FUNC_1 (struct bnx2x*,struct bnx2x_virtf*,struct vfpf_set_q_filters_tlv*) ;
 int FUNC_2 (struct bnx2x*,struct bnx2x_virtf*,struct vfpf_set_q_filters_tlv*) ;
 int FUNC_3 (struct bnx2x*,int ,struct vfpf_set_q_filters_tlv*) ;
 int FUNC_4 (struct bnx2x*,struct bnx2x_virtf*) ;
 int FUNC_5 (struct bnx2x*,struct bnx2x_virtf*,int) ;

__attribute__((used)) static void FUNC_6(struct bnx2x *VAR_1,
           struct bnx2x_virtf *VAR_2,
           struct bnx2x_vf_mbx *VAR_3)
{
 struct vfpf_set_q_filters_tlv *VAR_4 = &VAR_3->msg->req.set_q_filters;
 int VAR_5;

 VAR_5 = FUNC_1(VAR_1, VAR_2, VAR_4);
 if (VAR_5)
  goto response;

 VAR_5 = FUNC_2(VAR_1, VAR_2, VAR_4);
 if (VAR_5)
  goto response;

 FUNC_0(VAR_0, "VF[%d] Q_FILTERS: queue[%d]\n",
    VAR_2->abs_vfid,
    VAR_4->vf_qid);


 FUNC_3(VAR_1, VAR_0, VAR_4);

 VAR_5 = FUNC_4(VAR_1, VAR_2);
response:
 FUNC_5(VAR_1, VAR_2, VAR_5);
}
