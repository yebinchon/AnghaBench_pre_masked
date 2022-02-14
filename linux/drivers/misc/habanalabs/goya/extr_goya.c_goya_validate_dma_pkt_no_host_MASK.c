
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u64 ;
typedef int u32 ;
struct packet_lin_dma {int tsize; int dst_addr; int src_addr; int ctl; } ;
struct TYPE_2__ {int dram_end_address; int dram_user_base_address; int sram_end_address; int sram_user_base_address; } ;
struct hl_device {int dev; TYPE_1__ asic_prop; } ;
struct hl_cs_parser {int patched_cb_size; } ;
typedef enum goya_dma_direction { ____Placeholder_goya_dma_direction } goya_dma_direction ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (int ,char*,int ,int ) ;
 int FUNC_2 (int ,int,int ,int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;

__attribute__((used)) static int FUNC_5(struct hl_device *VAR_4,
    struct hl_cs_parser *VAR_5,
    struct packet_lin_dma *VAR_6)
{
 u64 VAR_7, VAR_8;
 enum goya_dma_direction VAR_9;
 u32 VAR_10;

 VAR_10 = FUNC_3(VAR_6->ctl);
 VAR_9 = (VAR_10 & VAR_2) >>
   VAR_3;

 if (VAR_9 == VAR_0) {
  FUNC_0(VAR_4->dev, "DMA direction is DRAM --> SRAM\n");
  VAR_8 = FUNC_4(VAR_6->src_addr);
  VAR_7 = FUNC_4(VAR_6->dst_addr);
 } else {
  FUNC_0(VAR_4->dev, "DMA direction is SRAM --> DRAM\n");
  VAR_7 = FUNC_4(VAR_6->src_addr);
  VAR_8 = FUNC_4(VAR_6->dst_addr);
 }

 if (!FUNC_2(VAR_7,
    FUNC_3(VAR_6->tsize),
    VAR_4->asic_prop.sram_user_base_address,
    VAR_4->asic_prop.sram_end_address)) {
  FUNC_1(VAR_4->dev, "SRAM address 0x%llx + 0x%x is invalid\n",
   VAR_7, VAR_6->tsize);
  return -VAR_1;
 }

 if (!FUNC_2(VAR_8,
    FUNC_3(VAR_6->tsize),
    VAR_4->asic_prop.dram_user_base_address,
    VAR_4->asic_prop.dram_end_address)) {
  FUNC_1(VAR_4->dev, "DRAM address 0x%llx + 0x%x is invalid\n",
   VAR_8, VAR_6->tsize);
  return -VAR_1;
 }

 VAR_5->patched_cb_size += sizeof(*VAR_6);

 return 0;
}
