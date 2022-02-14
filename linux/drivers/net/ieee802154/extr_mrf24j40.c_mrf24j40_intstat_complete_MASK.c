
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct mrf24j40 {int* irq_buf; int tx_skb; int hw; int regmap_short; TYPE_1__* spi; } ;
struct TYPE_2__ {int irq; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int ,int) ;
 int FUNC_2 (struct mrf24j40*) ;
 int FUNC_3 (int ,int ,int ) ;

__attribute__((used)) static void FUNC_4(void *VAR_5)
{
 struct mrf24j40 *VAR_6 = VAR_5;
 u8 VAR_7 = VAR_6->irq_buf[1];

 FUNC_0(VAR_6->spi->irq);


 if (VAR_7 & VAR_1)
  FUNC_3(VAR_6->regmap_short, VAR_4,
       VAR_2);


 if (VAR_7 & VAR_3)
  FUNC_1(VAR_6->hw, VAR_6->tx_skb, 0);


 if (VAR_7 & VAR_0)
  FUNC_2(VAR_6);
}
