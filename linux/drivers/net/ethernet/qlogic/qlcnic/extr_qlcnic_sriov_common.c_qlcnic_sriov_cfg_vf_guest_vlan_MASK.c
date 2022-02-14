
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u8 ;
typedef int u16 ;
struct qlcnic_vf_info {int dummy; } ;
struct qlcnic_sriov {int bc; struct qlcnic_vf_info* vf_info; } ;
struct TYPE_5__ {int* arg; } ;
struct qlcnic_cmd_args {TYPE_2__ req; } ;
struct qlcnic_adapter {TYPE_3__* pdev; TYPE_1__* ahw; struct net_device* netdev; } ;
struct net_device {int dummy; } ;
typedef int cmd ;
struct TYPE_6__ {int dev; } ;
struct TYPE_4__ {struct qlcnic_sriov* sriov; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,char*,int) ;
 int FUNC_1 (struct qlcnic_cmd_args*,int ,int) ;
 int FUNC_2 (struct net_device*) ;
 int FUNC_3 (struct net_device*) ;
 int FUNC_4 (struct qlcnic_adapter*) ;
 int FUNC_5 (struct qlcnic_cmd_args*) ;
 int FUNC_6 (struct qlcnic_adapter*,struct qlcnic_cmd_args*) ;
 int FUNC_7 (struct net_device*) ;
 int FUNC_8 (struct qlcnic_cmd_args*,int ) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (struct qlcnic_adapter*,int,int) ;
 int FUNC_11 (struct qlcnic_vf_info*,int,int ) ;

int FUNC_12(struct qlcnic_adapter *VAR_3,
       u16 VAR_4, u8 VAR_5)
{
 struct qlcnic_sriov *VAR_6 = VAR_3->ahw->sriov;
 struct net_device *VAR_7 = VAR_3->netdev;
 struct qlcnic_vf_info *VAR_8;
 struct qlcnic_cmd_args VAR_9;
 int VAR_10;

 FUNC_1(&VAR_9, 0, sizeof(VAR_9));
 if (VAR_4 == 0)
  return 0;

 VAR_8 = &VAR_3->ahw->sriov->vf_info[0];
 VAR_10 = FUNC_10(VAR_3, VAR_4, VAR_5);
 if (VAR_10)
  return VAR_10;

 VAR_10 = FUNC_8(&VAR_9,
          VAR_0);
 if (VAR_10)
  return VAR_10;

 VAR_9.req.arg[1] = (VAR_5 & 1) | VAR_4 << 16;

 FUNC_9(&VAR_6->bc);
 VAR_10 = FUNC_6(VAR_3, &VAR_9);
 if (VAR_10) {
  FUNC_0(&VAR_3->pdev->dev,
   "Failed to configure guest VLAN, err=%d\n", VAR_10);
 } else {
  FUNC_2(VAR_7);
  FUNC_4(VAR_3);
  FUNC_3(VAR_7);

  if (VAR_5)
   FUNC_11(VAR_8, VAR_4, VAR_1);
  else
   FUNC_11(VAR_8, VAR_4, VAR_2);

  FUNC_2(VAR_7);
  FUNC_7(VAR_7);
  FUNC_3(VAR_7);
 }

 FUNC_5(&VAR_9);
 return VAR_10;
}
