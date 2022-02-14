
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
typedef int u16 ;
struct hl_device {int device_cpu_disabled; TYPE_1__* asic_funcs; int send_cpu_message_lock; int dev; scalar_t__ disabled; } ;
struct armcp_packet {int result; int ctl; int fence; } ;
typedef int dma_addr_t ;
struct TYPE_2__ {int (* cpu_accessible_dma_pool_free ) (struct hl_device*,int ,struct armcp_packet*) ;struct armcp_packet* (* cpu_accessible_dma_pool_alloc ) (struct hl_device*,int ,int *) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (int ,char*,...) ;
 int FUNC_1 (struct hl_device*,int) ;
 int FUNC_2 (struct hl_device*,int,int ,int ) ;
 int FUNC_3 (struct hl_device*,int *,int,int,int,int,int) ;
 int FUNC_4 (int ) ;
 scalar_t__ FUNC_5 (int ) ;
 int FUNC_6 (struct armcp_packet*,int*,int ) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 struct armcp_packet* FUNC_9 (struct hl_device*,int ,int *) ;
 int FUNC_10 (struct hl_device*,int ,struct armcp_packet*) ;

int FUNC_11(struct hl_device *VAR_8, u32 VAR_9, u32 *VAR_10,
    u16 VAR_11, u32 VAR_12, long *VAR_13)
{
 struct armcp_packet *VAR_14;
 dma_addr_t VAR_15;
 u32 VAR_16;
 int VAR_17 = 0;

 VAR_14 = VAR_8->asic_funcs->cpu_accessible_dma_pool_alloc(VAR_8, VAR_11,
        &VAR_15);
 if (!VAR_14) {
  FUNC_0(VAR_8->dev,
   "Failed to allocate DMA memory for packet to CPU\n");
  return -VAR_6;
 }

 FUNC_6(VAR_14, VAR_10, VAR_11);

 FUNC_7(&VAR_8->send_cpu_message_lock);

 if (VAR_8->disabled)
  goto out;

 if (VAR_8->device_cpu_disabled) {
  VAR_17 = -VAR_5;
  goto out;
 }

 VAR_17 = FUNC_2(VAR_8, VAR_9, VAR_11, VAR_15);
 if (VAR_17) {
  FUNC_0(VAR_8->dev, "Failed to send CB on CPU PQ (%d)\n", VAR_17);
  goto out;
 }

 VAR_17 = FUNC_3(VAR_8, &VAR_14->fence, VAR_16,
    (VAR_16 == VAR_0), 1000,
    VAR_12, 1);

 FUNC_1(VAR_8, VAR_9);

 if (VAR_17 == -VAR_7) {
  FUNC_0(VAR_8->dev, "Device CPU packet timeout (0x%x)\n", VAR_16);
  VAR_8->device_cpu_disabled = 1;
  goto out;
 }

 VAR_16 = FUNC_4(VAR_14->ctl);

 VAR_17 = (VAR_16 & VAR_3) >> VAR_4;
 if (VAR_17) {
  FUNC_0(VAR_8->dev, "F/W ERROR %d for CPU packet %d\n",
   VAR_17,
   (VAR_16 & VAR_1)
      >> VAR_2);
  VAR_17 = -VAR_5;
 } else if (VAR_13) {
  *VAR_13 = (long) FUNC_5(VAR_14->result);
 }

out:
 FUNC_8(&VAR_8->send_cpu_message_lock);

 VAR_8->asic_funcs->cpu_accessible_dma_pool_free(VAR_8, VAR_11, VAR_14);

 return VAR_17;
}
