
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ips_driver {int gpu_turbo_enabled; int (* gpu_raise ) () ;} ;


 int FUNC_0 (struct ips_driver*) ;
 int FUNC_1 () ;

__attribute__((used)) static void FUNC_2(struct ips_driver *VAR_0)
{
 if (!FUNC_0(VAR_0))
  return;

 if (!VAR_0->gpu_raise())
  VAR_0->gpu_turbo_enabled = 0;

 return;
}
