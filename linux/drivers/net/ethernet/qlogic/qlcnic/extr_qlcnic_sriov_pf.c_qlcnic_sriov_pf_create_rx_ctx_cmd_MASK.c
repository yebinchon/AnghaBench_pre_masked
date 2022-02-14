
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct qlcnic_vf_info {scalar_t__ rx_ctx_id; TYPE_2__* vp; struct qlcnic_adapter* adapter; } ;
struct qlcnic_rcv_mbx_out {scalar_t__ ctx_id; } ;
struct TYPE_6__ {int* arg; } ;
struct TYPE_4__ {int * arg; } ;
struct qlcnic_cmd_args {TYPE_3__ rsp; TYPE_1__ req; } ;
struct qlcnic_bc_trans {struct qlcnic_vf_info* vf; } ;
struct qlcnic_adapter {int dummy; } ;
struct TYPE_5__ {int handle; } ;


 int VAR_0 ;
 int FUNC_0 (struct qlcnic_adapter*,struct qlcnic_vf_info*,int ) ;
 int FUNC_1 (struct qlcnic_adapter*,struct qlcnic_cmd_args*) ;
 int FUNC_2 (struct qlcnic_cmd_args*) ;

__attribute__((used)) static int FUNC_3(struct qlcnic_bc_trans *VAR_1,
          struct qlcnic_cmd_args *VAR_2)
{
 struct qlcnic_vf_info *VAR_3 = VAR_1->vf;
 struct qlcnic_adapter *VAR_4 = VAR_3->adapter;
 struct qlcnic_rcv_mbx_out *VAR_5;
 int VAR_6;

 VAR_6 = FUNC_2(VAR_2);
 if (VAR_6) {
  VAR_2->rsp.arg[0] |= (0x6 << 25);
  return VAR_6;
 }

 VAR_2->req.arg[6] = VAR_3->vp->handle;
 VAR_6 = FUNC_1(VAR_4, VAR_2);

 if (!VAR_6) {
  VAR_5 = (struct qlcnic_rcv_mbx_out *)&VAR_2->rsp.arg[1];
  VAR_3->rx_ctx_id = VAR_5->ctx_id;
  FUNC_0(VAR_4, VAR_3, VAR_0);
 } else {
  VAR_3->rx_ctx_id = 0;
 }

 return VAR_6;
}
