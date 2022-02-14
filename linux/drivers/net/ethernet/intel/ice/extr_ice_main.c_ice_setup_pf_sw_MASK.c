
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct ice_vsi {TYPE_2__* netdev; } ;
struct TYPE_4__ {int port_info; } ;
struct ice_pf {TYPE_1__ hw; int state; } ;
struct TYPE_5__ {scalar_t__ reg_state; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (struct ice_vsi*) ;
 int FUNC_2 (struct ice_pf*) ;
 scalar_t__ FUNC_3 (int ) ;
 int FUNC_4 (struct ice_vsi*) ;
 int FUNC_5 (struct ice_vsi*) ;
 struct ice_vsi* FUNC_6 (struct ice_pf*,int ) ;
 int FUNC_7 (struct ice_vsi*) ;
 int FUNC_8 (struct ice_vsi*) ;
 int FUNC_9 (struct ice_vsi*) ;
 int FUNC_10 (struct ice_vsi*) ;
 int FUNC_11 (TYPE_2__*) ;

__attribute__((used)) static int FUNC_12(struct ice_pf *VAR_4)
{
 struct ice_vsi *VAR_5;
 int VAR_6 = 0;

 if (FUNC_3(VAR_4->state))
  return -VAR_0;

 VAR_5 = FUNC_6(VAR_4, VAR_4->hw.port_info);
 if (!VAR_5) {
  VAR_6 = -VAR_2;
  goto unroll_vsi_setup;
 }

 VAR_6 = FUNC_1(VAR_5);
 if (VAR_6) {
  VAR_6 = -VAR_1;
  goto unroll_vsi_setup;
 }





 FUNC_4(VAR_5);

 VAR_6 = FUNC_2(VAR_4);
 if (VAR_6)
  goto unroll_napi_add;

 return VAR_6;

unroll_napi_add:
 if (VAR_5) {
  FUNC_5(VAR_5);
  if (VAR_5->netdev) {
   if (VAR_5->netdev->reg_state == VAR_3)
    FUNC_11(VAR_5->netdev);
   FUNC_0(VAR_5->netdev);
   VAR_5->netdev = ((void*)0);
  }
 }

unroll_vsi_setup:
 if (VAR_5) {
  FUNC_9(VAR_5);
  FUNC_8(VAR_5);
  FUNC_10(VAR_5);
  FUNC_7(VAR_5);
 }
 return VAR_6;
}
