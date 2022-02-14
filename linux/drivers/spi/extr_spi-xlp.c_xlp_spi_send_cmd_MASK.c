
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct xlp_spi_priv {int cs; scalar_t__ rx_buf; scalar_t__ tx_buf; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct xlp_spi_priv*,int ,int ,int) ;

__attribute__((used)) static void FUNC_1(struct xlp_spi_priv *VAR_5, int VAR_6,
   int VAR_7)
{
 u32 VAR_8 = 0;

 if (VAR_5->tx_buf)
  VAR_8 |= VAR_3;
 if (VAR_5->rx_buf)
  VAR_8 |= VAR_2;
 if (VAR_7)
  VAR_8 |= VAR_1;
 VAR_8 |= ((VAR_6 * 8 - 1) << VAR_4);
 FUNC_0(VAR_5, VAR_5->cs, VAR_0, VAR_8);
}
