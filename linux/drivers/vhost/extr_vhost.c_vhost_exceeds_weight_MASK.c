
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vhost_virtqueue {int poll; struct vhost_dev* dev; } ;
struct vhost_dev {int byte_weight; int weight; } ;


 int FUNC_0 (int *) ;

bool FUNC_1(struct vhost_virtqueue *VAR_0,
     int VAR_1, int VAR_2)
{
 struct vhost_dev *VAR_3 = VAR_0->dev;

 if ((VAR_3->byte_weight && VAR_2 >= VAR_3->byte_weight) ||
     VAR_1 >= VAR_3->weight) {
  FUNC_0(&VAR_0->poll);
  return 1;
 }

 return 0;
}
