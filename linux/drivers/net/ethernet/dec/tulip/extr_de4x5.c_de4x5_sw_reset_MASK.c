
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u_long ;
struct sk_buff {int dummy; } ;
struct net_device {int name; int base_addr; } ;
struct de4x5_private {size_t active; int chipset; scalar_t__ dma_rings; size_t tx_new; size_t tx_old; int rxRingSize; int txRingSize; TYPE_3__* tx_ring; int setup_frame; TYPE_2__* rx_ring; scalar_t__ rx_old; scalar_t__ rx_new; int setup_f; scalar_t__ infoblock_csr6; TYPE_1__* phy; int useSROM; } ;
struct de4x5_desc {int dummy; } ;
typedef scalar_t__ s32 ;
struct TYPE_6__ {void* status; } ;
struct TYPE_5__ {void* status; } ;
struct TYPE_4__ {scalar_t__ id; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 scalar_t__ VAR_12 ;
 scalar_t__ VAR_13 ;
 scalar_t__ VAR_14 ;
 scalar_t__ VAR_15 ;
 scalar_t__ VAR_16 ;
 scalar_t__ VAR_17 ;
 scalar_t__ VAR_18 ;
 scalar_t__ VAR_19 ;
 scalar_t__ VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 int FUNC_0 (struct net_device*) ;
 int VAR_25 ;
 int FUNC_1 () ;
 void* FUNC_2 (int ) ;
 int FUNC_3 (struct net_device*) ;
 scalar_t__ FUNC_4 (int ) ;
 scalar_t__ FUNC_5 (void*) ;
 int FUNC_6 (struct net_device*,int ,int,struct sk_buff*) ;
 int FUNC_7 (int) ;
 struct de4x5_private* FUNC_8 (struct net_device*) ;
 int FUNC_9 (scalar_t__,int ) ;
 int FUNC_10 (char*,int ,scalar_t__) ;

__attribute__((used)) static int
FUNC_11(struct net_device *VAR_26)
{
    struct de4x5_private *VAR_27 = FUNC_8(VAR_26);
    u_long VAR_28 = VAR_26->base_addr;
    int VAR_29, VAR_30, VAR_31 = 0;
    s32 VAR_32, VAR_33;


    if (!VAR_27->useSROM) {
 if (VAR_27->phy[VAR_27->active].id != 0) {
     VAR_27->infoblock_csr6 = VAR_16 | VAR_14 | VAR_12;
 } else {
     VAR_27->infoblock_csr6 = VAR_16 | VAR_18;
 }
 FUNC_3(VAR_26);
    }






    VAR_32 = (VAR_27->chipset==VAR_1 ? VAR_20 : VAR_19) | VAR_9 | VAR_4;
    VAR_32 |= ((VAR_27->chipset & ~0x00ff)==VAR_2 ? VAR_0 : 0);
    FUNC_9(VAR_32, VAR_3);

    VAR_33 = FUNC_4(VAR_5) & ~VAR_13;
    if (VAR_27->chipset == VAR_1) {
 VAR_33 |= (VAR_16 | VAR_15);
    }
    VAR_27->setup_f = VAR_21;
    FUNC_9(VAR_27->dma_rings, VAR_6);
    FUNC_9(VAR_27->dma_rings + VAR_11 * sizeof(struct de4x5_desc),
  VAR_8);

    VAR_27->rx_new = VAR_27->rx_old = 0;
    VAR_27->tx_new = VAR_27->tx_old = 0;

    for (VAR_29 = 0; VAR_29 < VAR_27->rxRingSize; VAR_29++) {
 VAR_27->rx_ring[VAR_29].status = FUNC_2(VAR_23);
    }

    for (VAR_29 = 0; VAR_29 < VAR_27->txRingSize; VAR_29++) {
 VAR_27->tx_ring[VAR_29].status = FUNC_2(0);
    }

    FUNC_1();


    FUNC_0(VAR_26);

    FUNC_6(VAR_26, VAR_27->setup_frame, VAR_22|VAR_25|VAR_24, (struct sk_buff *)1);
    FUNC_9(VAR_33|VAR_17, VAR_5);



    for (VAR_30=0, VAR_29=0;(VAR_29<500) && (VAR_30==0);VAR_29++) {
 FUNC_7(1);
 if ((s32)FUNC_5(VAR_27->tx_ring[VAR_27->tx_new].status) >= 0) VAR_30=1;
    }
    FUNC_9(VAR_33, VAR_5);

    if (VAR_30 == 0) {
 FUNC_10("%s: Setup frame timed out, status %08x\n", VAR_26->name,
        FUNC_4(VAR_7));
 VAR_31 = -VAR_10;
    }

    VAR_27->tx_new = (VAR_27->tx_new + 1) % VAR_27->txRingSize;
    VAR_27->tx_old = VAR_27->tx_new;

    return VAR_31;
}
