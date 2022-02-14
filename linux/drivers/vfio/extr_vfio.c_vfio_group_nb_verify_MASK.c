
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vfio_group {int container_users; } ;
struct device {int dummy; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (struct device*,struct vfio_group*) ;

__attribute__((used)) static int FUNC_2(struct vfio_group *VAR_0, struct device *VAR_1)
{

 if (!FUNC_0(&VAR_0->container_users))
  return 0;

 return FUNC_1(VAR_1, VAR_0);
}
