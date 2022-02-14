
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef enum omap_dss_rotation_type { ____Placeholder_omap_dss_rotation_type } omap_dss_rotation_type ;
struct TYPE_2__ {int supported_rotation_types; } ;


 TYPE_1__* VAR_0 ;

bool FUNC_0(enum omap_dss_rotation_type VAR_1)
{
 return VAR_0->supported_rotation_types & VAR_1;
}
