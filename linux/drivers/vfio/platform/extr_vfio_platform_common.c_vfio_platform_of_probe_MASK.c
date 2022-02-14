
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vfio_platform_device {int name; int compat; } ;
struct device {int dummy; } ;


 int FUNC_0 (struct device*,char*,int ) ;
 int FUNC_1 (struct device*,char*,int *) ;

__attribute__((used)) static int FUNC_2(struct vfio_platform_device *VAR_0,
      struct device *VAR_1)
{
 int VAR_2;

 VAR_2 = FUNC_1(VAR_1, "compatible",
       &VAR_0->compat);
 if (VAR_2)
  FUNC_0(VAR_1, "Cannot retrieve compat for %s\n", VAR_0->name);

 return VAR_2;
}
