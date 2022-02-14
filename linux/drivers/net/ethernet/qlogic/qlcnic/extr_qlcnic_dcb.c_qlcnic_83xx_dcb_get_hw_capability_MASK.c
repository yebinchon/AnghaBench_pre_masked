
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct qlcnic_dcb_capability {int dcb_capability; scalar_t__ ets_capability; scalar_t__ tsa_capability; } ;
struct qlcnic_dcb {int state; TYPE_1__* cfg; } ;
struct TYPE_2__ {struct qlcnic_dcb_capability capability; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct qlcnic_dcb*,int*) ;
 int FUNC_1 (int ,int *) ;

__attribute__((used)) static int FUNC_2(struct qlcnic_dcb *VAR_6)
{
 struct qlcnic_dcb_capability *VAR_7 = &VAR_6->cfg->capability;
 u32 VAR_8;
 int VAR_9;

 VAR_9 = FUNC_0(VAR_6, &VAR_8);
 if (VAR_9)
  return VAR_9;

 if (VAR_8 & VAR_0)
  VAR_7->dcb_capability = VAR_3;
 if (VAR_8 & VAR_1)
  VAR_7->dcb_capability |= VAR_4;
 if (VAR_7->dcb_capability)
  VAR_7->dcb_capability |= VAR_2;

 if (VAR_7->dcb_capability && VAR_7->tsa_capability && VAR_7->ets_capability)
  FUNC_1(VAR_5, &VAR_6->state);

 return VAR_9;
}
