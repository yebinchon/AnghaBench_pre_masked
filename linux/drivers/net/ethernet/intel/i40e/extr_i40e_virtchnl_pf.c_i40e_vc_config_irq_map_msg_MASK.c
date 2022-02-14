
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u8 ;
typedef int u16 ;
struct virtchnl_vector_map {int txq_map; int rxq_map; int vsi_id; int vector_id; } ;
struct virtchnl_irq_map_info {int num_vectors; struct virtchnl_vector_map* vecmap; } ;
struct i40e_vf {TYPE_3__* pf; int vf_states; } ;
typedef int i40e_status ;
struct TYPE_4__ {int num_msix_vectors_vf; } ;
struct TYPE_5__ {TYPE_1__ func_caps; } ;
struct TYPE_6__ {TYPE_2__ hw; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct i40e_vf*,int ,struct virtchnl_vector_map*) ;
 scalar_t__ FUNC_1 (struct i40e_vf*,int ,int ) ;
 int FUNC_2 (struct i40e_vf*,int ) ;
 int FUNC_3 (struct i40e_vf*,int ) ;
 int FUNC_4 (struct i40e_vf*,int ,int ) ;
 int FUNC_5 (int ,int *) ;

__attribute__((used)) static int FUNC_6(struct i40e_vf *VAR_3, u8 *VAR_4)
{
 struct virtchnl_irq_map_info *VAR_5 =
     (struct virtchnl_irq_map_info *)VAR_4;
 struct virtchnl_vector_map *VAR_6;
 u16 VAR_7;
 i40e_status VAR_8 = 0;
 int VAR_9;

 if (!FUNC_5(VAR_1, &VAR_3->vf_states)) {
  VAR_8 = VAR_0;
  goto error_param;
 }

 if (VAR_5->num_vectors >
     VAR_3->pf->hw.func_caps.num_msix_vectors_vf) {
  VAR_8 = VAR_0;
  goto error_param;
 }

 for (VAR_9 = 0; VAR_9 < VAR_5->num_vectors; VAR_9++) {
  VAR_6 = &VAR_5->vecmap[VAR_9];

  if (!FUNC_2(VAR_3, VAR_6->vector_id) ||
      !FUNC_3(VAR_3, VAR_6->vsi_id)) {
   VAR_8 = VAR_0;
   goto error_param;
  }
  VAR_7 = VAR_6->vsi_id;

  if (FUNC_1(VAR_3, VAR_7, VAR_6->rxq_map)) {
   VAR_8 = VAR_0;
   goto error_param;
  }

  if (FUNC_1(VAR_3, VAR_7, VAR_6->txq_map)) {
   VAR_8 = VAR_0;
   goto error_param;
  }

  FUNC_0(VAR_3, VAR_7, VAR_6);
 }
error_param:

 return FUNC_4(VAR_3, VAR_2,
           VAR_8);
}
