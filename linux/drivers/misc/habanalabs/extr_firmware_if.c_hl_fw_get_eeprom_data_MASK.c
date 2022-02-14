
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct hl_device {TYPE_1__* asic_funcs; int dev; } ;
struct armcp_packet {void* data_max_size; int addr; void* ctl; } ;
typedef int pkt ;
typedef int dma_addr_t ;
struct TYPE_2__ {int (* send_cpu_message ) (struct hl_device*,int *,int,int ,long*) ;int (* cpu_accessible_dma_pool_free ) (struct hl_device*,size_t,void*) ;void* (* cpu_accessible_dma_pool_alloc ) (struct hl_device*,size_t,int *) ;} ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 void* FUNC_0 (size_t) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,char*,...) ;
 int FUNC_3 (void*,void*,int ) ;
 int FUNC_4 (void*,int ,size_t) ;
 int FUNC_5 (size_t,size_t) ;
 void* FUNC_6 (struct hl_device*,size_t,int *) ;
 int FUNC_7 (struct hl_device*,int *,int,int ,long*) ;
 int FUNC_8 (struct hl_device*,size_t,void*) ;

int FUNC_9(struct hl_device *VAR_4, void *VAR_5, size_t VAR_6)
{
 struct armcp_packet VAR_7 = {};
 void *VAR_8;
 dma_addr_t VAR_9;
 long VAR_10;
 int VAR_11;

 VAR_8 =
   VAR_4->asic_funcs->cpu_accessible_dma_pool_alloc(VAR_4,
     VAR_6, &VAR_9);
 if (!VAR_8) {
  FUNC_2(VAR_4->dev,
   "Failed to allocate DMA memory for ArmCP EEPROM packet\n");
  return -VAR_2;
 }

 FUNC_4(VAR_8, 0, VAR_6);

 VAR_7.ctl = FUNC_0(VAR_0 <<
    VAR_1);
 VAR_7.addr = FUNC_1(VAR_9);
 VAR_7.data_max_size = FUNC_0(VAR_6);

 VAR_11 = VAR_4->asic_funcs->send_cpu_message(VAR_4, (u32 *) &VAR_7, sizeof(VAR_7),
   VAR_3, &VAR_10);

 if (VAR_11) {
  FUNC_2(VAR_4->dev,
   "Failed to send ArmCP EEPROM packet, error %d\n", VAR_11);
  goto out;
 }


 FUNC_3(VAR_5, VAR_8, FUNC_5((size_t)VAR_10, VAR_6));

out:
 VAR_4->asic_funcs->cpu_accessible_dma_pool_free(VAR_4, VAR_6,
   VAR_8);

 return VAR_11;
}
