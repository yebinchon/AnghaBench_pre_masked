
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct ice_vf {int vf_id; int vf_states; struct ice_pf* pf; } ;
struct TYPE_3__ {int vf_base_id; } ;
struct ice_hw {TYPE_1__ func_caps; } ;
struct ice_pf {TYPE_2__* pdev; struct ice_hw hw; } ;
struct TYPE_4__ {int dev; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_2 (int) ;
 int VAR_8 ;
 int FUNC_3 (int) ;
 int VAR_9 ;
 int FUNC_4 (int ,int ) ;
 int FUNC_5 (int *,char*,int) ;
 int FUNC_6 (struct ice_hw*) ;
 int FUNC_7 (struct ice_hw*,int ) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (struct ice_hw*,int ,int) ;

__attribute__((used)) static void FUNC_10(struct ice_vf *VAR_10, bool VAR_11, bool VAR_12)
{
 struct ice_pf *VAR_13 = VAR_10->pf;
 u32 VAR_14, VAR_15, VAR_16;
 struct ice_hw *VAR_17;
 int VAR_18, VAR_19;

 VAR_17 = &VAR_13->hw;
 VAR_18 = VAR_10->vf_id + VAR_17->func_caps.vf_base_id;


 FUNC_4(VAR_2, VAR_10->vf_states);







 FUNC_4(VAR_3, VAR_10->vf_states);






 if (!VAR_12)
  FUNC_9(VAR_17, FUNC_2(VAR_18), 0);




 if (!VAR_11) {

  VAR_14 = FUNC_7(VAR_17, FUNC_3(VAR_10->vf_id));
  VAR_14 |= VAR_9;
  FUNC_9(VAR_17, FUNC_3(VAR_10->vf_id), VAR_14);
 }

 VAR_15 = (VAR_18) / 32;
 VAR_16 = (VAR_18) % 32;
 FUNC_9(VAR_17, FUNC_1(VAR_15), FUNC_0(VAR_16));
 FUNC_6(VAR_17);

 FUNC_9(VAR_17, VAR_4,
      VAR_7 | (VAR_18 << VAR_5));
 for (VAR_19 = 0; VAR_19 < VAR_0; VAR_19++) {
  VAR_14 = FUNC_7(VAR_17, VAR_6);

  if ((VAR_14 & VAR_8) == 0)
   break;

  FUNC_5(&VAR_13->pdev->dev,
   "VF %d PCI transactions stuck\n", VAR_10->vf_id);
  FUNC_8(VAR_1);
 }
}
