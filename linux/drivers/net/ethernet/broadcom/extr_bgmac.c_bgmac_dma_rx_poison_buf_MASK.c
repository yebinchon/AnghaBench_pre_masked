
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct device {int dummy; } ;
struct bgmac_slot_info {int dma_addr; struct bgmac_rx_header* buf; } ;
struct bgmac_rx_header {void* flags; void* len; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 void* FUNC_0 (int) ;
 int FUNC_1 (struct device*,int ,int ,int ) ;
 int FUNC_2 (struct device*,int ,int ,int ) ;

__attribute__((used)) static void FUNC_3(struct device *VAR_3,
        struct bgmac_slot_info *VAR_4)
{
 struct bgmac_rx_header *VAR_5 = VAR_4->buf + VAR_0;

 FUNC_1(VAR_3, VAR_4->dma_addr, VAR_1,
    VAR_2);
 VAR_5->len = FUNC_0(0xdead);
 VAR_5->flags = FUNC_0(0xbeef);
 FUNC_2(VAR_3, VAR_4->dma_addr, VAR_1,
       VAR_2);
}
