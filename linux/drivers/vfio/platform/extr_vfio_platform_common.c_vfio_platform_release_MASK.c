
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vfio_platform_device {int parent_module; int device; scalar_t__ reset_required; int refcnt; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (int ,char*,int,char const*) ;
 int VAR_0 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (struct vfio_platform_device*,char const**) ;
 int FUNC_7 (struct vfio_platform_device*) ;
 int FUNC_8 (struct vfio_platform_device*) ;

__attribute__((used)) static void FUNC_9(void *VAR_1)
{
 struct vfio_platform_device *VAR_2 = VAR_1;

 FUNC_3(&VAR_0);

 if (!(--VAR_2->refcnt)) {
  const char *VAR_3 = ((void*)0);
  int VAR_4;

  VAR_4 = FUNC_6(VAR_2, &VAR_3);
  if (VAR_4 && VAR_2->reset_required) {
   FUNC_1(VAR_2->device, "reset driver is required and reset call failed in release (%d) %s\n",
     VAR_4, VAR_3 ? VAR_3 : "");
   FUNC_0(1);
  }
  FUNC_5(VAR_2->device);
  FUNC_8(VAR_2);
  FUNC_7(VAR_2);
 }

 FUNC_4(&VAR_0);

 FUNC_2(VAR_2->parent_module);
}
