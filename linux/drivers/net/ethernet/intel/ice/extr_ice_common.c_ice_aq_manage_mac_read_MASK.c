
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef size_t u8 ;
typedef int u16 ;
struct ice_sq_cd {int dummy; } ;
struct ice_hw {TYPE_3__* port_info; } ;
struct ice_aqc_manage_mac_read_resp {scalar_t__ addr_type; int mac_addr; } ;
struct ice_aqc_manage_mac_read {size_t num_addr; int flags; } ;
struct TYPE_4__ {struct ice_aqc_manage_mac_read mac_read; } ;
struct ice_aq_desc {TYPE_1__ params; } ;
typedef enum ice_status { ____Placeholder_ice_status } ice_status ;
struct TYPE_5__ {int perm_addr; int lan_addr; } ;
struct TYPE_6__ {TYPE_2__ mac; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (struct ice_hw*,struct ice_aq_desc*,void*,int,struct ice_sq_cd*) ;
 int VAR_6 ;
 int FUNC_2 (struct ice_hw*,int ,char*) ;
 int FUNC_3 (struct ice_aq_desc*,int ) ;
 int FUNC_4 (int ) ;

__attribute__((used)) static enum ice_status
FUNC_5(struct ice_hw *VAR_7, void *VAR_8, u16 VAR_9,
         struct ice_sq_cd *VAR_10)
{
 struct ice_aqc_manage_mac_read_resp *VAR_11;
 struct ice_aqc_manage_mac_read *VAR_12;
 struct ice_aq_desc VAR_13;
 enum ice_status VAR_14;
 u16 VAR_15;
 u8 VAR_16;

 VAR_12 = &VAR_13.params.mac_read;

 if (VAR_9 < sizeof(*VAR_11))
  return VAR_4;

 FUNC_3(&VAR_13, VAR_6);

 VAR_14 = FUNC_1(VAR_7, &VAR_13, VAR_8, VAR_9, VAR_10);
 if (VAR_14)
  return VAR_14;

 VAR_11 = (struct ice_aqc_manage_mac_read_resp *)VAR_8;
 VAR_15 = FUNC_4(VAR_12->flags) & VAR_2;

 if (!(VAR_15 & VAR_1)) {
  FUNC_2(VAR_7, VAR_3, "got invalid MAC address\n");
  return VAR_5;
 }


 for (VAR_16 = 0; VAR_16 < VAR_12->num_addr; VAR_16++)
  if (VAR_11[VAR_16].addr_type == VAR_0) {
   FUNC_0(VAR_7->port_info->mac.lan_addr,
     VAR_11[VAR_16].mac_addr);
   FUNC_0(VAR_7->port_info->mac.perm_addr,
     VAR_11[VAR_16].mac_addr);
   break;
  }

 return 0;
}
