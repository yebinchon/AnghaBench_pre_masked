
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mlxbf_tmfifo_vdev {int vdev; } ;
struct mlxbf_tmfifo {int lock; struct mlxbf_tmfifo_vdev** vdev; } ;


 int FUNC_0 (struct mlxbf_tmfifo*,struct mlxbf_tmfifo_vdev*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static int FUNC_4(struct mlxbf_tmfifo *VAR_0, int VAR_1)
{
 struct mlxbf_tmfifo_vdev *VAR_2;

 FUNC_1(&VAR_0->lock);


 VAR_2 = VAR_0->vdev[VAR_1];
 if (VAR_2) {
  FUNC_3(&VAR_2->vdev);
  FUNC_0(VAR_0, VAR_2);
  VAR_0->vdev[VAR_1] = ((void*)0);
 }

 FUNC_2(&VAR_0->lock);

 return 0;
}
