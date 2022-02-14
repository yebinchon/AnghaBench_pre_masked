
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct virtqueue {struct mlxbf_tmfifo_vring* priv; } ;
struct mlxbf_tmfifo_vring {int index; size_t vdev_id; struct mlxbf_tmfifo* fifo; } ;
struct mlxbf_tmfifo_vdev {int dummy; } ;
struct mlxbf_tmfifo {int work; int pend_events; int spin_lock; struct mlxbf_tmfifo_vdev** vdev; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 size_t VAR_2 ;
 int FUNC_1 (struct mlxbf_tmfifo_vdev*,struct mlxbf_tmfifo_vring*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (int *,unsigned long) ;
 scalar_t__ FUNC_5 (int ,int *) ;

__attribute__((used)) static bool FUNC_6(struct virtqueue *VAR_3)
{
 struct mlxbf_tmfifo_vring *VAR_4 = VAR_3->priv;
 struct mlxbf_tmfifo_vdev *VAR_5;
 struct mlxbf_tmfifo *VAR_6;
 unsigned long VAR_7;

 VAR_6 = VAR_4->fifo;





 if (VAR_4->index & FUNC_0(0)) {






  if (VAR_4->vdev_id == VAR_2) {
   FUNC_3(&VAR_6->spin_lock, VAR_7);
   VAR_5 = VAR_6->vdev[VAR_2];
   FUNC_1(VAR_5, VAR_4);
   FUNC_4(&VAR_6->spin_lock, VAR_7);
  } else if (FUNC_5(VAR_1,
         &VAR_6->pend_events)) {
   return 1;
  }
 } else {
  if (FUNC_5(VAR_0, &VAR_6->pend_events))
   return 1;
 }

 FUNC_2(&VAR_6->work);

 return 1;
}
