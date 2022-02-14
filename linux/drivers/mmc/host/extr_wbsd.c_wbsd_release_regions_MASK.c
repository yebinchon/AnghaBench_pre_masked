
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wbsd_host {scalar_t__ config; scalar_t__ base; } ;


 int FUNC_0 (scalar_t__,int) ;

__attribute__((used)) static void FUNC_1(struct wbsd_host *VAR_0)
{
 if (VAR_0->base)
  FUNC_0(VAR_0->base, 8);

 VAR_0->base = 0;

 if (VAR_0->config)
  FUNC_0(VAR_0->config, 2);

 VAR_0->config = 0;
}
