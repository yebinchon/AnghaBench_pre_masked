
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct net_device {unsigned int base_addr; } ;
struct e8390_pkt_hdr {int count; } ;
struct TYPE_2__ {int dmaing; int irqlock; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 int VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 TYPE_1__ VAR_12 ;
 int FUNC_0 (scalar_t__,struct e8390_pkt_hdr*,int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct net_device*,char*,int,int ) ;
 int FUNC_3 (int,scalar_t__) ;

__attribute__((used)) static void FUNC_4(struct net_device *VAR_13,
        struct e8390_pkt_hdr *VAR_14,
        int VAR_15)
{
    unsigned int VAR_16 = VAR_13->base_addr;

    if (VAR_12.dmaing) {
 FUNC_2(VAR_13, "DMAing conflict in dma_block_input."
     "[DMAstat:%1x][irqlock:%1x]\n",
     VAR_12.dmaing, VAR_12.irqlock);
 return;
    }

    VAR_12.dmaing |= 0x01;
    FUNC_3(VAR_0+VAR_1+VAR_3, VAR_16 + VAR_10);
    FUNC_3(sizeof(struct e8390_pkt_hdr), VAR_16 + VAR_6);
    FUNC_3(0, VAR_16 + VAR_5);
    FUNC_3(0, VAR_16 + VAR_8);
    FUNC_3(VAR_15, VAR_16 + VAR_7);
    FUNC_3(VAR_2+VAR_3, VAR_16 + VAR_10);

    FUNC_0(VAR_16 + VAR_11, VAR_14,
     sizeof(struct e8390_pkt_hdr)>>1);

    VAR_14->count = FUNC_1(VAR_14->count);

    FUNC_3(VAR_9, VAR_16 + VAR_4);
    VAR_12.dmaing &= ~0x01;
}
