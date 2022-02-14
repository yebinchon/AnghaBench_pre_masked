
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct spi_transfer {int len; int* tx_buf; } ;
struct spi_message {int dummy; } ;
struct ams369fg06 {int spi; } ;


 int FUNC_0 (struct spi_transfer*,struct spi_message*) ;
 int FUNC_1 (struct spi_message*) ;
 int FUNC_2 (int ,struct spi_message*) ;

__attribute__((used)) static int FUNC_3(struct ams369fg06 *VAR_0, int VAR_1, int VAR_2)
{
 u16 VAR_3[1];
 struct spi_message VAR_4;

 struct spi_transfer VAR_5 = {
  .len = 2,
  .tx_buf = VAR_3,
 };

 VAR_3[0] = (VAR_1 << 8) | VAR_2;

 FUNC_1(&VAR_4);
 FUNC_0(&VAR_5, &VAR_4);

 return FUNC_2(VAR_0->spi, &VAR_4);
}
