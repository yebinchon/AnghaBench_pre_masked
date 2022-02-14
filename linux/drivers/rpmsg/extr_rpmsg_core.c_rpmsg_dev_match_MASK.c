
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rpmsg_driver {struct rpmsg_device_id* id_table; } ;
struct rpmsg_device_id {scalar_t__* name; } ;
struct rpmsg_device {scalar_t__ driver_override; } ;
struct device_driver {int name; } ;
struct device {int dummy; } ;


 int FUNC_0 (struct device*,struct device_driver*) ;
 scalar_t__ FUNC_1 (struct rpmsg_device*,struct rpmsg_device_id const*) ;
 int FUNC_2 (scalar_t__,int ) ;
 struct rpmsg_device* FUNC_3 (struct device*) ;
 struct rpmsg_driver* FUNC_4 (struct device_driver*) ;

__attribute__((used)) static int FUNC_5(struct device *VAR_0, struct device_driver *VAR_1)
{
 struct rpmsg_device *VAR_2 = FUNC_3(VAR_0);
 struct rpmsg_driver *VAR_3 = FUNC_4(VAR_1);
 const struct rpmsg_device_id *VAR_4 = VAR_3->id_table;
 unsigned int VAR_5;

 if (VAR_2->driver_override)
  return !FUNC_2(VAR_2->driver_override, VAR_1->name);

 if (VAR_4)
  for (VAR_5 = 0; VAR_4[VAR_5].name[0]; VAR_5++)
   if (FUNC_1(VAR_2, &VAR_4[VAR_5]))
    return 1;

 return FUNC_0(VAR_0, VAR_1);
}
