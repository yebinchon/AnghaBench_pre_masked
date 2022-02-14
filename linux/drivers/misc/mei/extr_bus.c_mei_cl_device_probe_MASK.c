
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mei_cl_driver {int (* probe ) (struct mei_cl_device*,struct mei_cl_device_id const*) ;} ;
struct mei_cl_device_id {int dummy; } ;
struct mei_cl_device {int dev; } ;
struct device {int driver; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int *,char*) ;
 int FUNC_2 (struct mei_cl_device*) ;
 int FUNC_3 (struct mei_cl_device*) ;
 struct mei_cl_device_id* FUNC_4 (struct mei_cl_device*,struct mei_cl_driver*) ;
 int FUNC_5 (struct mei_cl_device*,struct mei_cl_device_id const*) ;
 struct mei_cl_device* FUNC_6 (struct device*) ;
 struct mei_cl_driver* FUNC_7 (int ) ;

__attribute__((used)) static int FUNC_8(struct device *VAR_2)
{
 struct mei_cl_device *VAR_3;
 struct mei_cl_driver *VAR_4;
 const struct mei_cl_device_id *VAR_5;
 int VAR_6;

 VAR_3 = FUNC_6(VAR_2);
 VAR_4 = FUNC_7(VAR_2->driver);

 if (!VAR_3)
  return 0;

 if (!VAR_4 || !VAR_4->probe)
  return -VAR_0;

 VAR_5 = FUNC_4(VAR_3, VAR_4);
 if (!VAR_5)
  return -VAR_0;

 if (!FUNC_2(VAR_3)) {
  FUNC_1(&VAR_3->dev, "get hw module failed");
  return -VAR_0;
 }

 VAR_6 = VAR_4->probe(VAR_3, VAR_5);
 if (VAR_6) {
  FUNC_3(VAR_3);
  return VAR_6;
 }

 FUNC_0(VAR_1);
 return 0;
}
