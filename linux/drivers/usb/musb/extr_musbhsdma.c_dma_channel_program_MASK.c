
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
typedef int u16 ;
struct musb_dma_controller {struct musb* private_data; } ;
struct musb_dma_channel {int start_addr; int max_packet_sz; int len; scalar_t__ transmit; int epnum; struct musb_dma_controller* controller; } ;
struct musb {scalar_t__ hwvers; } ;
struct dma_channel {scalar_t__ status; scalar_t__ actual_len; struct musb_dma_channel* private_data; } ;
typedef int dma_addr_t ;


 int FUNC_0 (int) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_1 (struct dma_channel*,int ,int ,int,int ) ;
 int FUNC_2 (struct musb*,char*,int ,char*,int ,int*,int ,int ) ;

__attribute__((used)) static int FUNC_3(struct dma_channel *VAR_3,
    u16 VAR_4, u8 VAR_5,
    dma_addr_t VAR_6, u32 VAR_7)
{
 struct musb_dma_channel *VAR_8 = VAR_3->private_data;
 struct musb_dma_controller *VAR_9 = VAR_8->controller;
 struct musb *VAR_10 = VAR_9->private_data;

 FUNC_2(VAR_10, "ep%d-%s pkt_sz %d, dma_addr %pad length %d, mode %d",
  VAR_8->epnum,
  VAR_8->transmit ? "Tx" : "Rx",
  VAR_4, &VAR_6, VAR_7, VAR_5);

 FUNC_0(VAR_3->status == VAR_1 ||
  VAR_3->status == VAR_0);
 if ((VAR_10->hwvers >= VAR_2) && (VAR_6 % 4))
  return 0;

 VAR_3->actual_len = 0;
 VAR_8->start_addr = VAR_6;
 VAR_8->len = VAR_7;
 VAR_8->max_packet_sz = VAR_4;
 VAR_3->status = VAR_0;

 FUNC_1(VAR_3, VAR_4, VAR_5, VAR_6, VAR_7);

 return 1;
}
