
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u64 ;
typedef int u32 ;
struct hl_device {int dev; TYPE_1__* asic_funcs; } ;
struct hl_cb {int size; scalar_t__ kernel_address; int bus_address; } ;
struct TYPE_2__ {void* (* asic_dma_alloc_coherent ) (struct hl_device*,int ,int *,int) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ,char*,int ) ;
 int FUNC_1 (struct hl_cb*) ;
 struct hl_cb* FUNC_2 (int,int) ;
 void* FUNC_3 (struct hl_device*,int ,int *,int) ;
 void* FUNC_4 (struct hl_device*,int ,int *,int) ;

__attribute__((used)) static struct hl_cb *FUNC_5(struct hl_device *VAR_5, u32 VAR_6,
     int VAR_7)
{
 struct hl_cb *VAR_8;
 void *VAR_9;
 if (VAR_7 == VAR_3)
  VAR_8 = FUNC_2(sizeof(*VAR_8), VAR_0);
 else
  VAR_8 = FUNC_2(sizeof(*VAR_8), VAR_1);

 if (!VAR_8)
  return ((void*)0);

 if (VAR_7 == VAR_3)
  VAR_9 = VAR_5->asic_funcs->asic_dma_alloc_coherent(VAR_5, VAR_6,
      &VAR_8->bus_address, VAR_0);
 else
  VAR_9 = VAR_5->asic_funcs->asic_dma_alloc_coherent(VAR_5, VAR_6,
      &VAR_8->bus_address,
      VAR_2 | VAR_4);
 if (!VAR_9) {
  FUNC_0(VAR_5->dev,
   "failed to allocate %d of dma memory for CB\n",
   VAR_6);
  FUNC_1(VAR_8);
  return ((void*)0);
 }

 VAR_8->kernel_address = (u64) (uintptr_t) VAR_9;
 VAR_8->size = VAR_6;

 return VAR_8;
}
