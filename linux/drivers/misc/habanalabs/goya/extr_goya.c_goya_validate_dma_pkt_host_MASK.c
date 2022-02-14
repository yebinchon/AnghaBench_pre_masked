
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u64 ;
typedef int u32 ;
struct packet_lin_dma {int tsize; int src_addr; int dst_addr; int ctl; } ;
struct TYPE_2__ {int dram_end_address; int dram_user_base_address; int sram_end_address; int sram_user_base_address; } ;
struct hl_device {int dev; TYPE_1__ asic_prop; } ;
struct hl_cs_parser {int patched_cb_size; scalar_t__ hw_queue_id; } ;
typedef enum goya_dma_direction { ____Placeholder_goya_dma_direction } goya_dma_direction ;
typedef enum dma_data_direction { ____Placeholder_dma_data_direction } dma_data_direction ;



 int VAR_0 ;



 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (int ,char*,...) ;
 int FUNC_2 (struct hl_device*,struct hl_cs_parser*,struct packet_lin_dma*,int ,int) ;
 int FUNC_3 (int ,int,int ,int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;

__attribute__((used)) static int FUNC_6(struct hl_device *VAR_8,
    struct hl_cs_parser *VAR_9,
    struct packet_lin_dma *VAR_10)
{
 u64 VAR_11, VAR_12;
 enum dma_data_direction VAR_13;
 enum goya_dma_direction VAR_14;
 bool VAR_15 = 1;
 bool VAR_16 = 0;
 bool VAR_17;
 u32 VAR_18;
 int VAR_19 = 0;

 VAR_18 = FUNC_4(VAR_10->ctl);

 VAR_14 = (VAR_18 & VAR_3) >>
   VAR_4;

 VAR_17 = (VAR_18 & VAR_5) >>
   VAR_6;

 switch (VAR_14) {
 case 130:
  FUNC_0(VAR_8->dev, "DMA direction is HOST --> DRAM\n");
  VAR_13 = VAR_1;
  VAR_15 = 0;
  VAR_12 = FUNC_5(VAR_10->src_addr);
  VAR_11 = FUNC_5(VAR_10->dst_addr);
  if (VAR_17)
   VAR_16 = 1;
  break;

 case 131:
  FUNC_0(VAR_8->dev, "DMA direction is DRAM --> HOST\n");
  VAR_13 = VAR_0;
  VAR_15 = 0;
  VAR_12 = FUNC_5(VAR_10->dst_addr);
  VAR_11 = FUNC_5(VAR_10->src_addr);
  break;

 case 129:
  FUNC_0(VAR_8->dev, "DMA direction is HOST --> SRAM\n");
  VAR_13 = VAR_1;
  VAR_12 = FUNC_5(VAR_10->src_addr);
  VAR_11 = FUNC_5(VAR_10->dst_addr);
  if (VAR_17)
   VAR_16 = 1;
  break;

 case 128:
  FUNC_0(VAR_8->dev, "DMA direction is SRAM --> HOST\n");
  VAR_13 = VAR_0;
  VAR_12 = FUNC_5(VAR_10->dst_addr);
  VAR_11 = FUNC_5(VAR_10->src_addr);
  break;
 default:
  FUNC_1(VAR_8->dev, "DMA direction is undefined\n");
  return -VAR_2;
 }

 if (VAR_15) {
  if (!FUNC_3(VAR_11,
    FUNC_4(VAR_10->tsize),
    VAR_8->asic_prop.sram_user_base_address,
    VAR_8->asic_prop.sram_end_address)) {

   FUNC_1(VAR_8->dev,
    "SRAM address 0x%llx + 0x%x is invalid\n",
    VAR_11,
    VAR_10->tsize);
   return -VAR_2;
  }
 } else {
  if (!FUNC_3(VAR_11,
    FUNC_4(VAR_10->tsize),
    VAR_8->asic_prop.dram_user_base_address,
    VAR_8->asic_prop.dram_end_address)) {

   FUNC_1(VAR_8->dev,
    "DRAM address 0x%llx + 0x%x is invalid\n",
    VAR_11,
    VAR_10->tsize);
   return -VAR_2;
  }
 }

 if (VAR_16)
  VAR_9->patched_cb_size += sizeof(*VAR_10);
 else {
  if ((VAR_13 == VAR_1) &&
    (VAR_9->hw_queue_id > VAR_7)) {
   FUNC_1(VAR_8->dev,
    "Can't DMA from host on queue other then 1\n");
   return -VAR_2;
  }

  VAR_19 = FUNC_2(VAR_8, VAR_9, VAR_10,
      VAR_12, VAR_13);
 }

 return VAR_19;
}
