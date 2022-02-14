
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u_long ;
typedef int u_char ;
struct pcnet_dev {int flags; } ;
struct net_device {unsigned int base_addr; } ;
struct ei_device {int dummy; } ;
struct TYPE_2__ {int dmaing; int irqlock; } ;


 int VAR_0 ;
 int const VAR_1 ;
 int const VAR_2 ;
 int const VAR_3 ;
 int const VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 int const VAR_10 ;
 int FUNC_0 (struct net_device*,int) ;
 scalar_t__ VAR_11 ;
 scalar_t__ VAR_12 ;
 scalar_t__ VAR_13 ;
 struct pcnet_dev* FUNC_1 (struct net_device*) ;
 scalar_t__ VAR_14 ;
 TYPE_1__ VAR_15 ;
 int const FUNC_2 (scalar_t__) ;
 scalar_t__ VAR_16 ;
 int FUNC_3 (struct net_device*,char*,int,int ) ;
 int FUNC_4 (struct net_device*,char*,int const,int) ;
 struct ei_device* FUNC_5 (struct net_device*) ;
 int FUNC_6 (struct net_device*,char*) ;
 int FUNC_7 (struct ei_device*,int ,struct net_device*,char*,int) ;
 scalar_t__ FUNC_8 (struct ei_device*) ;
 int FUNC_9 (int const,scalar_t__) ;
 int FUNC_10 (scalar_t__,int const*,int) ;
 int FUNC_11 (struct net_device*) ;
 scalar_t__ FUNC_12 (scalar_t__,scalar_t__) ;
 int VAR_17 ;
 int FUNC_13 (long) ;

__attribute__((used)) static void FUNC_14(struct net_device *VAR_18, int VAR_19,
        const u_char *VAR_20, const int VAR_21)
{
    unsigned int VAR_22 = VAR_18->base_addr;
    struct pcnet_dev *VAR_23 = FUNC_1(VAR_18);




    u_long VAR_24;
    if (VAR_19 & 0x01)
 VAR_19++;
    if (VAR_15.dmaing) {
 FUNC_3(VAR_18, "DMAing conflict in dma_block_output."
     "[DMAstat:%1x][irqlock:%1x]\n",
     VAR_15.dmaing, VAR_15.irqlock);
 return;
    }
    VAR_15.dmaing |= 0x01;

    FUNC_9(VAR_2+VAR_4+VAR_1, VAR_22+VAR_11);





    FUNC_9(VAR_10, VAR_22 + VAR_5);


    FUNC_9(VAR_19 & 0xff, VAR_22 + VAR_7);
    FUNC_9(VAR_19 >> 8, VAR_22 + VAR_6);
    FUNC_9(0x00, VAR_22 + VAR_9);
    FUNC_9(VAR_21, VAR_22 + VAR_8);

    FUNC_9(VAR_3+VAR_4, VAR_22 + VAR_11);
    FUNC_10(VAR_22 + VAR_12, VAR_20, VAR_19>>1);

    VAR_24 = VAR_16;
    while ((FUNC_2(VAR_22 + VAR_5) & VAR_10) == 0)
 if (FUNC_12(VAR_16, VAR_24 + VAR_13)) {
  FUNC_6(VAR_18, "timeout waiting for Tx RDC.\n");
  FUNC_11(VAR_18);
  FUNC_0(VAR_18, 1);
  break;
 }

    FUNC_9(VAR_10, VAR_22 + VAR_5);
    if (VAR_23->flags & VAR_0)
 FUNC_13((long)VAR_14);
    VAR_15.dmaing &= ~0x01;
}
