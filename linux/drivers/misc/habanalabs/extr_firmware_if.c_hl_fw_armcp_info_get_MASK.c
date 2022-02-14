
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_4__ {int sensors; } ;
struct asic_fixed_properties {TYPE_2__ armcp_info; } ;
struct hl_device {TYPE_1__* asic_funcs; int dev; struct asic_fixed_properties asic_prop; } ;
struct armcp_packet {void* data_max_size; int addr; void* ctl; } ;
struct armcp_info {int dummy; } ;
typedef int pkt ;
typedef int dma_addr_t ;
struct TYPE_3__ {int (* send_cpu_message ) (struct hl_device*,int *,int,int ,long*) ;int (* cpu_accessible_dma_pool_free ) (struct hl_device*,int,void*) ;void* (* cpu_accessible_dma_pool_alloc ) (struct hl_device*,int,int *) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 void* FUNC_0 (int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,char*,...) ;
 int FUNC_3 (struct hl_device*,int ) ;
 int FUNC_4 (TYPE_2__*,void*,int) ;
 int FUNC_5 (void*,int ,int) ;
 void* FUNC_6 (struct hl_device*,int,int *) ;
 int FUNC_7 (struct hl_device*,int *,int,int ,long*) ;
 int FUNC_8 (struct hl_device*,int,void*) ;

int FUNC_9(struct hl_device *VAR_5)
{
 struct asic_fixed_properties *VAR_6 = &VAR_5->asic_prop;
 struct armcp_packet VAR_7 = {};
 void *VAR_8;
 dma_addr_t VAR_9;
 long VAR_10;
 int VAR_11;

 VAR_8 =
   VAR_5->asic_funcs->cpu_accessible_dma_pool_alloc(VAR_5,
     sizeof(struct armcp_info),
     &VAR_9);
 if (!VAR_8) {
  FUNC_2(VAR_5->dev,
   "Failed to allocate DMA memory for ArmCP info packet\n");
  return -VAR_3;
 }

 FUNC_5(VAR_8, 0, sizeof(struct armcp_info));

 VAR_7.ctl = FUNC_0(VAR_0 <<
    VAR_1);
 VAR_7.addr = FUNC_1(VAR_9);
 VAR_7.data_max_size = FUNC_0(sizeof(struct armcp_info));

 VAR_11 = VAR_5->asic_funcs->send_cpu_message(VAR_5, (u32 *) &VAR_7, sizeof(VAR_7),
     VAR_4, &VAR_10);
 if (VAR_11) {
  FUNC_2(VAR_5->dev,
   "Failed to send ArmCP info pkt, error %d\n", VAR_11);
  goto out;
 }

 FUNC_4(&VAR_6->armcp_info, VAR_8,
   sizeof(VAR_6->armcp_info));

 VAR_11 = FUNC_3(VAR_5, VAR_6->armcp_info.sensors);
 if (VAR_11) {
  FUNC_2(VAR_5->dev,
   "Failed to build hwmon channel info, error %d\n", VAR_11);
  VAR_11 = -VAR_2;
  goto out;
 }

out:
 VAR_5->asic_funcs->cpu_accessible_dma_pool_free(VAR_5,
   sizeof(struct armcp_info), VAR_8);

 return VAR_11;
}
