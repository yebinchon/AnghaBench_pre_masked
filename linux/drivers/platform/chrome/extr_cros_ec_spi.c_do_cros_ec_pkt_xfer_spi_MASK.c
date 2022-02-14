
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u8 ;
typedef int trans_delay ;
typedef int trans ;
struct spi_transfer {scalar_t__* rx_buf; int len; int cs_change; int tx_buf; scalar_t__ delay_usecs; } ;
struct spi_message {int dummy; } ;
struct ec_host_response {int data_len; int result; } ;
struct cros_ec_spi {unsigned long last_transfer_ns; TYPE_1__* spi; scalar_t__ start_of_msg_delay; } ;
struct cros_ec_device {int dev; scalar_t__* din; int dout; struct cros_ec_spi* priv; } ;
struct cros_ec_command {int insize; scalar_t__ command; scalar_t__* data; int result; } ;
struct TYPE_2__ {int master; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 unsigned long VAR_6 ;
 scalar_t__ VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_0 (struct cros_ec_device*,struct cros_ec_command*) ;
 int FUNC_1 (struct cros_ec_device*,struct cros_ec_command*) ;
 int FUNC_2 (struct cros_ec_device*,int) ;
 int FUNC_3 (int ,char*,int) ;
 int FUNC_4 (int ,char*,scalar_t__,...) ;
 int FUNC_5 (scalar_t__*) ;
 unsigned long FUNC_6 () ;
 scalar_t__* FUNC_7 (int,int ) ;
 int FUNC_8 (scalar_t__*,scalar_t__*,int) ;
 int FUNC_9 (struct spi_transfer*,int ,int) ;
 int FUNC_10 (int ) ;
 int FUNC_11 (unsigned long) ;
 int FUNC_12 (int ) ;
 int FUNC_13 (int ) ;
 int FUNC_14 (struct spi_transfer*,struct spi_message*) ;
 int FUNC_15 (struct spi_message*) ;
 int FUNC_16 (TYPE_1__*,struct spi_message*) ;
 int FUNC_17 (struct cros_ec_device*) ;

__attribute__((used)) static int FUNC_18(struct cros_ec_device *VAR_11,
       struct cros_ec_command *VAR_12)
{
 struct ec_host_response *VAR_13;
 struct cros_ec_spi *VAR_14 = VAR_11->priv;
 struct spi_transfer VAR_15, VAR_16;
 struct spi_message VAR_17;
 int VAR_18, VAR_19;
 u8 *VAR_20;
 u8 *VAR_21;
 u8 VAR_22;
 u8 VAR_23;
 int VAR_24 = 0, VAR_25;
 unsigned long VAR_26;

 VAR_19 = FUNC_1(VAR_11, VAR_12);
 FUNC_3(VAR_11->dev, "prepared, len=%d\n", VAR_19);


 VAR_26 = FUNC_6() - VAR_14->last_transfer_ns;
 if (VAR_26 < VAR_6)
  FUNC_11(VAR_6 - VAR_26);

 VAR_21 = FUNC_7(VAR_19, VAR_10);
 if (!VAR_21)
  return -VAR_9;

 FUNC_12(VAR_14->spi->master);





 FUNC_15(&VAR_17);
 if (VAR_14->start_of_msg_delay) {
  FUNC_9(&VAR_16, 0, sizeof(VAR_16));
  VAR_16.delay_usecs = VAR_14->start_of_msg_delay;
  FUNC_14(&VAR_16, &VAR_17);
 }


 FUNC_9(&VAR_15, 0, sizeof(VAR_15));
 VAR_15.tx_buf = VAR_11->dout;
 VAR_15.rx_buf = VAR_21;
 VAR_15.len = VAR_19;
 VAR_15.cs_change = 1;
 FUNC_14(&VAR_15, &VAR_17);
 VAR_24 = FUNC_16(VAR_14->spi, &VAR_17);


 if (!VAR_24) {

  for (VAR_18 = 0; VAR_18 < VAR_19; VAR_18++) {
   VAR_23 = VAR_21[VAR_18];
   if (VAR_23 == VAR_5 ||
       VAR_23 == VAR_7 ||
       VAR_23 == VAR_4) {
    VAR_24 = -VAR_0;
    break;
   }
  }
 }

 if (!VAR_24)
  VAR_24 = FUNC_2(VAR_11,
    VAR_12->insize + sizeof(*VAR_13));
 else if (VAR_24 != -VAR_0)
  FUNC_4(VAR_11->dev, "spi transfer failed: %d\n", VAR_24);

 VAR_25 = FUNC_17(VAR_11);

 FUNC_13(VAR_14->spi->master);

 if (!VAR_24)
  VAR_24 = VAR_25;
 if (VAR_24 < 0)
  goto exit;

 VAR_20 = VAR_11->din;


 VAR_13 = (struct ec_host_response *)VAR_20;
 VAR_12->result = VAR_13->result;

 VAR_24 = FUNC_0(VAR_11, VAR_12);
 if (VAR_24)
  goto exit;

 VAR_19 = VAR_13->data_len;
 VAR_22 = 0;
 if (VAR_19 > VAR_12->insize) {
  FUNC_4(VAR_11->dev, "packet too long (%d bytes, expected %d)",
   VAR_19, VAR_12->insize);
  VAR_24 = -VAR_8;
  goto exit;
 }

 for (VAR_18 = 0; VAR_18 < sizeof(*VAR_13); VAR_18++)
  VAR_22 += VAR_20[VAR_18];


 FUNC_8(VAR_12->data, VAR_20 + sizeof(*VAR_13), VAR_19);
 for (VAR_18 = 0; VAR_18 < VAR_19; VAR_18++)
  VAR_22 += VAR_12->data[VAR_18];

 if (VAR_22) {
  FUNC_4(VAR_11->dev,
   "bad packet checksum, calculated %x\n",
   VAR_22);
  VAR_24 = -VAR_1;
  goto exit;
 }

 VAR_24 = VAR_19;
exit:
 FUNC_5(VAR_21);
 if (VAR_12->command == VAR_2)
  FUNC_10(VAR_3);

 return VAR_24;
}
