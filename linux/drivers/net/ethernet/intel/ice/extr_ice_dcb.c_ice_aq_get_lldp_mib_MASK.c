
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u16 ;
struct ice_sq_cd {int dummy; } ;
struct ice_hw {int dummy; } ;
struct ice_aqc_lldp_get_mib {int type; int remote_len; int local_len; } ;
struct TYPE_2__ {struct ice_aqc_lldp_get_mib lldp_get_mib; } ;
struct ice_aq_desc {int datalen; TYPE_1__ params; } ;
typedef enum ice_status { ____Placeholder_ice_status } ice_status ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct ice_hw*,struct ice_aq_desc*,void*,int ,struct ice_sq_cd*) ;
 int VAR_4 ;
 int FUNC_2 (struct ice_aq_desc*,int ) ;
 int FUNC_3 (int ) ;

__attribute__((used)) static enum ice_status
FUNC_4(struct ice_hw *VAR_5, u8 VAR_6, u8 VAR_7, void *VAR_8,
      u16 VAR_9, u16 *VAR_10, u16 *VAR_11,
      struct ice_sq_cd *VAR_12)
{
 struct ice_aqc_lldp_get_mib *VAR_13;
 struct ice_aq_desc VAR_14;
 enum ice_status VAR_15;

 VAR_13 = &VAR_14.params.lldp_get_mib;

 if (VAR_9 == 0 || !VAR_8)
  return VAR_3;

 FUNC_2(&VAR_14, VAR_4);

 VAR_13->type = VAR_7 & VAR_2;
 VAR_13->type |= (VAR_6 << VAR_1) &
  VAR_0;

 VAR_14.datalen = FUNC_0(VAR_9);

 VAR_15 = FUNC_1(VAR_5, &VAR_14, VAR_8, VAR_9, VAR_12);
 if (!VAR_15) {
  if (VAR_10)
   *VAR_10 = FUNC_3(VAR_13->local_len);
  if (VAR_11)
   *VAR_11 = FUNC_3(VAR_13->remote_len);
 }

 return VAR_15;
}
