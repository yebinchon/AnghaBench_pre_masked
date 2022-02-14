
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct device {int dummy; } ;
struct spi_device {int bits_per_word; int rt; struct device dev; int irq; int mode; } ;
struct ec_response_get_protocol_info {int dummy; } ;
struct ec_host_response {int dummy; } ;
struct ec_host_request {int dummy; } ;
struct cros_ec_spi {int last_transfer_ns; struct spi_device* spi; } ;
struct cros_ec_device {int dout_size; scalar_t__ din_size; int phys_name; int pkt_xfer; int cmd_xfer; int irq; struct cros_ec_spi* priv; struct device* dev; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct cros_ec_device*) ;
 int FUNC_1 (struct device*,struct cros_ec_spi*) ;
 int FUNC_2 (struct cros_ec_spi*,struct device*) ;
 int FUNC_3 (struct device*,char*) ;
 int FUNC_4 (struct device*) ;
 int FUNC_5 (struct device*,int) ;
 void* FUNC_6 (struct device*,int,int ) ;
 int FUNC_7 () ;
 int FUNC_8 (struct spi_device*,struct cros_ec_device*) ;
 int FUNC_9 (struct spi_device*) ;

__attribute__((used)) static int FUNC_10(struct spi_device *VAR_6)
{
 struct device *VAR_7 = &VAR_6->dev;
 struct cros_ec_device *VAR_8;
 struct cros_ec_spi *VAR_9;
 int VAR_10;

 VAR_6->bits_per_word = 8;
 VAR_6->mode = VAR_3;
 VAR_6->rt = 1;
 VAR_10 = FUNC_9(VAR_6);
 if (VAR_10 < 0)
  return VAR_10;

 VAR_9 = FUNC_6(VAR_7, sizeof(*VAR_9), VAR_2);
 if (VAR_9 == ((void*)0))
  return -VAR_1;
 VAR_9->spi = VAR_6;
 VAR_8 = FUNC_6(VAR_7, sizeof(*VAR_8), VAR_2);
 if (!VAR_8)
  return -VAR_1;


 FUNC_2(VAR_9, VAR_7);

 FUNC_8(VAR_6, VAR_8);
 VAR_8->dev = VAR_7;
 VAR_8->priv = VAR_9;
 VAR_8->irq = VAR_6->irq;
 VAR_8->cmd_xfer = VAR_4;
 VAR_8->pkt_xfer = VAR_5;
 VAR_8->phys_name = FUNC_4(&VAR_9->spi->dev);
 VAR_8->din_size = VAR_0 +
      sizeof(struct ec_host_response) +
      sizeof(struct ec_response_get_protocol_info);
 VAR_8->dout_size = sizeof(struct ec_host_request);

 VAR_9->last_transfer_ns = FUNC_7();

 VAR_10 = FUNC_1(VAR_7, VAR_9);
 if (VAR_10)
  return VAR_10;

 VAR_10 = FUNC_0(VAR_8);
 if (VAR_10) {
  FUNC_3(VAR_7, "cannot register EC\n");
  return VAR_10;
 }

 FUNC_5(&VAR_6->dev, 1);

 return 0;
}
