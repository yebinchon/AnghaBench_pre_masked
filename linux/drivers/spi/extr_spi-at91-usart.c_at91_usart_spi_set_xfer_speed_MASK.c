
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct spi_transfer {int speed_hz; } ;
struct at91_usart_spi {int spi_clk; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (struct at91_usart_spi*,int ,int ) ;

__attribute__((used)) static inline void
FUNC_2(struct at91_usart_spi *VAR_1,
         struct spi_transfer *VAR_2)
{
 FUNC_1(VAR_1, VAR_0,
         FUNC_0(VAR_1->spi_clk, VAR_2->speed_hz));
}
