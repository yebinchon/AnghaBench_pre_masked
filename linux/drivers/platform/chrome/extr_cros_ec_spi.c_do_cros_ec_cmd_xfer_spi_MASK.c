
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u8 ;
typedef int trans ;
struct spi_transfer {scalar_t__* tx_buf; scalar_t__* rx_buf; int len; int cs_change; } ;
struct spi_message {int dummy; } ;
struct cros_ec_spi {unsigned long last_transfer_ns; TYPE_1__* spi; } ;
struct cros_ec_device {scalar_t__* dout; int dev; scalar_t__* din; struct cros_ec_spi* priv; } ;
struct cros_ec_command {int insize; scalar_t__ command; scalar_t__* data; scalar_t__ result; } ;
struct TYPE_2__ {int master; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 unsigned long VAR_7 ;
 scalar_t__ VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_0 (struct cros_ec_device*,struct cros_ec_command*) ;
 int FUNC_1 (struct cros_ec_device*,struct cros_ec_command*) ;
 int FUNC_2 (struct cros_ec_device*,scalar_t__) ;
 int FUNC_3 (int ,char*,scalar_t__*,int) ;
 int FUNC_4 (int ,char*,int) ;
 int FUNC_5 (int ,char*,int,...) ;
 int FUNC_6 (scalar_t__*) ;
 unsigned long FUNC_7 () ;
 scalar_t__* FUNC_8 (int,int ) ;
 int FUNC_9 (struct spi_transfer*,int ,int) ;
 int FUNC_10 (int ) ;
 int FUNC_11 (unsigned long) ;
 int FUNC_12 (int ) ;
 int FUNC_13 (int ) ;
 int FUNC_14 (struct spi_transfer*,struct spi_message*) ;
 int FUNC_15 (struct spi_message*) ;
 int FUNC_16 (TYPE_1__*,struct spi_message*) ;
 int FUNC_17 (struct cros_ec_device*) ;

__attribute__((used)) static int FUNC_18(struct cros_ec_device *VAR_12,
       struct cros_ec_command *VAR_13)
{
 struct cros_ec_spi *VAR_14 = VAR_12->priv;
 struct spi_transfer VAR_15;
 struct spi_message VAR_16;
 int VAR_17, VAR_18;
 u8 *VAR_19;
 u8 *VAR_20;
 u8 VAR_21;
 int VAR_22;
 int VAR_23 = 0, VAR_24;
 unsigned long VAR_25;

 VAR_18 = FUNC_1(VAR_12, VAR_13);
 FUNC_4(VAR_12->dev, "prepared, len=%d\n", VAR_18);


 VAR_25 = FUNC_7() - VAR_14->last_transfer_ns;
 if (VAR_25 < VAR_7)
  FUNC_11(VAR_7 - VAR_25);

 VAR_20 = FUNC_8(VAR_18, VAR_11);
 if (!VAR_20)
  return -VAR_9;

 FUNC_12(VAR_14->spi->master);


 FUNC_3(VAR_12->dev, "out", VAR_12->dout, VAR_18);
 FUNC_9(&VAR_15, 0, sizeof(VAR_15));
 VAR_15.tx_buf = VAR_12->dout;
 VAR_15.rx_buf = VAR_20;
 VAR_15.len = VAR_18;
 VAR_15.cs_change = 1;
 FUNC_15(&VAR_16);
 FUNC_14(&VAR_15, &VAR_16);
 VAR_23 = FUNC_16(VAR_14->spi, &VAR_16);


 if (!VAR_23) {

  for (VAR_17 = 0; VAR_17 < VAR_18; VAR_17++) {
   VAR_21 = VAR_20[VAR_17];

   if (VAR_21 == VAR_6 ||
       VAR_21 == VAR_8 ||
       VAR_21 == VAR_5) {
    VAR_23 = -VAR_0;
    break;
   }
  }
 }

 if (!VAR_23)
  VAR_23 = FUNC_2(VAR_12,
    VAR_13->insize + VAR_3);
 else if (VAR_23 != -VAR_0)
  FUNC_5(VAR_12->dev, "spi transfer failed: %d\n", VAR_23);

 VAR_24 = FUNC_17(VAR_12);

 FUNC_13(VAR_14->spi->master);

 if (!VAR_23)
  VAR_23 = VAR_24;
 if (VAR_23 < 0)
  goto exit;

 VAR_19 = VAR_12->din;


 VAR_13->result = VAR_19[0];
 VAR_23 = FUNC_0(VAR_12, VAR_13);
 if (VAR_23)
  goto exit;

 VAR_18 = VAR_19[1];
 VAR_22 = VAR_19[0] + VAR_19[1];
 if (VAR_18 > VAR_13->insize) {
  FUNC_5(VAR_12->dev, "packet too long (%d bytes, expected %d)",
   VAR_18, VAR_13->insize);
  VAR_23 = -VAR_10;
  goto exit;
 }


 for (VAR_17 = 0; VAR_17 < VAR_18; VAR_17++) {
  VAR_22 += VAR_19[VAR_17 + 2];
  if (VAR_13->insize)
   VAR_13->data[VAR_17] = VAR_19[VAR_17 + 2];
 }
 VAR_22 &= 0xff;

 FUNC_3(VAR_12->dev, "in", VAR_19, VAR_18 + 3);

 if (VAR_22 != VAR_19[VAR_18 + 2]) {
  FUNC_5(VAR_12->dev,
   "bad packet checksum, expected %02x, got %02x\n",
   VAR_22, VAR_19[VAR_18 + 2]);
  VAR_23 = -VAR_1;
  goto exit;
 }

 VAR_23 = VAR_18;
exit:
 FUNC_6(VAR_20);
 if (VAR_13->command == VAR_2)
  FUNC_10(VAR_4);

 return VAR_23;
}
