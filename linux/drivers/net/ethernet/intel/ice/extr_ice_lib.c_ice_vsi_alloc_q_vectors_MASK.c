
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ice_vsi {int num_q_vectors; int vsi_num; scalar_t__* q_vectors; struct ice_pf* back; } ;
struct ice_pf {TYPE_1__* pdev; } ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 int FUNC_0 (int *,char*,int ) ;
 int FUNC_1 (int *,char*,int,int ,int) ;
 int FUNC_2 (struct ice_vsi*,int) ;
 int FUNC_3 (struct ice_vsi*,int) ;

__attribute__((used)) static int FUNC_4(struct ice_vsi *VAR_1)
{
 struct ice_pf *VAR_2 = VAR_1->back;
 int VAR_3 = 0, VAR_4;
 int VAR_5;

 if (VAR_1->q_vectors[0]) {
  FUNC_0(&VAR_2->pdev->dev, "VSI %d has existing q_vectors\n",
   VAR_1->vsi_num);
  return -VAR_0;
 }

 VAR_4 = VAR_1->num_q_vectors;

 for (VAR_3 = 0; VAR_3 < VAR_4; VAR_3++) {
  VAR_5 = FUNC_3(VAR_1, VAR_3);
  if (VAR_5)
   goto err_out;
 }

 return 0;

err_out:
 while (VAR_3--)
  FUNC_2(VAR_1, VAR_3);

 FUNC_1(&VAR_2->pdev->dev,
  "Failed to allocate %d q_vector for VSI %d, ret=%d\n",
  VAR_1->num_q_vectors, VAR_1->vsi_num, VAR_5);
 VAR_1->num_q_vectors = 0;
 return VAR_5;
}
