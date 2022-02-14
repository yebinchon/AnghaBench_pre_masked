
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gasket_internal_desc {struct gasket_driver_desc const* driver_desc; int class; int devs; int mutex; } ;
struct gasket_driver_desc {int name; int minor; int major; int module; int driver_version; } ;
struct gasket_dev {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (int ) ;
 struct gasket_internal_desc* VAR_3 ;
 int VAR_4 ;
 int FUNC_5 (int ,int ,int) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (char*,int ,int ) ;
 int FUNC_10 (char*,int,...) ;
 int FUNC_11 (int ,int,int ) ;

int FUNC_12(const struct gasket_driver_desc *VAR_5)
{
 int VAR_6, VAR_7;
 int VAR_8 = -1;
 struct gasket_internal_desc *VAR_9;

 FUNC_9("Loading %s driver version %s\n", VAR_5->name,
   VAR_5->driver_version);

 FUNC_7(&VAR_4);

 for (VAR_6 = 0; VAR_6 < VAR_2; VAR_6++) {
  if (VAR_3[VAR_6].driver_desc == VAR_5) {
   FUNC_10("%s driver already loaded/registered\n",
          VAR_5->name);
   FUNC_8(&VAR_4);
   return -VAR_0;
  }
 }


 for (VAR_6 = 0; VAR_6 < VAR_2; VAR_6++) {
  if (!VAR_3[VAR_6].driver_desc) {
   VAR_3[VAR_6].driver_desc = VAR_5;
   VAR_8 = VAR_6;
   break;
  }
 }
 FUNC_8(&VAR_4);

 if (VAR_8 == -1) {
  FUNC_10("too many drivers loaded, max %d\n",
         VAR_2);
  return -VAR_0;
 }

 VAR_9 = &VAR_3[VAR_8];
 FUNC_6(&VAR_9->mutex);
 FUNC_5(VAR_9->devs, 0, sizeof(struct gasket_dev *) * VAR_1);
 VAR_9->class =
  FUNC_3(VAR_5->module, VAR_5->name);

 if (FUNC_0(VAR_9->class)) {
  FUNC_10("Cannot register %s class [ret=%ld]\n",
         VAR_5->name, FUNC_2(VAR_9->class));
  VAR_7 = FUNC_2(VAR_9->class);
  goto unregister_gasket_driver;
 }

 VAR_7 = FUNC_11(FUNC_1(VAR_5->major,
        VAR_5->minor), VAR_1,
         VAR_5->name);
 if (VAR_7) {
  FUNC_10("cannot register %s char driver [ret=%d]\n",
         VAR_5->name, VAR_7);
  goto destroy_class;
 }

 return 0;

destroy_class:
 FUNC_4(VAR_9->class);

unregister_gasket_driver:
 FUNC_7(&VAR_4);
 VAR_3[VAR_8].driver_desc = ((void*)0);
 FUNC_8(&VAR_4);
 return VAR_7;
}
