
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mei_cl_driver {int id_table; } ;
struct mei_cl_device_id {int dummy; } ;
struct mei_cl_device {int do_match; } ;
struct device_driver {int dummy; } ;
struct device {int dummy; } ;


 struct mei_cl_device_id* FUNC_0 (struct mei_cl_device*,struct mei_cl_driver*) ;
 struct mei_cl_device* FUNC_1 (struct device*) ;
 struct mei_cl_driver* FUNC_2 (struct device_driver*) ;

__attribute__((used)) static int FUNC_3(struct device *VAR_0, struct device_driver *VAR_1)
{
 struct mei_cl_device *VAR_2 = FUNC_1(VAR_0);
 struct mei_cl_driver *VAR_3 = FUNC_2(VAR_1);
 const struct mei_cl_device_id *VAR_4;

 if (!VAR_2)
  return 0;

 if (!VAR_2->do_match)
  return 0;

 if (!VAR_3 || !VAR_3->id_table)
  return 0;

 VAR_4 = FUNC_0(VAR_2, VAR_3);
 if (VAR_4)
  return 1;

 return 0;
}
