
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usbtv {int v4l2_dev; int vb2q_lock; int v4l2_lock; int vdev; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct usbtv*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;

void FUNC_6(struct usbtv *VAR_0)
{
 FUNC_0(&VAR_0->vb2q_lock);
 FUNC_0(&VAR_0->v4l2_lock);

 FUNC_2(VAR_0);
 FUNC_5(&VAR_0->vdev);
 FUNC_3(&VAR_0->v4l2_dev);

 FUNC_1(&VAR_0->v4l2_lock);
 FUNC_1(&VAR_0->vb2q_lock);

 FUNC_4(&VAR_0->v4l2_dev);
}
