
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct spi_transfer {int len; int* tx_buf; int* rx_buf; } ;
struct spi_message {int dummy; } ;
struct spi_device {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (struct spi_transfer*,struct spi_message*) ;
 int FUNC_2 (struct spi_message*) ;
 int FUNC_3 (struct spi_device*,struct spi_message*) ;

__attribute__((used)) static int FUNC_4(struct spi_device *VAR_1,
          u8 *VAR_2,
          u32 VAR_3)
{
 int VAR_4;
 u8 VAR_5[3];
 struct spi_message VAR_6;
 struct spi_transfer VAR_7[2] = {};

 if (!VAR_1 || !VAR_2 || !VAR_3) {
  FUNC_0("invalid arg\n");
  return -VAR_0;
 }
 if (VAR_3 > 0xffff) {
  FUNC_0("packet num > 0xffff\n");
  return -VAR_0;
 }

 VAR_5[0] = 0x10;
 VAR_5[1] = VAR_3 >> 8;
 VAR_5[2] = VAR_3;

 FUNC_2(&VAR_6);

 VAR_7[0].len = 3;
 VAR_7[0].tx_buf = VAR_5;
 FUNC_1(&VAR_7[0], &VAR_6);
 VAR_7[1].len = VAR_3 * 188;
 VAR_7[1].rx_buf = VAR_2;
 FUNC_1(&VAR_7[1], &VAR_6);

 VAR_4 = FUNC_3(VAR_1, &VAR_6);
 if (VAR_4)
  FUNC_0("spi_write_then_read failed\n");

 return VAR_4;
}
