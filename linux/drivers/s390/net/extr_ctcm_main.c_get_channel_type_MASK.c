
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ccw_device_id {scalar_t__ driver_info; } ;
typedef enum ctcm_channel_types { ____Placeholder_ctcm_channel_types } ctcm_channel_types ;


 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static enum ctcm_channel_types FUNC_0(struct ccw_device_id *VAR_2)
{
 enum ctcm_channel_types VAR_3;
 VAR_3 = (enum ctcm_channel_types)VAR_2->driver_info;

 if (VAR_3 == VAR_1)
  VAR_3 = VAR_0;

 return VAR_3;
}
