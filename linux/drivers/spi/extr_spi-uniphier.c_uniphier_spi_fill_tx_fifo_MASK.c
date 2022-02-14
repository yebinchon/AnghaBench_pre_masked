
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct uniphier_spi_priv {unsigned int rx_bytes; unsigned int tx_bytes; scalar_t__ base; int bits_per_word; } ;


 unsigned int FUNC_0 (unsigned int,int ) ;
 int FUNC_1 (int,unsigned int) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (int ) ;
 unsigned int FUNC_3 (unsigned int,int ) ;
 int FUNC_4 (scalar_t__) ;
 int FUNC_5 (struct uniphier_spi_priv*) ;
 int FUNC_6 (int,scalar_t__) ;

__attribute__((used)) static void FUNC_7(struct uniphier_spi_priv *VAR_4)
{
 unsigned int VAR_5, VAR_6;
 u32 VAR_7;

 VAR_5 = FUNC_0(VAR_4->rx_bytes,
    FUNC_2(VAR_4->bits_per_word));
 VAR_5 = FUNC_3(VAR_5, VAR_3);

 VAR_6 = VAR_5 - (VAR_4->rx_bytes - VAR_4->tx_bytes);


 VAR_7 = FUNC_4(VAR_4->base + VAR_0);
 VAR_7 &= ~(VAR_2 | VAR_1);
 VAR_7 |= FUNC_1(VAR_2, VAR_5);
 VAR_7 |= FUNC_1(VAR_1, VAR_5);
 FUNC_6(VAR_7, VAR_4->base + VAR_0);

 while (VAR_6--)
  FUNC_5(VAR_4);
}
