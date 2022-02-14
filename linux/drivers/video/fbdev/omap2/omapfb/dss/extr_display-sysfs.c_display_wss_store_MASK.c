
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct omap_dss_device {TYPE_1__* driver; } ;
typedef int ssize_t ;
struct TYPE_2__ {int (* set_wss ) (struct omap_dss_device*,int) ;int get_wss; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char const*,int ,int*) ;
 int FUNC_1 (struct omap_dss_device*,int) ;

__attribute__((used)) static ssize_t FUNC_2(struct omap_dss_device *VAR_2,
 const char *VAR_3, size_t VAR_4)
{
 u32 VAR_5;
 int VAR_6;

 if (!VAR_2->driver->get_wss || !VAR_2->driver->set_wss)
  return -VAR_1;

 VAR_6 = FUNC_0(VAR_3, 0, &VAR_5);
 if (VAR_6)
  return VAR_6;

 if (VAR_5 > 0xfffff)
  return -VAR_0;

 VAR_6 = VAR_2->driver->set_wss(VAR_2, VAR_5);
 if (VAR_6)
  return VAR_6;

 return VAR_4;
}
