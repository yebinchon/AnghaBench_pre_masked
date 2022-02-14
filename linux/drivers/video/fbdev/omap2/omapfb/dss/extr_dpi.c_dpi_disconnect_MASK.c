
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct omap_dss_device {scalar_t__ manager; struct omap_dss_device* dst; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (scalar_t__,struct omap_dss_device*) ;
 int FUNC_2 (struct omap_dss_device*) ;

__attribute__((used)) static void FUNC_3(struct omap_dss_device *VAR_0,
  struct omap_dss_device *VAR_1)
{
 FUNC_0(VAR_1 != VAR_0->dst);

 if (VAR_1 != VAR_0->dst)
  return;

 FUNC_2(VAR_0);

 if (VAR_0->manager)
  FUNC_1(VAR_0->manager, VAR_0);
}
