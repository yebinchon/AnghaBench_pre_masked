
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
typedef int u16 ;
struct ice_sq_cd {int dummy; } ;
struct ice_hw {int dummy; } ;
struct ice_aqc_manage_mac_write {int sal; int sah; int flags; } ;
struct TYPE_2__ {struct ice_aqc_manage_mac_write mac_write; } ;
struct ice_aq_desc {TYPE_1__ params; } ;
typedef enum ice_status { ____Placeholder_ice_status } ice_status ;


 int FUNC_0 (int const) ;
 int FUNC_1 (int const) ;
 int FUNC_2 (struct ice_hw*,struct ice_aq_desc*,int *,int ,struct ice_sq_cd*) ;
 int VAR_0 ;
 int FUNC_3 (struct ice_aq_desc*,int ) ;

enum ice_status
FUNC_4(struct ice_hw *VAR_1, const u8 *VAR_2, u8 VAR_3,
   struct ice_sq_cd *VAR_4)
{
 struct ice_aqc_manage_mac_write *VAR_5;
 struct ice_aq_desc VAR_6;

 VAR_5 = &VAR_6.params.mac_write;
 FUNC_3(&VAR_6, VAR_0);

 VAR_5->flags = VAR_3;


 VAR_5->sah = FUNC_1(*((const u16 *)VAR_2));
 VAR_5->sal = FUNC_0(*((const u32 *)(VAR_2 + 2)));

 return FUNC_2(VAR_1, &VAR_6, ((void*)0), 0, VAR_4);
}
