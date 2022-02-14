
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int trans ;
struct spi_transfer {int cs_change; int len; int * rx_buf; } ;
struct spi_message {int dummy; } ;
struct cros_ec_spi {int spi; } ;
struct cros_ec_device {int din_size; int dev; int * din; struct cros_ec_spi* priv; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (int ,char*,int) ;
 int FUNC_2 (struct spi_transfer*,int ,int) ;
 int FUNC_3 (struct spi_transfer*,struct spi_message*) ;
 int FUNC_4 (struct spi_message*) ;
 int FUNC_5 (int ,struct spi_message*) ;

__attribute__((used)) static int FUNC_6(struct cros_ec_device *VAR_0, u8 *VAR_1, int VAR_2)
{
 struct cros_ec_spi *VAR_3 = VAR_0->priv;
 struct spi_transfer VAR_4;
 struct spi_message VAR_5;
 int VAR_6;

 FUNC_0(VAR_1 - VAR_0->din + VAR_2 > VAR_0->din_size);

 FUNC_2(&VAR_4, 0, sizeof(VAR_4));
 VAR_4.cs_change = 1;
 VAR_4.rx_buf = VAR_1;
 VAR_4.len = VAR_2;

 FUNC_4(&VAR_5);
 FUNC_3(&VAR_4, &VAR_5);
 VAR_6 = FUNC_5(VAR_3->spi, &VAR_5);
 if (VAR_6 < 0)
  FUNC_1(VAR_0->dev, "spi transfer failed: %d\n", VAR_6);

 return VAR_6;
}
