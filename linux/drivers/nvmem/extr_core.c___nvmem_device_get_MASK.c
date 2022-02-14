
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nvmem_device {int refcnt; int dev; int owner; } ;
struct device_node {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct nvmem_device* FUNC_0 (int ) ;
 int FUNC_1 (int *,char*,int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (struct nvmem_device*) ;
 struct nvmem_device* FUNC_6 (char const*) ;
 int VAR_2 ;
 struct nvmem_device* FUNC_7 (struct device_node*) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int ) ;

__attribute__((used)) static struct nvmem_device *FUNC_10(struct device_node *VAR_3,
            const char *VAR_4)
{
 struct nvmem_device *VAR_5 = ((void*)0);

 FUNC_3(&VAR_2);
 VAR_5 = VAR_3 ? FUNC_7(VAR_3) : FUNC_6(VAR_4);
 FUNC_4(&VAR_2);
 if (!VAR_5)
  return FUNC_0(-VAR_1);

 if (!FUNC_9(VAR_5->owner)) {
  FUNC_1(&VAR_5->dev,
   "could not increase module refcount for cell %s\n",
   FUNC_5(VAR_5));

  FUNC_8(&VAR_5->dev);
  return FUNC_0(-VAR_0);
 }

 FUNC_2(&VAR_5->refcnt);

 return VAR_5;
}
