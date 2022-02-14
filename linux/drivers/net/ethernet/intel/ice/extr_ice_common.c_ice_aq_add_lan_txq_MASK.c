
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u8 ;
typedef scalar_t__ u16 ;
struct ice_sq_cd {int dummy; } ;
struct ice_hw {int dummy; } ;
struct ice_aqc_add_txqs_perq {int dummy; } ;
struct ice_aqc_add_txqs {scalar_t__ num_qgrps; } ;
struct ice_aqc_add_tx_qgrp {int num_txqs; struct ice_aqc_add_txqs_perq* txqs; } ;
struct TYPE_2__ {struct ice_aqc_add_txqs add_txqs; } ;
struct ice_aq_desc {int flags; TYPE_1__ params; } ;
typedef enum ice_status { ____Placeholder_ice_status } ice_status ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct ice_hw*,struct ice_aq_desc*,struct ice_aqc_add_tx_qgrp*,scalar_t__,struct ice_sq_cd*) ;
 int VAR_3 ;
 int FUNC_2 (struct ice_aq_desc*,int ) ;

__attribute__((used)) static enum ice_status
FUNC_3(struct ice_hw *VAR_4, u8 VAR_5,
     struct ice_aqc_add_tx_qgrp *VAR_6, u16 VAR_7,
     struct ice_sq_cd *VAR_8)
{
 u16 VAR_9, VAR_10, VAR_11 = 0;
 struct ice_aqc_add_tx_qgrp *VAR_12;
 struct ice_aqc_add_txqs *VAR_13;
 struct ice_aq_desc VAR_14;

 VAR_13 = &VAR_14.params.add_txqs;

 FUNC_2(&VAR_14, VAR_3);

 if (!VAR_6)
  return VAR_1;

 if (VAR_5 > VAR_2)
  return VAR_1;

 VAR_10 = VAR_5 *
  (sizeof(*VAR_6) - sizeof(*VAR_6->txqs));

 VAR_12 = VAR_6;
 for (VAR_9 = 0; VAR_9 < VAR_5; VAR_9++) {
  struct ice_aqc_add_txqs_perq *VAR_15 = VAR_12->txqs;

  VAR_11 += VAR_12->num_txqs * sizeof(*VAR_15);
  VAR_12 = (struct ice_aqc_add_tx_qgrp *)(VAR_15 + VAR_12->num_txqs);
 }

 if (VAR_7 != (VAR_10 + VAR_11))
  return VAR_1;

 VAR_14.flags |= FUNC_0(VAR_0);

 VAR_13->num_qgrps = VAR_5;

 return FUNC_1(VAR_4, &VAR_14, VAR_6, VAR_7, VAR_8);
}
