
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct device {int dummy; } ;
struct bgmac_slot_info {int dma_addr; void* buf; } ;
struct bgmac_rx_header {void* flags; void* len; } ;
struct bgmac {int net_dev; struct device* dma_dev; } ;
typedef int dma_addr_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 void* FUNC_0 (int) ;
 int FUNC_1 (struct device*,void*,int ,int ) ;
 scalar_t__ FUNC_2 (struct device*,int ) ;
 void* FUNC_3 (int ) ;
 int FUNC_4 (int ,char*) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (void*) ;

__attribute__((used)) static int FUNC_7(struct bgmac *VAR_5,
         struct bgmac_slot_info *VAR_6)
{
 struct device *VAR_7 = VAR_5->dma_dev;
 dma_addr_t VAR_8;
 struct bgmac_rx_header *VAR_9;
 void *VAR_10;


 VAR_10 = FUNC_3(VAR_0);
 if (!VAR_10)
  return -VAR_4;


 VAR_9 = VAR_10 + VAR_1;
 VAR_9->len = FUNC_0(0xdead);
 VAR_9->flags = FUNC_0(0xbeef);


 VAR_8 = FUNC_1(VAR_7, VAR_10 + VAR_1,
      VAR_2, VAR_3);
 if (FUNC_2(VAR_7, VAR_8)) {
  FUNC_4(VAR_5->net_dev, "DMA mapping error\n");
  FUNC_5(FUNC_6(VAR_10));
  return -VAR_4;
 }


 VAR_6->buf = VAR_10;
 VAR_6->dma_addr = VAR_8;

 return 0;
}
