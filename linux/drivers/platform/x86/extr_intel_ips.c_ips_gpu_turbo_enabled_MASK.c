
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ips_driver {int gpu_turbo_enabled; int dev; int gpu_busy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,char*) ;
 scalar_t__ FUNC_1 (struct ips_driver*) ;
 scalar_t__ VAR_2 ;
 int FUNC_2 (int ) ;

__attribute__((used)) static bool
FUNC_3(struct ips_driver *VAR_3)
{
 if (!VAR_3->gpu_busy && VAR_2) {
  if (FUNC_1(VAR_3)) {
   FUNC_0(VAR_3->dev,
     "i915 driver attached, reenabling gpu turbo\n");
   VAR_3->gpu_turbo_enabled = !(FUNC_2(VAR_1) & VAR_0);
  }
 }

 return VAR_3->gpu_turbo_enabled;
}
