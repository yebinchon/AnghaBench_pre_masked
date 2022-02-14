
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u16 ;
struct ice_vsi {scalar_t__ type; int base_vector; int vsi_num; int idx; scalar_t__ num_q_vectors; struct ice_pf* back; } ;
struct ice_pf {int num_avail_sw_msix; TYPE_1__* pdev; int irq_tracker; } ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int *,char*,int ,int ) ;
 int FUNC_1 (int *,char*,scalar_t__,int ,int ) ;
 int FUNC_2 (struct ice_pf*,int ,scalar_t__,int ) ;

__attribute__((used)) static int FUNC_3(struct ice_vsi *VAR_3)
{
 struct ice_pf *VAR_4 = VAR_3->back;
 u16 VAR_5;


 if (VAR_3->type == VAR_2)
  return 0;

 if (VAR_3->base_vector) {
  FUNC_0(&VAR_4->pdev->dev, "VSI %d has non-zero base vector %d\n",
   VAR_3->vsi_num, VAR_3->base_vector);
  return -VAR_0;
 }

 VAR_5 = VAR_3->num_q_vectors;

 VAR_3->base_vector = FUNC_2(VAR_4, VAR_4->irq_tracker, VAR_5,
           VAR_3->idx);
 if (VAR_3->base_vector < 0) {
  FUNC_1(&VAR_4->pdev->dev,
   "Failed to get tracking for %d vectors for VSI %d, err=%d\n",
   VAR_5, VAR_3->vsi_num, VAR_3->base_vector);
  return -VAR_1;
 }
 VAR_4->num_avail_sw_msix -= VAR_5;

 return 0;
}
