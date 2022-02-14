
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned char uint16_t ;
struct spi_transfer {unsigned char* tx_buf; unsigned char* rx_buf; int len; } ;
struct spi_message {int dummy; } ;
struct spi_device {int dev; } ;
struct flash_info {unsigned char device_id; } ;
typedef int cmd_resp ;


 int FUNC_0 (struct flash_info*) ;
 unsigned char VAR_0 ;
 int FUNC_1 (int *,char*,...) ;
 int FUNC_2 (struct spi_transfer*,int ,int) ;
 int FUNC_3 (struct spi_transfer*,struct spi_message*) ;
 int FUNC_4 (struct spi_message*) ;
 int FUNC_5 (struct spi_device*,struct spi_message*) ;
 struct flash_info* VAR_1 ;

__attribute__((used)) static struct flash_info *FUNC_6(struct spi_device *VAR_2)
{
 struct flash_info *VAR_3 = ((void*)0);
 struct spi_message VAR_4;
 struct spi_transfer VAR_5;
 unsigned char VAR_6[6];
 int VAR_7, VAR_8;
 uint16_t VAR_9;

 FUNC_4(&VAR_4);
 FUNC_2(&VAR_5, 0, sizeof(struct spi_transfer));

 VAR_6[0] = VAR_0;
 VAR_6[1] = 0;
 VAR_6[2] = 0;
 VAR_6[3] = 0;
 VAR_6[4] = 0xff;
 VAR_6[5] = 0xff;
 VAR_5.tx_buf = VAR_6;
 VAR_5.rx_buf = VAR_6;
 VAR_5.len = sizeof(VAR_6);
 FUNC_3(&VAR_5, &VAR_4);
 VAR_8 = FUNC_5(VAR_2, &VAR_4);
 if (VAR_8 < 0) {
  FUNC_1(&VAR_2->dev, "error reading device id\n");
  return ((void*)0);
 }

 VAR_9 = (VAR_6[4] << 8) | VAR_6[5];

 for (VAR_7 = 0; VAR_7 < FUNC_0(VAR_1); VAR_7++)
  if (VAR_1[VAR_7].device_id == VAR_9)
   VAR_3 = &VAR_1[VAR_7];

 if (!VAR_3)
  FUNC_1(&VAR_2->dev, "unknown id %.4x\n", VAR_9);

 return VAR_3;
}
