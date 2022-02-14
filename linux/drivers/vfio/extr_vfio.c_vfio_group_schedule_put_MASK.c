
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vfio_group_put_work {int work; struct vfio_group* group; } ;
struct vfio_group {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int *,int ) ;
 scalar_t__ FUNC_1 (int) ;
 struct vfio_group_put_work* FUNC_2 (int,int ) ;
 int FUNC_3 (int *) ;
 int VAR_1 ;

__attribute__((used)) static void FUNC_4(struct vfio_group *VAR_2)
{
 struct vfio_group_put_work *VAR_3;

 VAR_3 = FUNC_2(sizeof(*VAR_3), VAR_0);
 if (FUNC_1(!VAR_3))
  return;

 FUNC_0(&VAR_3->work, VAR_1);
 VAR_3->group = VAR_2;
 FUNC_3(&VAR_3->work);
}
