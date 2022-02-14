
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int vq_callback_t ;
struct virtqueue {int dummy; } ;
struct virtio_device {int dummy; } ;
struct irq_affinity {int dummy; } ;


 scalar_t__ FUNC_0 (struct virtqueue*) ;
 int FUNC_1 (struct virtqueue*) ;
 int FUNC_2 (struct virtio_device*) ;
 struct virtqueue* FUNC_3 (struct virtio_device*,int ,int *,char const* const,int const) ;

__attribute__((used)) static int FUNC_4(struct virtio_device *VAR_0, unsigned int VAR_1,
     struct virtqueue *VAR_2[],
     vq_callback_t *VAR_3[],
     const char * const VAR_4[],
     const bool * VAR_5,
     struct irq_affinity *VAR_6)
{
 int VAR_7, VAR_8, VAR_9 = 0;

 for (VAR_7 = 0; VAR_7 < VAR_1; ++VAR_7) {
  if (!VAR_4[VAR_7]) {
   VAR_2[VAR_7] = ((void*)0);
   continue;
  }

  VAR_2[VAR_7] = FUNC_3(VAR_0, VAR_9++, VAR_3[VAR_7], VAR_4[VAR_7],
        VAR_5 ? VAR_5[VAR_7] : 0);
  if (FUNC_0(VAR_2[VAR_7])) {
   VAR_8 = FUNC_1(VAR_2[VAR_7]);
   goto error;
  }
 }

 return 0;

error:
 FUNC_2(VAR_0);
 return VAR_8;
}
