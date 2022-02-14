
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vfio_group {int container_users; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct vfio_group*) ;
 int FUNC_1 (int *,int,int ) ;

__attribute__((used)) static int FUNC_2(struct vfio_group *VAR_2)
{
 int VAR_3 = FUNC_1(&VAR_2->container_users, 1, 0);

 if (!VAR_3)
  return -VAR_1;
 if (VAR_3 != 1)
  return -VAR_0;

 FUNC_0(VAR_2);

 return 0;
}
