
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct spi_device {int dev; } ;
struct ad7816_chip_info {scalar_t__ mode; scalar_t__ id; int rdwr_pin; int busy_pin; int convert_pin; int channel_id; struct spi_device* spi_dev; } ;
typedef int __be16 ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int ) ;
 int FUNC_1 () ;
 int FUNC_2 (int *,char*) ;
 scalar_t__ FUNC_3 (int ) ;
 int FUNC_4 (int ,int) ;
 int FUNC_5 (struct spi_device*,int *,int) ;
 int FUNC_6 (struct spi_device*,int *,int) ;

__attribute__((used)) static int FUNC_7(struct ad7816_chip_info *VAR_3, u16 *VAR_4)
{
 struct spi_device *VAR_5 = VAR_3->spi_dev;
 int VAR_6;
 __be16 VAR_7;

 FUNC_4(VAR_3->rdwr_pin, 1);
 FUNC_4(VAR_3->rdwr_pin, 0);
 VAR_6 = FUNC_6(VAR_5, &VAR_3->channel_id, sizeof(VAR_3->channel_id));
 if (VAR_6 < 0) {
  FUNC_2(&VAR_5->dev, "SPI channel setting error\n");
  return VAR_6;
 }
 FUNC_4(VAR_3->rdwr_pin, 1);

 if (VAR_3->mode == VAR_0) {
  FUNC_4(VAR_3->convert_pin, 1);
  FUNC_4(VAR_3->convert_pin, 0);
 } else {
  FUNC_4(VAR_3->convert_pin, 0);
  FUNC_4(VAR_3->convert_pin, 1);
 }

 if (VAR_3->id == VAR_1 || VAR_3->id == VAR_2) {
  while (FUNC_3(VAR_3->busy_pin))
   FUNC_1();
 }

 FUNC_4(VAR_3->rdwr_pin, 0);
 FUNC_4(VAR_3->rdwr_pin, 1);
 VAR_6 = FUNC_5(VAR_5, &VAR_7, sizeof(*VAR_4));
 if (VAR_6 < 0) {
  FUNC_2(&VAR_5->dev, "SPI data read error\n");
  return VAR_6;
 }

 *VAR_4 = FUNC_0(VAR_7);

 return VAR_6;
}
