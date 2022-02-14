
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_8__ ;
typedef struct TYPE_15__ TYPE_7__ ;
typedef struct TYPE_14__ TYPE_6__ ;
typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int u8 ;
struct typhoon_shared {int dummy; } ;
struct typhoon_interface {void* txLoAddr; void* zeroAddr; void* respSize; void* respAddr; void* cmdSize; void* cmdAddr; void* rxHiSize; void* rxHiAddr; void* rxLoSize; void* rxLoAddr; void* rxBuffSize; void* rxBuffAddr; void* txHiSize; void* txHiAddr; void* txLoSize; void* ringIndex; } ;
struct TYPE_15__ {int writeRegister; int * ringBase; } ;
struct TYPE_14__ {int writeRegister; int * ringBase; } ;
struct TYPE_13__ {int * ringBase; } ;
struct TYPE_12__ {int * ringBase; } ;
struct TYPE_11__ {int * ringBase; } ;
struct TYPE_10__ {int * ringBase; } ;
struct TYPE_9__ {int * ringBase; } ;
struct typhoon {int shared_dma; int offload; int command_lock; int card_state; int txlo_dma_addr; TYPE_7__ txHiRing; TYPE_6__ txLoRing; TYPE_8__* shared; TYPE_5__ respRing; TYPE_4__ cmdRing; TYPE_3__ rxBuffRing; TYPE_2__ rxHiRing; TYPE_1__ rxLoRing; int * indexes; } ;
struct tx_desc {int dummy; } ;
struct rx_free {int dummy; } ;
struct rx_desc {int dummy; } ;
typedef int dma_addr_t ;
struct TYPE_16__ {scalar_t__ resp; scalar_t__ cmd; scalar_t__ rxBuff; scalar_t__ rxHi; scalar_t__ rxLo; scalar_t__ txHi; scalar_t__ txLo; int indexes; struct typhoon_interface iface; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 void* FUNC_0 (int) ;
 int VAR_15 ;
 int FUNC_1 (void*) ;
 int FUNC_2 (TYPE_8__*,int ,int) ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int *) ;
 int VAR_20 ;
 int VAR_21 ;
 int FUNC_5 () ;
 int VAR_22 ;

__attribute__((used)) static void
FUNC_6(struct typhoon *VAR_23)
{
 struct typhoon_interface *VAR_24 = &VAR_23->shared->iface;
 dma_addr_t VAR_25;

 FUNC_2(VAR_23->shared, 0, sizeof(struct typhoon_shared));



 VAR_25 = VAR_23->shared_dma + FUNC_3(VAR_15);
 VAR_24->ringIndex = FUNC_0(VAR_25);

 VAR_25 = VAR_23->shared_dma + FUNC_3(VAR_21);
 VAR_24->txLoAddr = FUNC_0(VAR_25);
 VAR_24->txLoSize = FUNC_0(VAR_7 * sizeof(struct tx_desc));

 VAR_25 = VAR_23->shared_dma + FUNC_3(VAR_20);
 VAR_24->txHiAddr = FUNC_0(VAR_25);
 VAR_24->txHiSize = FUNC_0(VAR_6 * sizeof(struct tx_desc));

 VAR_25 = VAR_23->shared_dma + FUNC_3(VAR_17);
 VAR_24->rxBuffAddr = FUNC_0(VAR_25);
 VAR_24->rxBuffSize = FUNC_0(VAR_2 *
     sizeof(struct rx_free));

 VAR_25 = VAR_23->shared_dma + FUNC_3(VAR_19);
 VAR_24->rxLoAddr = FUNC_0(VAR_25);
 VAR_24->rxLoSize = FUNC_0(VAR_3 * sizeof(struct rx_desc));

 VAR_25 = VAR_23->shared_dma + FUNC_3(VAR_18);
 VAR_24->rxHiAddr = FUNC_0(VAR_25);
 VAR_24->rxHiSize = FUNC_0(VAR_3 * sizeof(struct rx_desc));

 VAR_25 = VAR_23->shared_dma + FUNC_3(VAR_14);
 VAR_24->cmdAddr = FUNC_0(VAR_25);
 VAR_24->cmdSize = FUNC_0(VAR_0);

 VAR_25 = VAR_23->shared_dma + FUNC_3(VAR_16);
 VAR_24->respAddr = FUNC_0(VAR_25);
 VAR_24->respSize = FUNC_0(VAR_1);

 VAR_25 = VAR_23->shared_dma + FUNC_3(VAR_22);
 VAR_24->zeroAddr = FUNC_0(VAR_25);

 VAR_23->indexes = &VAR_23->shared->indexes;
 VAR_23->txLoRing.ringBase = (u8 *) VAR_23->shared->txLo;
 VAR_23->txHiRing.ringBase = (u8 *) VAR_23->shared->txHi;
 VAR_23->rxLoRing.ringBase = (u8 *) VAR_23->shared->rxLo;
 VAR_23->rxHiRing.ringBase = (u8 *) VAR_23->shared->rxHi;
 VAR_23->rxBuffRing.ringBase = (u8 *) VAR_23->shared->rxBuff;
 VAR_23->cmdRing.ringBase = (u8 *) VAR_23->shared->cmd;
 VAR_23->respRing.ringBase = (u8 *) VAR_23->shared->resp;

 VAR_23->txLoRing.writeRegister = VAR_13;
 VAR_23->txHiRing.writeRegister = VAR_12;

 VAR_23->txlo_dma_addr = FUNC_1(VAR_24->txLoAddr);
 VAR_23->card_state = VAR_4;

 VAR_23->offload = VAR_8 | VAR_9;
 VAR_23->offload |= VAR_10 | VAR_5;
 VAR_23->offload |= VAR_11;

 FUNC_4(&VAR_23->command_lock);


 FUNC_5();
}
