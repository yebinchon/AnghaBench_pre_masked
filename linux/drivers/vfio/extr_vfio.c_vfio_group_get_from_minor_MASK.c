
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct vfio_group {int dummy; } ;
struct TYPE_2__ {int group_lock; int group_idr; } ;


 struct vfio_group* FUNC_0 (int *,int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 TYPE_1__ VAR_0 ;
 int FUNC_3 (struct vfio_group*) ;

__attribute__((used)) static struct vfio_group *FUNC_4(int VAR_1)
{
 struct vfio_group *VAR_2;

 FUNC_1(&VAR_0.group_lock);
 VAR_2 = FUNC_0(&VAR_0.group_idr, VAR_1);
 if (!VAR_2) {
  FUNC_2(&VAR_0.group_lock);
  return ((void*)0);
 }
 FUNC_3(VAR_2);
 FUNC_2(&VAR_0.group_lock);

 return VAR_2;
}
