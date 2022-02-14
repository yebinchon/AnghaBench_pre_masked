
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct omap_dss_device {TYPE_1__* driver; } ;
typedef int ssize_t ;
struct TYPE_2__ {int (* get_mirror ) (struct omap_dss_device*) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*,int ,char*,int) ;
 int FUNC_1 (struct omap_dss_device*) ;

__attribute__((used)) static ssize_t FUNC_2(struct omap_dss_device *VAR_2, char *VAR_3)
{
 int VAR_4;
 if (!VAR_2->driver->get_mirror)
  return -VAR_0;
 VAR_4 = VAR_2->driver->get_mirror(VAR_2);
 return FUNC_0(VAR_3, VAR_1, "%u\n", VAR_4);
}
