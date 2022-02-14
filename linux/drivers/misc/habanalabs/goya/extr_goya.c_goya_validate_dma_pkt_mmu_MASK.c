
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct packet_lin_dma {scalar_t__ tsize; int src_addr; int dst_addr; } ;
struct TYPE_2__ {int va_space_host_end_address; int va_space_host_start_address; } ;
struct hl_device {int dev; TYPE_1__ asic_prop; } ;
struct hl_cs_parser {scalar_t__ hw_queue_id; int patched_cb_size; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int ,char*,...) ;
 int FUNC_1 (int ,char*) ;
 scalar_t__ FUNC_2 (int ,int ,int ,int ) ;
 int FUNC_3 (scalar_t__) ;
 int FUNC_4 (int ) ;

__attribute__((used)) static int FUNC_5(struct hl_device *VAR_3,
    struct hl_cs_parser *VAR_4,
    struct packet_lin_dma *VAR_5)
{
 FUNC_0(VAR_3->dev, "DMA packet details:\n");
 FUNC_0(VAR_3->dev, "source == 0x%llx\n",
  FUNC_4(VAR_5->src_addr));
 FUNC_0(VAR_3->dev, "destination == 0x%llx\n",
  FUNC_4(VAR_5->dst_addr));
 FUNC_0(VAR_3->dev, "size == %u\n", FUNC_3(VAR_5->tsize));





 if (VAR_4->hw_queue_id != VAR_2 &&
  FUNC_2(FUNC_4(VAR_5->src_addr),
    FUNC_3(VAR_5->tsize),
    VAR_3->asic_prop.va_space_host_start_address,
    VAR_3->asic_prop.va_space_host_end_address)) {
  FUNC_1(VAR_3->dev,
   "Can't DMA from host on queue other then 1\n");
  return -VAR_0;
 }

 if (VAR_5->tsize == 0) {
  FUNC_1(VAR_3->dev,
   "Got DMA with size 0, might reset the device\n");
  return -VAR_1;
 }

 VAR_4->patched_cb_size += sizeof(*VAR_5);

 return 0;
}
