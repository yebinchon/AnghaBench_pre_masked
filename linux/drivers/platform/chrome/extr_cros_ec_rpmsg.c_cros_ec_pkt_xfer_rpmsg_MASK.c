
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
struct ec_host_response {int data_len; int result; } ;
struct cros_ec_rpmsg {int xfer_ack; int ept; } ;
struct cros_ec_device {int dev; scalar_t__* din; int dout; struct cros_ec_rpmsg* priv; } ;
struct cros_ec_command {int insize; scalar_t__ command; int data; int result; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct cros_ec_device*,struct cros_ec_command*) ;
 int FUNC_1 (struct cros_ec_device*,struct cros_ec_command*) ;
 int FUNC_2 (int ,char*,int) ;
 int FUNC_3 (int ,char*,...) ;
 int FUNC_4 (int ,scalar_t__*,int) ;
 unsigned long FUNC_5 (int ) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int ,int ,int) ;
 int FUNC_9 (int *,unsigned long) ;

__attribute__((used)) static int FUNC_10(struct cros_ec_device *VAR_6,
      struct cros_ec_command *VAR_7)
{
 struct cros_ec_rpmsg *VAR_8 = VAR_6->priv;
 struct ec_host_response *VAR_9;
 unsigned long VAR_10;
 int VAR_11;
 int VAR_12;
 u8 VAR_13;
 int VAR_14;

 VAR_7->result = 0;
 VAR_11 = FUNC_1(VAR_6, VAR_7);
 FUNC_2(VAR_6->dev, "prepared, len=%d\n", VAR_11);

 FUNC_7(&VAR_8->xfer_ack);
 VAR_12 = FUNC_8(VAR_8->ept, VAR_6->dout, VAR_11);
 if (VAR_12) {
  FUNC_3(VAR_6->dev, "rpmsg send failed\n");
  return VAR_12;
 }

 VAR_10 = FUNC_5(VAR_2);
 VAR_12 = FUNC_9(&VAR_8->xfer_ack, VAR_10);
 if (!VAR_12) {
  FUNC_3(VAR_6->dev, "rpmsg send timeout\n");
  return -VAR_4;
 }


 VAR_9 = (struct ec_host_response *)VAR_6->din;
 VAR_7->result = VAR_9->result;

 VAR_12 = FUNC_0(VAR_6, VAR_7);
 if (VAR_12)
  goto exit;

 if (VAR_9->data_len > VAR_7->insize) {
  FUNC_3(VAR_6->dev, "packet too long (%d bytes, expected %d)",
   VAR_9->data_len, VAR_7->insize);
  VAR_12 = -VAR_5;
  goto exit;
 }


 FUNC_4(VAR_7->data, VAR_6->din + sizeof(*VAR_9),
        VAR_9->data_len);

 VAR_13 = 0;
 for (VAR_14 = 0; VAR_14 < sizeof(*VAR_9) + VAR_9->data_len; VAR_14++)
  VAR_13 += VAR_6->din[VAR_14];

 if (VAR_13) {
  FUNC_3(VAR_6->dev, "bad packet checksum, calculated %x\n",
   VAR_13);
  VAR_12 = -VAR_0;
  goto exit;
 }

 VAR_12 = VAR_9->data_len;
exit:
 if (VAR_7->command == VAR_1)
  FUNC_6(VAR_3);

 return VAR_12;
}
