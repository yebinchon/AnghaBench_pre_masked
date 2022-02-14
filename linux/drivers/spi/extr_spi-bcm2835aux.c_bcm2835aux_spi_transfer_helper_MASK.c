
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct bcm2835aux_spi {int pending; scalar_t__ tx_len; scalar_t__ rx_len; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct bcm2835aux_spi*,int ) ;
 int FUNC_1 (struct bcm2835aux_spi*) ;
 int FUNC_2 (struct bcm2835aux_spi*) ;

__attribute__((used)) static void FUNC_3(struct bcm2835aux_spi *VAR_3)
{
 u32 VAR_4 = FUNC_0(VAR_3, VAR_0);


 for (; VAR_3->rx_len && (VAR_4 & VAR_1);
      VAR_4 = FUNC_0(VAR_3, VAR_0))
  FUNC_1(VAR_3);


 while (VAR_3->tx_len &&
        (VAR_3->pending < 12) &&
        (!(FUNC_0(VAR_3, VAR_0) &
    VAR_2))) {
  FUNC_2(VAR_3);
 }
}
