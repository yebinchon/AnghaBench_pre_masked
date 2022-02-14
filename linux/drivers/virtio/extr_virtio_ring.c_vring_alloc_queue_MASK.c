
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int parent; } ;
struct virtio_device {TYPE_1__ dev; } ;
typedef scalar_t__ phys_addr_t ;
typedef int gfp_t ;
typedef scalar_t__ dma_addr_t ;


 int FUNC_0 (size_t) ;
 scalar_t__ FUNC_1 (int) ;
 void* FUNC_2 (int ,int ) ;
 void* FUNC_3 (int ,size_t,scalar_t__*,int ) ;
 int FUNC_4 (void*,int ) ;
 scalar_t__ FUNC_5 (void*) ;
 scalar_t__ FUNC_6 (struct virtio_device*) ;

__attribute__((used)) static void *FUNC_7(struct virtio_device *VAR_0, size_t VAR_1,
         dma_addr_t *VAR_2, gfp_t VAR_3)
{
 if (FUNC_6(VAR_0)) {
  return FUNC_3(VAR_0->dev.parent, VAR_1,
       VAR_2, VAR_3);
 } else {
  void *VAR_4 = FUNC_2(FUNC_0(VAR_1), VAR_3);

  if (VAR_4) {
   phys_addr_t VAR_5 = FUNC_5(VAR_4);
   *VAR_2 = (dma_addr_t)VAR_5;
   if (FUNC_1(*VAR_2 != VAR_5)) {
    FUNC_4(VAR_4, FUNC_0(VAR_1));
    return ((void*)0);
   }
  }
  return VAR_4;
 }
}
