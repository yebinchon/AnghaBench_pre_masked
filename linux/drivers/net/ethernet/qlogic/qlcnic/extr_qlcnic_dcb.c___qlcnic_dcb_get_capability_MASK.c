
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u32 ;
struct qlcnic_dcb_capability {int tsa_capability; int ets_capability; scalar_t__ max_num_tc; scalar_t__ max_ets_tc; scalar_t__ max_pfc_tc; } ;
struct qlcnic_dcb {TYPE_3__* adapter; TYPE_1__* cfg; } ;
struct TYPE_6__ {TYPE_2__* pdev; } ;
struct TYPE_5__ {int dev; } ;
struct TYPE_4__ {struct qlcnic_dcb_capability capability; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (int ) ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_4 (int ) ;
 int FUNC_5 (int *,char*) ;
 int FUNC_6 (struct qlcnic_dcb_capability*,int ,int) ;
 int FUNC_7 (struct qlcnic_dcb*,char*) ;

__attribute__((used)) static int FUNC_8(struct qlcnic_dcb *VAR_2, u32 *VAR_3)
{
 struct qlcnic_dcb_capability *VAR_4 = &VAR_2->cfg->capability;
 u32 VAR_5;
 int VAR_6;

 FUNC_6(VAR_4, 0, sizeof(struct qlcnic_dcb_capability));

 VAR_6 = FUNC_7(VAR_2, (char *)VAR_3);
 if (VAR_6)
  return VAR_6;

 VAR_5 = *VAR_3;
 if (FUNC_4(VAR_5))
  VAR_4->tsa_capability = 1;

 if (FUNC_0(VAR_5))
  VAR_4->ets_capability = 1;

 VAR_4->max_num_tc = FUNC_3(VAR_5);
 VAR_4->max_ets_tc = FUNC_1(VAR_5);
 VAR_4->max_pfc_tc = FUNC_2(VAR_5);

 if (VAR_4->max_num_tc > VAR_1 ||
     VAR_4->max_ets_tc > VAR_4->max_num_tc ||
     VAR_4->max_pfc_tc > VAR_4->max_num_tc) {
  FUNC_5(&VAR_2->adapter->pdev->dev, "Invalid DCB configuration\n");
  return -VAR_0;
 }

 return VAR_6;
}
