
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vhost_virtqueue {int mutex; int * private_data; } ;
struct vhost_test {int dummy; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static void *FUNC_2(struct vhost_test *VAR_0,
    struct vhost_virtqueue *VAR_1)
{
 void *VAR_2;

 FUNC_0(&VAR_1->mutex);
 VAR_2 = VAR_1->private_data;
 VAR_1->private_data = ((void*)0);
 FUNC_1(&VAR_1->mutex);
 return VAR_2;
}
