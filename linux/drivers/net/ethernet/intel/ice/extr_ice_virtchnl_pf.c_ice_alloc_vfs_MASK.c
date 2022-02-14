
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int u16 ;
struct ice_vf {int vf_id; int spoofchk; int vf_caps; int vf_sw_id; struct ice_pf* pf; } ;
struct ice_hw {int dummy; } ;
struct ice_pf {int num_alloc_vfs; int * state; TYPE_1__* pdev; struct ice_vf* vf; int first_sw; int oicr_idx; struct ice_hw hw; } ;
struct TYPE_3__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (int ,int *) ;
 struct ice_vf* FUNC_2 (int *,int,int,int ) ;
 int FUNC_3 (int *,struct ice_vf*) ;
 int FUNC_4 (struct ice_pf*) ;
 int FUNC_5 (struct ice_hw*) ;
 int FUNC_6 (struct ice_hw*,int *,int *) ;
 int FUNC_7 (TYPE_1__*) ;
 int FUNC_8 (TYPE_1__*,int) ;
 int FUNC_9 (int ,int *) ;
 int FUNC_10 (struct ice_hw*,int ,int) ;

__attribute__((used)) static int FUNC_11(struct ice_pf *VAR_7, u16 VAR_8)
{
 struct ice_hw *VAR_9 = &VAR_7->hw;
 struct ice_vf *VAR_10;
 int VAR_11, VAR_12;


 FUNC_10(VAR_9, FUNC_0(VAR_7->oicr_idx),
      VAR_4 << VAR_3);
 FUNC_9(VAR_6, VAR_7->state);
 FUNC_5(VAR_9);

 VAR_12 = FUNC_8(VAR_7->pdev, VAR_8);
 if (VAR_12) {
  VAR_7->num_alloc_vfs = 0;
  goto err_unroll_intr;
 }

 VAR_10 = FUNC_2(&VAR_7->pdev->dev, VAR_8, sizeof(*VAR_10),
      VAR_2);
 if (!VAR_10) {
  VAR_12 = -VAR_1;
  goto err_pci_disable_sriov;
 }
 VAR_7->vf = VAR_10;


 for (VAR_11 = 0; VAR_11 < VAR_8; VAR_11++) {
  VAR_10[VAR_11].pf = VAR_7;
  VAR_10[VAR_11].vf_sw_id = VAR_7->first_sw;
  VAR_10[VAR_11].vf_id = VAR_11;


  FUNC_9(VAR_5, &VAR_10[VAR_11].vf_caps);
  VAR_10[VAR_11].spoofchk = 1;
 }
 VAR_7->num_alloc_vfs = VAR_8;


 if (!FUNC_4(VAR_7)) {
  VAR_12 = -VAR_0;
  goto err_unroll_sriov;
 }

 return VAR_12;

err_unroll_sriov:
 VAR_7->vf = ((void*)0);
 FUNC_3(&VAR_7->pdev->dev, VAR_10);
 VAR_10 = ((void*)0);
 VAR_7->num_alloc_vfs = 0;
err_pci_disable_sriov:
 FUNC_7(VAR_7->pdev);
err_unroll_intr:

 FUNC_6(VAR_9, ((void*)0), ((void*)0));
 FUNC_1(VAR_6, VAR_7->state);
 return VAR_12;
}
