
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct uniphier_spi_priv {int rx_bytes; int * rx_buf; scalar_t__ base; int bits_per_word; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int) ;
 int FUNC_2 (int ,int *) ;
 int FUNC_3 (int ,int *) ;
 int FUNC_4 (scalar_t__) ;

__attribute__((used)) static void FUNC_5(struct uniphier_spi_priv *VAR_1)
{
 int VAR_2;
 u32 VAR_3;

 VAR_2 = FUNC_1(FUNC_0(VAR_1->bits_per_word), VAR_1->rx_bytes);
 VAR_1->rx_bytes -= VAR_2;

 VAR_3 = FUNC_4(VAR_1->base + VAR_0);

 if (VAR_1->rx_buf) {
  switch (VAR_2) {
  case 1:
   *VAR_1->rx_buf = VAR_3;
   break;
  case 2:
   FUNC_2(VAR_3, VAR_1->rx_buf);
   break;
  case 4:
   FUNC_3(VAR_3, VAR_1->rx_buf);
   break;
  }

  VAR_1->rx_buf += VAR_2;
 }
}
