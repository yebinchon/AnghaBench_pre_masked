
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct ftgmac100 {int rxdes_dma; int txdes_dma; int maht0; int maht1; scalar_t__ base; TYPE_1__* netdev; } ;
struct TYPE_2__ {int dev_addr; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int) ;
 int VAR_0 ;
 int FUNC_5 (int) ;
 int FUNC_6 (int) ;
 int FUNC_7 (int) ;
 int FUNC_8 (int) ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 int FUNC_9 (int ) ;
 int VAR_12 ;
 int FUNC_10 (struct ftgmac100*,int ) ;
 int FUNC_11 (scalar_t__) ;
 int FUNC_12 (int,scalar_t__) ;

__attribute__((used)) static void FUNC_13(struct ftgmac100 *VAR_13)
{
 u32 VAR_14, VAR_15, VAR_16;


 VAR_14 = FUNC_11(VAR_13->base + VAR_4);
 FUNC_12(VAR_14, VAR_13->base + VAR_4);


 FUNC_12(VAR_13->rxdes_dma, VAR_13->base + VAR_10);


 FUNC_12(VAR_13->txdes_dma, VAR_13->base + VAR_8);


 FUNC_12(FUNC_9(VAR_12),
    VAR_13->base + VAR_9);


 FUNC_12(FUNC_0(1),
    VAR_13->base + VAR_1);


 FUNC_10(VAR_13, VAR_13->netdev->dev_addr);


 FUNC_12(VAR_13->maht0, VAR_13->base + VAR_6);
 FUNC_12(VAR_13->maht1, VAR_13->base + VAR_7);






 FUNC_12(FUNC_2(2) |
    FUNC_6(2) |
    FUNC_1(3) |
    FUNC_5(3) |
    VAR_0 |
    FUNC_3(6) |
    FUNC_4(2),
    VAR_13->base + VAR_2);





 FUNC_12(FUNC_7(1) |
    FUNC_8(1),
    VAR_13->base + VAR_5);


 VAR_14 = FUNC_11(VAR_13->base + VAR_3);
 VAR_15 = VAR_14 & 0x00000007;
 VAR_16 = (VAR_14 >> 3) & 0x00000007;
 VAR_14 = FUNC_11(VAR_13->base + VAR_11);
 VAR_14 &= ~0x3f000000;
 VAR_14 |= (VAR_16 << 27);
 VAR_14 |= (VAR_15 << 24);
 FUNC_12(VAR_14, VAR_13->base + VAR_11);
}
