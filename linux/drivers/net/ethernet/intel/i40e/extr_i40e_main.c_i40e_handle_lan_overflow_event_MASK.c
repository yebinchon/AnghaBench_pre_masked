
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u32 ;
typedef size_t u16 ;
struct i40e_vf {int dummy; } ;
struct TYPE_8__ {scalar_t__ vf_base_id; } ;
struct i40e_hw {TYPE_4__ func_caps; } ;
struct i40e_pf {struct i40e_vf* vf; TYPE_3__* pdev; struct i40e_hw hw; } ;
struct TYPE_5__ {int raw; } ;
struct TYPE_6__ {TYPE_1__ params; } ;
struct i40e_arq_event_info {TYPE_2__ desc; } ;
struct i40e_aqc_lan_overflow {int otx_ctl; int prtdcb_rupto; } ;
struct TYPE_7__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int *,char*,int,int) ;
 int FUNC_1 (struct i40e_vf*,int) ;
 int FUNC_2 (struct i40e_vf*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int) ;

__attribute__((used)) static void FUNC_5(struct i40e_pf *VAR_5,
        struct i40e_arq_event_info *VAR_6)
{
 struct i40e_aqc_lan_overflow *VAR_7 =
  (struct i40e_aqc_lan_overflow *)&VAR_6->desc.params.raw;
 u32 VAR_8 = FUNC_3(VAR_7->prtdcb_rupto);
 u32 VAR_9 = FUNC_3(VAR_7->otx_ctl);
 struct i40e_hw *VAR_10 = &VAR_5->hw;
 struct i40e_vf *VAR_11;
 u16 VAR_12;

 FUNC_0(&VAR_5->pdev->dev, "overflow Rx Queue Number = %d QTX_CTL=0x%08x\n",
  VAR_8, VAR_9);


 if (((VAR_9 & VAR_0)
     >> VAR_1) == VAR_4) {
  VAR_12 = (u16)((VAR_9 & VAR_2)
    >> VAR_3);
  VAR_12 -= VAR_10->func_caps.vf_base_id;
  VAR_11 = &VAR_5->vf[VAR_12];
  FUNC_2(VAR_11);

  FUNC_4(20);
  FUNC_1(VAR_11, 0);
 }
}
