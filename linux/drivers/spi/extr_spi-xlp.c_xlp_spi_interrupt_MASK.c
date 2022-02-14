
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct xlp_spi_priv {int done; int cs; int rxerrors; scalar_t__ rx_len; int txerrors; scalar_t__ tx_len; } ;
typedef int irqreturn_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (struct xlp_spi_priv*) ;
 int FUNC_2 (struct xlp_spi_priv*) ;
 int FUNC_3 (struct xlp_spi_priv*,int ,int ) ;
 int FUNC_4 (struct xlp_spi_priv*,int ,int ,int) ;

__attribute__((used)) static irqreturn_t FUNC_5(int VAR_9, void *VAR_10)
{
 struct xlp_spi_priv *VAR_11 = VAR_10;
 u32 VAR_12;

 VAR_12 = FUNC_3(VAR_11, VAR_11->cs, VAR_4) &
  VAR_5;
 if (!VAR_12)
  return VAR_1;

 if (VAR_12 & VAR_6) {
  if (VAR_11->tx_len)
   FUNC_1(VAR_11);
  if (VAR_12 & VAR_7)
   VAR_11->txerrors++;
 }

 if (VAR_12 & VAR_2) {
  if (VAR_11->rx_len)
   FUNC_2(VAR_11);
  if (VAR_12 & VAR_3)
   VAR_11->rxerrors++;
 }


 FUNC_4(VAR_11, VAR_11->cs, VAR_4, VAR_12);
 if (VAR_12 & VAR_8)
  FUNC_0(&VAR_11->done);

 return VAR_0;
}
