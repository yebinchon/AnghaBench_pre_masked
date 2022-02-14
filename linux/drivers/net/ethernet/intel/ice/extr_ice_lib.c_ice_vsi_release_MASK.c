
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ice_vsi {scalar_t__ type; int * netdev; int state; int idx; int port_info; scalar_t__ num_q_vectors; int base_vector; struct ice_pf* back; } ;
struct ice_pf {int state; int hw; int flags; int num_avail_sw_msix; int irq_tracker; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (struct ice_vsi*,int,int) ;
 int FUNC_2 (int ,int ,int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (struct ice_pf*) ;
 int FUNC_5 (int *,int ) ;
 int FUNC_6 (int ,int ) ;
 int FUNC_7 (struct ice_vsi*) ;
 int FUNC_8 (struct ice_vsi*,int) ;
 int FUNC_9 (struct ice_vsi*) ;
 int FUNC_10 (struct ice_vsi*) ;
 int FUNC_11 (struct ice_vsi*) ;
 int FUNC_12 (struct ice_vsi*) ;
 int FUNC_13 (struct ice_vsi*) ;
 int FUNC_14 (struct ice_vsi*) ;
 int FUNC_15 (struct ice_vsi*) ;
 scalar_t__ FUNC_16 (int ,int ) ;
 int FUNC_17 (int *) ;

int FUNC_18(struct ice_vsi *VAR_7)
{
 struct ice_pf *VAR_8;

 if (!VAR_7->back)
  return -VAR_0;
 VAR_8 = VAR_7->back;







 if (VAR_7->netdev && !FUNC_3(VAR_8->state))
  FUNC_17(VAR_7->netdev);

 if (FUNC_16(VAR_2, VAR_8->flags))
  FUNC_7(VAR_7);


 if (VAR_7->type != VAR_3)
  FUNC_13(VAR_7);
 FUNC_11(VAR_7);






 if (VAR_7->type != VAR_5) {

  FUNC_2(VAR_8->irq_tracker, VAR_7->base_vector, VAR_7->idx);
  VAR_8->num_avail_sw_msix += VAR_7->num_q_vectors;
 }

 if (!FUNC_4(VAR_8)) {
  if (VAR_7->type == VAR_4) {
   FUNC_8(VAR_7, 0);
   FUNC_1(VAR_7, 1, 0);



   if (!FUNC_16(VAR_1, VAR_8->flags))
    FUNC_1(VAR_7, 0, 0);
  }
 }

 FUNC_5(&VAR_8->hw, VAR_7->idx);
 FUNC_6(VAR_7->port_info, VAR_7->idx);
 FUNC_12(VAR_7);
 FUNC_14(VAR_7);


 if (VAR_7->netdev && FUNC_16(VAR_6, VAR_7->state)) {
  FUNC_0(VAR_7->netdev);
  VAR_7->netdev = ((void*)0);
 }

 FUNC_10(VAR_7);

 FUNC_15(VAR_7);





 if (!FUNC_3(VAR_8->state))
  FUNC_9(VAR_7);

 return 0;
}
