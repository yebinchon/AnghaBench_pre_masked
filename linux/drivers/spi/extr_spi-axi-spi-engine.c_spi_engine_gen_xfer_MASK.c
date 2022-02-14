
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct spi_transfer {unsigned int len; scalar_t__ rx_buf; scalar_t__ tx_buf; } ;
struct spi_engine_program {int dummy; } ;


 int FUNC_0 (unsigned int,unsigned int) ;
 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int FUNC_1 (unsigned int,unsigned int) ;
 int FUNC_2 (struct spi_engine_program*,int,int ) ;

__attribute__((used)) static void FUNC_3(struct spi_engine_program *VAR_2, bool VAR_3,
 struct spi_transfer *VAR_4)
{
 unsigned int VAR_5 = VAR_4->len;

 while (VAR_5) {
  unsigned int VAR_6 = FUNC_1(VAR_5, 256U);
  unsigned int VAR_7 = 0;

  if (VAR_4->tx_buf)
   VAR_7 |= VAR_1;
  if (VAR_4->rx_buf)
   VAR_7 |= VAR_0;

  FUNC_2(VAR_2, VAR_3,
   FUNC_0(VAR_7, VAR_6 - 1));
  VAR_5 -= VAR_6;
 }
}
