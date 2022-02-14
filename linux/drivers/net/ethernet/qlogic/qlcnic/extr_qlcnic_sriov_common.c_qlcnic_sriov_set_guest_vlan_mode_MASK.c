
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u16 ;
struct qlcnic_sriov {int any_vlan; int num_allowed_vlans; int * allowed_vlans; } ;
struct TYPE_6__ {int* arg; } ;
struct qlcnic_cmd_args {TYPE_3__ rsp; } ;
struct qlcnic_adapter {TYPE_2__* pdev; TYPE_1__* ahw; } ;
struct TYPE_5__ {int dev; } ;
struct TYPE_4__ {struct qlcnic_sriov* sriov; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,char*,int) ;
 int * FUNC_1 (int,int,int ) ;
 int FUNC_2 (struct qlcnic_adapter*) ;

__attribute__((used)) static int FUNC_3(struct qlcnic_adapter *VAR_2,
         struct qlcnic_cmd_args *VAR_3)
{
 struct qlcnic_sriov *VAR_4 = VAR_2->ahw->sriov;
 int VAR_5, VAR_6;
 u16 *VAR_7;

 if (VAR_4->allowed_vlans)
  return 0;

 VAR_4->any_vlan = VAR_3->rsp.arg[2] & 0xf;
 VAR_4->num_allowed_vlans = VAR_3->rsp.arg[2] >> 16;
 FUNC_0(&VAR_2->pdev->dev, "Number of allowed Guest VLANs = %d\n",
   VAR_4->num_allowed_vlans);

 FUNC_2(VAR_2);

 if (!VAR_4->any_vlan)
  return 0;

 VAR_6 = VAR_4->num_allowed_vlans;
 VAR_4->allowed_vlans = FUNC_1(VAR_6, sizeof(u16), VAR_1);
 if (!VAR_4->allowed_vlans)
  return -VAR_0;

 VAR_7 = (u16 *)&VAR_3->rsp.arg[3];
 for (VAR_5 = 0; VAR_5 < VAR_6; VAR_5++)
  VAR_4->allowed_vlans[VAR_5] = VAR_7[VAR_5];

 return 0;
}
