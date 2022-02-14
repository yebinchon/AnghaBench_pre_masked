
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vfio_group {int container_users; } ;


 int FUNC_0 (struct vfio_group*) ;
 scalar_t__ FUNC_1 (int *) ;

__attribute__((used)) static void FUNC_2(struct vfio_group *VAR_0)
{
 if (0 == FUNC_1(&VAR_0->container_users))
  FUNC_0(VAR_0);
}
