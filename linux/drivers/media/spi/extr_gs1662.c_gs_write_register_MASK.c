
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct spi_transfer {int len; int delay_usecs; int * tx_buf; } ;
struct spi_message {int dummy; } ;
struct spi_device {int dummy; } ;


 int FUNC_0 (struct spi_transfer*,struct spi_message*) ;
 int FUNC_1 (struct spi_message*) ;
 int FUNC_2 (struct spi_device*,struct spi_message*) ;

__attribute__((used)) static int FUNC_3(struct spi_device *VAR_0, u16 VAR_1, u16 VAR_2)
{
 int VAR_3;
 u16 VAR_4 = VAR_1;
 u16 VAR_5 = VAR_2;
 struct spi_message VAR_6;
 struct spi_transfer VAR_7[] = {
  {
   .tx_buf = &VAR_4,
   .len = 2,
   .delay_usecs = 1,
  }, {
   .tx_buf = &VAR_5,
   .len = 2,
   .delay_usecs = 1,
  },
 };

 FUNC_1(&VAR_6);
 FUNC_0(&VAR_7[0], &VAR_6);
 FUNC_0(&VAR_7[1], &VAR_6);
 VAR_3 = FUNC_2(VAR_0, &VAR_6);

 return VAR_3;
}
