
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int vq_callback_t ;
struct virtqueue {int dummy; } ;
struct virtio_device {int dummy; } ;
struct irq_affinity {int dummy; } ;


 int FUNC_0 (struct virtio_device*,unsigned int,struct virtqueue**,int **,char const* const*,int const*) ;
 int FUNC_1 (struct virtio_device*,unsigned int,struct virtqueue**,int **,char const* const*,int,int const*,struct irq_affinity*) ;

int FUNC_2(struct virtio_device *VAR_0, unsigned VAR_1,
  struct virtqueue *VAR_2[], vq_callback_t *VAR_3[],
  const char * const VAR_4[], const bool *VAR_5,
  struct irq_affinity *VAR_6)
{
 int VAR_7;


 VAR_7 = FUNC_1(VAR_0, VAR_1, VAR_2, VAR_3, VAR_4, 1, VAR_5, VAR_6);
 if (!VAR_7)
  return 0;

 VAR_7 = FUNC_1(VAR_0, VAR_1, VAR_2, VAR_3, VAR_4, 0, VAR_5, VAR_6);
 if (!VAR_7)
  return 0;

 return FUNC_0(VAR_0, VAR_1, VAR_2, VAR_3, VAR_4, VAR_5);
}
