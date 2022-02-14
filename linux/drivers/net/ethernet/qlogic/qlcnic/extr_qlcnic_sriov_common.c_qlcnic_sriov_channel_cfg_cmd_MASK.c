
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u8 ;
struct qlcnic_vf_info {int state; } ;
struct TYPE_8__ {int* arg; } ;
struct qlcnic_cmd_args {TYPE_4__ rsp; } ;
struct qlcnic_adapter {TYPE_3__* pdev; TYPE_2__* ahw; } ;
typedef int cmd ;
struct TYPE_7__ {int dev; } ;
struct TYPE_6__ {TYPE_1__* sriov; } ;
struct TYPE_5__ {struct qlcnic_vf_info* vf_info; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int *) ;
 int FUNC_1 (int *,char*,char*,int) ;
 int FUNC_2 (struct qlcnic_cmd_args*,int ,int) ;
 int FUNC_3 (struct qlcnic_cmd_args*) ;
 int FUNC_4 (struct qlcnic_adapter*,struct qlcnic_cmd_args*) ;
 scalar_t__ FUNC_5 (struct qlcnic_cmd_args*,int) ;
 int FUNC_6 (int ,int *) ;

__attribute__((used)) static int FUNC_7(struct qlcnic_adapter *VAR_3, u8 VAR_4)
{
 struct qlcnic_cmd_args VAR_5;
 struct qlcnic_vf_info *VAR_6 = &VAR_3->ahw->sriov->vf_info[0];
 int VAR_7;

 FUNC_2(&VAR_5, 0, sizeof(VAR_5));
 if (FUNC_5(&VAR_5, VAR_4))
  return -VAR_0;

 VAR_7 = FUNC_4(VAR_3, &VAR_5);
 if (VAR_7) {
  FUNC_1(&VAR_3->pdev->dev,
   "Failed bc channel %s %d\n", VAR_4 ? "term" : "init",
   VAR_7);
  goto out;
 }

 VAR_4 = (VAR_5.rsp.arg[0] & 0xff);
 if (VAR_5.rsp.arg[0] >> 25 == 2)
  return 2;
 if (VAR_4 == VAR_1)
  FUNC_6(VAR_2, &VAR_6->state);
 else
  FUNC_0(VAR_2, &VAR_6->state);

out:
 FUNC_3(&VAR_5);
 return VAR_7;
}
