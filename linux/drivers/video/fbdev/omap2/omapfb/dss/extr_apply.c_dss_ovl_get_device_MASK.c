
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct omap_overlay {scalar_t__ manager; } ;
struct omap_dss_device {int dummy; } ;


 struct omap_dss_device* FUNC_0 (scalar_t__) ;

__attribute__((used)) static struct omap_dss_device *FUNC_1(struct omap_overlay *VAR_0)
{
 return VAR_0->manager ? FUNC_0(VAR_0->manager) : ((void*)0);
}
