
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct qlcnic_dcb_capability {int dcb_capability; scalar_t__ ets_capability; scalar_t__ tsa_capability; } ;
struct qlcnic_dcb_cfg {struct qlcnic_dcb_capability capability; } ;
struct qlcnic_dcb {int state; struct qlcnic_dcb_cfg* cfg; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct qlcnic_dcb*,int *) ;
 int FUNC_1 (int ,int *) ;

__attribute__((used)) static int FUNC_2(struct qlcnic_dcb *VAR_3)
{
 struct qlcnic_dcb_cfg *VAR_4 = VAR_3->cfg;
 struct qlcnic_dcb_capability *VAR_5;
 u32 VAR_6;
 int VAR_7;

 VAR_7 = FUNC_0(VAR_3, &VAR_6);
 if (VAR_7)
  return VAR_7;

 VAR_5 = &VAR_4->capability;
 VAR_5->dcb_capability = VAR_1 | VAR_0;

 if (VAR_5->dcb_capability && VAR_5->tsa_capability && VAR_5->ets_capability)
  FUNC_1(VAR_2, &VAR_3->state);

 return VAR_7;
}
