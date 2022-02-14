
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ice_vsi {scalar_t__ type; struct ice_q_vector** q_vectors; scalar_t__ netdev; struct ice_pf* back; } ;
struct ice_q_vector {int v_idx; int napi; int affinity_mask; struct ice_vsi* vsi; } ;
struct ice_pf {TYPE_1__* pdev; } ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (int,int *) ;
 struct ice_q_vector* FUNC_2 (int *,int,int ) ;
 int VAR_4 ;
 int FUNC_3 (scalar_t__,int *,int ,int ) ;

__attribute__((used)) static int FUNC_4(struct ice_vsi *VAR_5, int VAR_6)
{
 struct ice_pf *VAR_7 = VAR_5->back;
 struct ice_q_vector *VAR_8;


 VAR_8 = FUNC_2(&VAR_7->pdev->dev, sizeof(*VAR_8), VAR_1);
 if (!VAR_8)
  return -VAR_0;

 VAR_8->vsi = VAR_5;
 VAR_8->v_idx = VAR_6;
 if (VAR_5->type == VAR_2)
  goto out;

 if (FUNC_0(VAR_6))
  FUNC_1(VAR_6, &VAR_8->affinity_mask);





 if (VAR_5->netdev)
  FUNC_3(VAR_5->netdev, &VAR_8->napi, VAR_4,
          VAR_3);

out:

 VAR_5->q_vectors[VAR_6] = VAR_8;

 return 0;
}
