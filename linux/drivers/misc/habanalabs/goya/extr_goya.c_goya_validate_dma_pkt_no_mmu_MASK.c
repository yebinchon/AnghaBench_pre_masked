
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct packet_lin_dma {scalar_t__ tsize; scalar_t__ ctl; int dst_addr; int src_addr; } ;
struct hl_device {int dev; } ;
struct hl_cs_parser {int dummy; } ;
typedef enum goya_dma_direction { ____Placeholder_goya_dma_direction } goya_dma_direction ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ,char*,...) ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (struct hl_device*,struct hl_cs_parser*,struct packet_lin_dma*) ;
 int FUNC_3 (struct hl_device*,struct hl_cs_parser*,struct packet_lin_dma*) ;
 int FUNC_4 (scalar_t__) ;
 int FUNC_5 (int ) ;

__attribute__((used)) static int FUNC_6(struct hl_device *VAR_5,
    struct hl_cs_parser *VAR_6,
    struct packet_lin_dma *VAR_7)
{
 enum goya_dma_direction VAR_8;
 u32 VAR_9;
 int VAR_10;

 FUNC_0(VAR_5->dev, "DMA packet details:\n");
 FUNC_0(VAR_5->dev, "source == 0x%llx\n",
  FUNC_5(VAR_7->src_addr));
 FUNC_0(VAR_5->dev, "destination == 0x%llx\n",
  FUNC_5(VAR_7->dst_addr));
 FUNC_0(VAR_5->dev, "size == %u\n", FUNC_4(VAR_7->tsize));

 VAR_9 = FUNC_4(VAR_7->ctl);
 VAR_8 = (VAR_9 & VAR_3) >>
   VAR_4;





 if (VAR_7->tsize == 0) {
  FUNC_1(VAR_5->dev,
   "Got DMA with size 0, might reset the device\n");
  return -VAR_2;
 }

 if ((VAR_8 == VAR_0) || (VAR_8 == VAR_1))
  VAR_10 = FUNC_3(VAR_5, VAR_6, VAR_7);
 else
  VAR_10 = FUNC_2(VAR_5, VAR_6, VAR_7);

 return VAR_10;
}
