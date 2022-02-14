
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct qlcnic_vf_info {TYPE_1__* vp; struct qlcnic_adapter* adapter; } ;
struct TYPE_4__ {int* arg; } ;
struct qlcnic_cmd_args {TYPE_2__ req; } ;
struct qlcnic_bc_trans {struct qlcnic_vf_info* vf; } ;
struct qlcnic_adapter {int dummy; } ;
struct TYPE_3__ {int handle; } ;


 int VAR_0 ;
 int FUNC_0 (struct qlcnic_adapter*,struct qlcnic_cmd_args*) ;

__attribute__((used)) static int FUNC_1(struct qlcnic_bc_trans *VAR_1,
          struct qlcnic_cmd_args *VAR_2)
{
 struct qlcnic_vf_info *VAR_3 = VAR_1->vf;
 struct qlcnic_adapter *VAR_4 = VAR_3->adapter;
 int VAR_5;

 VAR_2->req.arg[1] |= VAR_3->vp->handle << 16;
 VAR_2->req.arg[1] |= VAR_0;

 VAR_5 = FUNC_0(VAR_4, VAR_2);
 return VAR_5;
}
