
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int vqs ;
typedef int u8 ;
struct virtchnl_queue_select {int vsi_id; } ;
struct iavf_adapter {scalar_t__ current_op; TYPE_1__* vsi_res; } ;
struct TYPE_2__ {int vsi_id; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 (struct iavf_adapter*,scalar_t__,int *,int) ;

void FUNC_1(struct iavf_adapter *VAR_2)
{
 struct virtchnl_queue_select VAR_3;

 if (VAR_2->current_op != VAR_1) {

  return;
 }
 VAR_2->current_op = VAR_0;
 VAR_3.vsi_id = VAR_2->vsi_res->vsi_id;

 if (FUNC_0(VAR_2, VAR_0, (u8 *)&VAR_3,
        sizeof(VAR_3)))

  VAR_2->current_op = VAR_1;
}
