
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct omap_dss_device {TYPE_1__* driver; } ;
typedef int ssize_t ;
struct TYPE_2__ {int (* enable_te ) (struct omap_dss_device*,int) ;int get_te; } ;


 int VAR_0 ;
 int FUNC_0 (char const*,int*) ;
 int FUNC_1 (struct omap_dss_device*,int) ;

__attribute__((used)) static ssize_t FUNC_2(struct omap_dss_device *VAR_1,
 const char *VAR_2, size_t VAR_3)
{
 int VAR_4;
 bool VAR_5;

 if (!VAR_1->driver->enable_te || !VAR_1->driver->get_te)
  return -VAR_0;

 VAR_4 = FUNC_0(VAR_2, &VAR_5);
 if (VAR_4)
  return VAR_4;

 VAR_4 = VAR_1->driver->enable_te(VAR_1, VAR_5);
 if (VAR_4)
  return VAR_4;

 return VAR_3;
}
