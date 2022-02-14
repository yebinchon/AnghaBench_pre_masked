
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u8 ;
struct qlcnic_vf_info {TYPE_2__* vp; } ;
struct TYPE_6__ {int* arg; } ;
struct TYPE_4__ {int* arg; } ;
struct qlcnic_cmd_args {TYPE_3__ rsp; TYPE_1__ req; } ;
struct qlcnic_bc_trans {struct qlcnic_vf_info* vf; } ;
struct TYPE_5__ {int* mac; } ;






__attribute__((used)) static int FUNC_0(struct qlcnic_bc_trans *VAR_0,
        struct qlcnic_cmd_args *VAR_1)
{
 struct qlcnic_vf_info *VAR_2 = VAR_0->vf;
 u8 VAR_3, *VAR_4;

 VAR_3 = VAR_1->req.arg[1];
 switch (VAR_3) {
 case 128:
 case 129:
  VAR_1->rsp.arg[0] = (2 << 25);
  break;
 case 130:
  VAR_1->rsp.arg[0] = (1 << 25);
  VAR_4 = VAR_2->vp->mac;
  VAR_1->rsp.arg[2] = VAR_4[1] | ((VAR_4[0] << 8) & 0xff00);
  VAR_1->rsp.arg[1] = VAR_4[5] | ((VAR_4[4] << 8) & 0xff00) |
      ((VAR_4[3]) << 16 & 0xff0000) |
      ((VAR_4[2]) << 24 & 0xff000000);
 }

 return 0;
}
