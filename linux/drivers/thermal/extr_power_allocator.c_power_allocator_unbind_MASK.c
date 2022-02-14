
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct thermal_zone_device {struct power_allocator_params* governor_data; struct power_allocator_params* tzp; int id; int device; } ;
struct power_allocator_params {scalar_t__ allocated_tzp; } ;


 int FUNC_0 (int *,char*,int ) ;
 int FUNC_1 (struct power_allocator_params*) ;

__attribute__((used)) static void FUNC_2(struct thermal_zone_device *VAR_0)
{
 struct power_allocator_params *VAR_1 = VAR_0->governor_data;

 FUNC_0(&VAR_0->device, "Unbinding from thermal zone %d\n", VAR_0->id);

 if (VAR_1->allocated_tzp) {
  FUNC_1(VAR_0->tzp);
  VAR_0->tzp = ((void*)0);
 }

 FUNC_1(VAR_0->governor_data);
 VAR_0->governor_data = ((void*)0);
}
