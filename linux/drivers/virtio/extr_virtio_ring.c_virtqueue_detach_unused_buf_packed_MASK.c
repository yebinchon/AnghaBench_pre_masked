
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_8__ {unsigned int num; } ;
struct TYPE_7__ {TYPE_4__ vring; TYPE_1__* desc_state; } ;
struct TYPE_6__ {unsigned int num_free; } ;
struct vring_virtqueue {TYPE_3__ packed; TYPE_2__ vq; } ;
struct virtqueue {int dummy; } ;
struct TYPE_5__ {void* data; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (struct vring_virtqueue*) ;
 int FUNC_2 (struct vring_virtqueue*) ;
 int FUNC_3 (struct vring_virtqueue*,unsigned int,int *) ;
 struct vring_virtqueue* FUNC_4 (struct virtqueue*) ;

__attribute__((used)) static void *FUNC_5(struct virtqueue *VAR_0)
{
 struct vring_virtqueue *VAR_1 = FUNC_4(VAR_0);
 unsigned int VAR_2;
 void *VAR_3;

 FUNC_2(VAR_1);

 for (VAR_2 = 0; VAR_2 < VAR_1->packed.vring.num; VAR_2++) {
  if (!VAR_1->packed.desc_state[VAR_2].data)
   continue;

  VAR_3 = VAR_1->packed.desc_state[VAR_2].data;
  FUNC_3(VAR_1, VAR_2, ((void*)0));
  FUNC_1(VAR_1);
  return VAR_3;
 }

 FUNC_0(VAR_1->vq.num_free != VAR_1->packed.vring.num);

 FUNC_1(VAR_1);
 return ((void*)0);
}
