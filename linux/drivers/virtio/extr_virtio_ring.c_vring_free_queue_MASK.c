
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int parent; } ;
struct virtio_device {TYPE_1__ dev; } ;
typedef int dma_addr_t ;


 int FUNC_0 (size_t) ;
 int FUNC_1 (int ,size_t,void*,int ) ;
 int FUNC_2 (void*,int ) ;
 scalar_t__ FUNC_3 (struct virtio_device*) ;

__attribute__((used)) static void FUNC_4(struct virtio_device *VAR_0, size_t VAR_1,
        void *VAR_2, dma_addr_t VAR_3)
{
 if (FUNC_3(VAR_0))
  FUNC_1(VAR_0->dev.parent, VAR_1, VAR_2, VAR_3);
 else
  FUNC_2(VAR_2, FUNC_0(VAR_1));
}
