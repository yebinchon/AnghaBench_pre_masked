
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct omap_dss_device {TYPE_1__* driver; } ;
typedef int ssize_t ;
struct TYPE_2__ {int (* set_rotate ) (struct omap_dss_device*,int) ;int get_rotate; } ;


 int VAR_0 ;
 int FUNC_0 (char const*,int ,int*) ;
 int FUNC_1 (struct omap_dss_device*,int) ;

__attribute__((used)) static ssize_t FUNC_2(struct omap_dss_device *VAR_1,
 const char *VAR_2, size_t VAR_3)
{
 int VAR_4, VAR_5;

 if (!VAR_1->driver->set_rotate || !VAR_1->driver->get_rotate)
  return -VAR_0;

 VAR_5 = FUNC_0(VAR_2, 0, &VAR_4);
 if (VAR_5)
  return VAR_5;

 VAR_5 = VAR_1->driver->set_rotate(VAR_1, VAR_4);
 if (VAR_5)
  return VAR_5;

 return VAR_3;
}
