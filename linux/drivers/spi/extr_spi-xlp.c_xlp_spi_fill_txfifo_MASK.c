
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct xlp_spi_priv {int* tx_buf; scalar_t__ tx_len; int cs; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (scalar_t__,int) ;
 int FUNC_1 (struct xlp_spi_priv*,int ,int ) ;
 int FUNC_2 (struct xlp_spi_priv*,int ,int ,int) ;

__attribute__((used)) static void FUNC_3(struct xlp_spi_priv *VAR_5)
{
 u32 VAR_6, VAR_7;
 int VAR_8, VAR_9, VAR_10;

 VAR_7 = FUNC_1(VAR_5, VAR_5->cs, VAR_1);
 VAR_7 &= VAR_3;
 VAR_7 >>= VAR_4;
 while (VAR_5->tx_len && (VAR_7 < VAR_0)) {
  VAR_9 = 0;
  VAR_6 = 0;
  VAR_10 = FUNC_0(VAR_5->tx_len, 4);
  for (VAR_8 = VAR_10 - 1; VAR_8 >= 0; VAR_8--, VAR_9++)
   VAR_6 |= VAR_5->tx_buf[VAR_8] << (VAR_9 * 8);

  FUNC_2(VAR_5, VAR_5->cs, VAR_2, VAR_6);
  VAR_5->tx_len -= VAR_10;
  VAR_5->tx_buf += VAR_10;
  VAR_7++;
 }
}
