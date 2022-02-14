
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int u8 ;
typedef void* u16 ;
struct ice_hw {TYPE_4__* port_info; } ;
struct TYPE_10__ {void* hw_vsi_id; } ;
struct TYPE_7__ {int* mac_addr; } ;
struct TYPE_6__ {void* vlan_id; } ;
struct TYPE_8__ {TYPE_2__ mac; TYPE_1__ mac_vlan; } ;
struct ice_fltr_info {TYPE_5__ fwd_id; void* vsi_handle; int fltr_act; void* src; int flag; TYPE_3__ l_data; void* lkup_type; } ;
struct ice_fltr_list_entry {struct ice_fltr_info fltr_info; } ;
typedef int new_fltr ;
typedef enum ice_status { ____Placeholder_ice_status } ice_status ;
struct TYPE_9__ {void* lport; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 void* VAR_12 ;
 void* VAR_13 ;
 int VAR_14 ;
 int FUNC_0 (int*) ;
 int FUNC_1 (int*,int ) ;
 int FUNC_2 (struct ice_hw*,int,struct ice_fltr_list_entry*) ;
 void* FUNC_3 (struct ice_hw*,void*) ;
 int FUNC_4 (struct ice_hw*,void*) ;
 int FUNC_5 (struct ice_fltr_info*,int ,int) ;

enum ice_status
FUNC_6(struct ice_hw *VAR_15, u16 VAR_16, u8 VAR_17, u16 VAR_18)
{
 enum { UCAST_FLTR = 1, MCAST_FLTR, BCAST_FLTR };
 struct ice_fltr_list_entry VAR_19;
 struct ice_fltr_info VAR_20;
 enum ice_status VAR_21 = 0;
 bool VAR_22;
 u16 VAR_23;
 int VAR_24;
 u8 VAR_25;

 if (!FUNC_4(VAR_15, VAR_16))
  return VAR_0;
 VAR_23 = FUNC_3(VAR_15, VAR_16);

 FUNC_5(&VAR_20, 0, sizeof(VAR_20));

 if (VAR_17 & (VAR_10 | VAR_11)) {
  VAR_20.lkup_type = VAR_13;
  VAR_20.l_data.mac_vlan.vlan_id = VAR_18;
  VAR_25 = VAR_13;
 } else {
  VAR_20.lkup_type = VAR_12;
  VAR_25 = VAR_12;
 }






 while (VAR_17) {
  u8 *VAR_26;

  VAR_24 = 0;
  VAR_22 = 0;

  if (VAR_17 & VAR_8) {
   VAR_17 &= ~VAR_8;
   VAR_24 = UCAST_FLTR;
  } else if (VAR_17 & VAR_9) {
   VAR_17 &= ~VAR_9;
   VAR_24 = UCAST_FLTR;
   VAR_22 = 1;
  } else if (VAR_17 & VAR_6) {
   VAR_17 &= ~VAR_6;
   VAR_24 = MCAST_FLTR;
  } else if (VAR_17 & VAR_7) {
   VAR_17 &= ~VAR_7;
   VAR_24 = MCAST_FLTR;
   VAR_22 = 1;
  } else if (VAR_17 & VAR_4) {
   VAR_17 &= ~VAR_4;
   VAR_24 = BCAST_FLTR;
  } else if (VAR_17 & VAR_5) {
   VAR_17 &= ~VAR_5;
   VAR_24 = BCAST_FLTR;
   VAR_22 = 1;
  }


  if (VAR_17 & VAR_10) {
   VAR_17 &= ~VAR_10;
  } else if (VAR_17 & VAR_11) {
   VAR_17 &= ~VAR_11;
   VAR_22 = 1;
  }


  VAR_26 = VAR_20.l_data.mac.mac_addr;
  if (VAR_24 == BCAST_FLTR) {
   FUNC_0(VAR_26);
  } else if (VAR_24 == MCAST_FLTR ||
      VAR_24 == UCAST_FLTR) {

   FUNC_1(VAR_26, VAR_14);
   if (VAR_24 == MCAST_FLTR)
    VAR_26[0] |= 0x1;
  }


  VAR_20.flag = 0;
  if (VAR_22) {
   VAR_20.flag |= VAR_2;
   VAR_20.src = VAR_23;
  } else {
   VAR_20.flag |= VAR_1;
   VAR_20.src = VAR_15->port_info->lport;
  }

  VAR_20.fltr_act = VAR_3;
  VAR_20.vsi_handle = VAR_16;
  VAR_20.fwd_id.hw_vsi_id = VAR_23;
  VAR_19.fltr_info = VAR_20;

  VAR_21 = FUNC_2(VAR_15, VAR_25, &VAR_19);
  if (VAR_21)
   goto set_promisc_exit;
 }

set_promisc_exit:
 return VAR_21;
}
