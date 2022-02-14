
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct thermal_zone_device {TYPE_2__* tzp; TYPE_1__* ops; } ;
struct TYPE_4__ {int k_po; int k_pu; int k_i; } ;
struct TYPE_3__ {int (* get_trip_temp ) (struct thermal_zone_device*,int,int*) ;} ;


 int FUNC_0 (int) ;
 int FUNC_1 (struct thermal_zone_device*,int,int*) ;

__attribute__((used)) static void FUNC_2(struct thermal_zone_device *VAR_0,
       u32 VAR_1, int VAR_2,
       int VAR_3, bool VAR_4)
{
 int VAR_5;
 int VAR_6;
 u32 VAR_7;

 VAR_5 = VAR_0->ops->get_trip_temp(VAR_0, VAR_2, &VAR_6);
 if (VAR_5)
  VAR_6 = 0;

 VAR_7 = VAR_3 - VAR_6;
 if (!VAR_7)
  return;

 if (!VAR_0->tzp->k_po || VAR_4)
  VAR_0->tzp->k_po = FUNC_0(VAR_1) /
   VAR_7;

 if (!VAR_0->tzp->k_pu || VAR_4)
  VAR_0->tzp->k_pu = FUNC_0(2 * VAR_1) /
   VAR_7;

 if (!VAR_0->tzp->k_i || VAR_4)
  VAR_0->tzp->k_i = FUNC_0(10) / 1000;




}
