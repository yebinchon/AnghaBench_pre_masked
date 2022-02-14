
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int num_vsis; } ;
struct i40e_hw {int pf_id; TYPE_1__ func_caps; } ;
struct i40e_pf {int num_req_vfs; size_t lan_vsi; int flags; TYPE_3__* pdev; TYPE_2__** vsi; struct i40e_hw hw; } ;
struct TYPE_6__ {int dev; } ;
struct TYPE_5__ {int num_queue_pairs; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int *,char*,char*) ;
 int FUNC_3 (char*) ;
 char* FUNC_4 (int,int ) ;
 int FUNC_5 (char*,int,char*,...) ;

__attribute__((used)) static void FUNC_6(struct i40e_pf *VAR_8)
{
 struct i40e_hw *VAR_9 = &VAR_8->hw;
 char *VAR_10;
 int VAR_11;

 VAR_10 = FUNC_4(VAR_7, VAR_0);
 if (!VAR_10)
  return;

 VAR_11 = FUNC_5(VAR_10, VAR_7, "Features: PF-id[%d]", VAR_9->pf_id);



 VAR_11 += FUNC_5(&VAR_10[VAR_11], FUNC_0(VAR_11), " VSIs: %d QP: %d",
        VAR_8->hw.func_caps.num_vsis,
        VAR_8->vsi[VAR_8->lan_vsi]->num_queue_pairs);
 if (VAR_8->flags & VAR_5)
  VAR_11 += FUNC_5(&VAR_10[VAR_11], FUNC_0(VAR_11), " RSS");
 if (VAR_8->flags & VAR_2)
  VAR_11 += FUNC_5(&VAR_10[VAR_11], FUNC_0(VAR_11), " FD_ATR");
 if (VAR_8->flags & VAR_3) {
  VAR_11 += FUNC_5(&VAR_10[VAR_11], FUNC_0(VAR_11), " FD_SB");
  VAR_11 += FUNC_5(&VAR_10[VAR_11], FUNC_0(VAR_11), " NTUPLE");
 }
 if (VAR_8->flags & VAR_1)
  VAR_11 += FUNC_5(&VAR_10[VAR_11], FUNC_0(VAR_11), " DCB");
 VAR_11 += FUNC_5(&VAR_10[VAR_11], FUNC_0(VAR_11), " VxLAN");
 VAR_11 += FUNC_5(&VAR_10[VAR_11], FUNC_0(VAR_11), " Geneve");
 if (VAR_8->flags & VAR_4)
  VAR_11 += FUNC_5(&VAR_10[VAR_11], FUNC_0(VAR_11), " PTP");
 if (VAR_8->flags & VAR_6)
  VAR_11 += FUNC_5(&VAR_10[VAR_11], FUNC_0(VAR_11), " VEB");
 else
  VAR_11 += FUNC_5(&VAR_10[VAR_11], FUNC_0(VAR_11), " VEPA");

 FUNC_2(&VAR_8->pdev->dev, "%s\n", VAR_10);
 FUNC_3(VAR_10);
 FUNC_1(VAR_11 > VAR_7);
}
