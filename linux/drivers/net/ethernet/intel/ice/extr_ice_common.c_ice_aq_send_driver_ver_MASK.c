
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u16 ;
struct ice_sq_cd {int dummy; } ;
struct ice_hw {int dummy; } ;
struct ice_driver_ver {scalar_t__* driver_string; int subbuild_ver; int build_ver; int minor_ver; int major_ver; } ;
struct ice_aqc_driver_ver {int subbuild_ver; int build_ver; int minor_ver; int major_ver; } ;
struct TYPE_2__ {struct ice_aqc_driver_ver driver_ver; } ;
struct ice_aq_desc {int flags; TYPE_1__ params; } ;
typedef enum ice_status { ____Placeholder_ice_status } ice_status ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct ice_hw*,struct ice_aq_desc*,scalar_t__*,int,struct ice_sq_cd*) ;
 int VAR_2 ;
 int FUNC_2 (struct ice_aq_desc*,int ) ;
 scalar_t__ FUNC_3 (scalar_t__) ;

enum ice_status
FUNC_4(struct ice_hw *VAR_3, struct ice_driver_ver *VAR_4,
         struct ice_sq_cd *VAR_5)
{
 struct ice_aqc_driver_ver *VAR_6;
 struct ice_aq_desc VAR_7;
 u16 VAR_8;

 VAR_6 = &VAR_7.params.driver_ver;

 if (!VAR_4)
  return VAR_1;

 FUNC_2(&VAR_7, VAR_2);

 VAR_7.flags |= FUNC_0(VAR_0);
 VAR_6->major_ver = VAR_4->major_ver;
 VAR_6->minor_ver = VAR_4->minor_ver;
 VAR_6->build_ver = VAR_4->build_ver;
 VAR_6->subbuild_ver = VAR_4->subbuild_ver;

 VAR_8 = 0;
 while (VAR_8 < sizeof(VAR_4->driver_string) &&
        FUNC_3(VAR_4->driver_string[VAR_8]) && VAR_4->driver_string[VAR_8])
  VAR_8++;

 return FUNC_1(VAR_3, &VAR_7, VAR_4->driver_string, VAR_8, VAR_5);
}
