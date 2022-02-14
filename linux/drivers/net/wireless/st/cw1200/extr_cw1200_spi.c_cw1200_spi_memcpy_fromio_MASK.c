
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint16_t ;
typedef int u8 ;
typedef int u16 ;
struct spi_transfer {int* tx_buf; int len; void* rx_buf; } ;
struct spi_message {int dummy; } ;
struct hwbus_priv {TYPE_1__* func; } ;
typedef int regaddr ;
struct TYPE_2__ {int bits_per_word; } ;


 int FUNC_0 (unsigned int) ;
 int VAR_0 ;
 int FUNC_1 (int) ;
 int FUNC_2 (char*,...) ;
 int FUNC_3 (char*,...) ;
 int FUNC_4 (struct spi_transfer*,struct spi_message*) ;
 int FUNC_5 (struct spi_message*) ;
 int FUNC_6 (TYPE_1__*,struct spi_message*) ;
 int FUNC_7 (int) ;

__attribute__((used)) static int FUNC_8(struct hwbus_priv *VAR_1,
         unsigned int VAR_2,
         void *VAR_3, int VAR_4)
{
 int VAR_5, VAR_6;
 u16 VAR_7;
 struct spi_message VAR_8;

 struct spi_transfer VAR_9 = {
  .tx_buf = &VAR_7,
  .len = sizeof(VAR_7),
 };
 struct spi_transfer VAR_10 = {
  .rx_buf = VAR_3,
  .len = VAR_4,
 };

 VAR_7 = (FUNC_0(VAR_2))<<12;
 VAR_7 |= VAR_0;
 VAR_7 |= (VAR_4>>1);






 VAR_7 = FUNC_1(VAR_7);







  VAR_7 = FUNC_7(VAR_7);

 FUNC_5(&VAR_8);
 FUNC_4(&VAR_9, &VAR_8);
 FUNC_4(&VAR_10, &VAR_8);
 VAR_5 = FUNC_6(VAR_1->func, &VAR_8);
 {
  uint16_t *VAR_11 = (uint16_t *)VAR_3;
  for (VAR_6 = 0; VAR_6 < ((VAR_4 + 1) >> 1); VAR_6++)
   VAR_11[VAR_6] = FUNC_7(VAR_11[VAR_6]);
 }

 return VAR_5;
}
