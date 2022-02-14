
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int vq_callback_t ;
struct virtqueue {int dummy; } ;
struct virtio_input {struct virtqueue* sts; struct virtqueue* evt; int vdev; } ;


 int * VAR_0 ;
 int * VAR_1 ;
 int FUNC_0 (int ,int,struct virtqueue**,int **,char const* const*,int *) ;

__attribute__((used)) static int FUNC_1(struct virtio_input *VAR_2)
{
 struct virtqueue *VAR_3[2];
 vq_callback_t *VAR_4[] = { VAR_0,
     VAR_1 };
 static const char * const VAR_5[] = { "events", "status" };
 int VAR_6;

 VAR_6 = FUNC_0(VAR_2->vdev, 2, VAR_3, VAR_4, VAR_5, ((void*)0));
 if (VAR_6)
  return VAR_6;
 VAR_2->evt = VAR_3[0];
 VAR_2->sts = VAR_3[1];

 return 0;
}
