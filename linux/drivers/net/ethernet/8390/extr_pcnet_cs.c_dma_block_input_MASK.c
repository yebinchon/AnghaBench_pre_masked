
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sk_buff {char* data; } ;
struct net_device {unsigned int base_addr; } ;
struct ei_device {int dummy; } ;
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
 char FUNC_0 (scalar_t__) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (scalar_t__,char*,int) ;
 int FUNC_3 (struct net_device*,char*,int) ;
 int FUNC_4 (struct net_device*,char*,int,int ) ;
 int FUNC_5 (struct net_device*,char*,int,int) ;
 struct ei_device* FUNC_6 (struct net_device*) ;
 scalar_t__ FUNC_7 (struct ei_device*) ;
 int FUNC_8 (int,scalar_t__) ;

__attribute__((used)) static void FUNC_9(struct net_device *VAR_13, int VAR_14,
       struct sk_buff *VAR_15, int VAR_16)
{
    unsigned int VAR_17 = VAR_13->base_addr;
    int VAR_18 = VAR_14;
    char *VAR_19 = VAR_15->data;
    struct ei_device *VAR_20 = FUNC_6(VAR_13);

    if ((FUNC_7(VAR_20)) && (VAR_14 != 4))
 FUNC_3(VAR_13, "[bi=%d]\n", VAR_14+4);
    if (VAR_12.dmaing) {
 FUNC_4(VAR_13, "DMAing conflict in dma_block_input."
     "[DMAstat:%1x][irqlock:%1x]\n",
     VAR_12.dmaing, VAR_12.irqlock);
 return;
    }
    VAR_12.dmaing |= 0x01;
    FUNC_8(VAR_0+VAR_1+VAR_3, VAR_17 + VAR_10);
    FUNC_8(VAR_14 & 0xff, VAR_17 + VAR_6);
    FUNC_8(VAR_14 >> 8, VAR_17 + VAR_5);
    FUNC_8(VAR_16 & 0xff, VAR_17 + VAR_8);
    FUNC_8(VAR_16 >> 8, VAR_17 + VAR_7);
    FUNC_8(VAR_2+VAR_3, VAR_17 + VAR_10);

    FUNC_2(VAR_17 + VAR_11,VAR_19,VAR_14>>1);
    if (VAR_14 & 0x01)
 VAR_19[VAR_14-1] = FUNC_0(VAR_17 + VAR_11), VAR_18++;
    FUNC_8(VAR_9, VAR_17 + VAR_4);
    VAR_12.dmaing &= ~0x01;
}
