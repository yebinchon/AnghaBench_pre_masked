
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct spi_transfer {int len; int * tx_buf; } ;
struct spi_message {int dummy; } ;
struct spi_device {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (struct spi_transfer*,struct spi_message*) ;
 int FUNC_2 (struct spi_message*) ;
 int FUNC_3 (struct spi_device*,struct spi_message*) ;

__attribute__((used)) static int FUNC_4(struct spi_device *VAR_1, u8 *VAR_2, u32 VAR_3)
{
 struct spi_message VAR_4;
 struct spi_transfer VAR_5 = {};

 if (!VAR_1 || !VAR_2) {
  FUNC_0("invalid arg\n");
  return -VAR_0;
 }

 VAR_5.tx_buf = VAR_2;
 VAR_5.len = VAR_3;

 FUNC_2(&VAR_4);
 FUNC_1(&VAR_5, &VAR_4);

 return FUNC_3(VAR_1, &VAR_4);
}
