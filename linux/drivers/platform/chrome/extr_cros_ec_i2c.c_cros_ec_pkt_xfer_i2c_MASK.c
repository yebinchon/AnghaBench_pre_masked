
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
struct i2c_msg {int len; char* buf; scalar_t__ flags; int addr; } ;
struct i2c_client {int adapter; int addr; } ;
struct ec_host_response {int data_len; } ;
struct ec_host_response_i2c {int packet_length; int result; struct ec_host_response ec_response; } ;
struct ec_host_request_i2c {int command_protocol; } ;
struct cros_ec_device {int din_size; int dout_size; int dev; scalar_t__* dout; scalar_t__* din; struct i2c_client* priv; } ;
struct cros_ec_command {int insize; int outsize; scalar_t__ command; scalar_t__* data; int result; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;


 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 scalar_t__ VAR_10 ;
 int FUNC_1 (struct cros_ec_device*,struct cros_ec_command*) ;
 int FUNC_2 (int ,char*,scalar_t__,...) ;
 int FUNC_3 (int ,char*,...) ;
 int FUNC_4 (int ,struct i2c_msg*,int) ;
 int FUNC_5 (scalar_t__*,scalar_t__*,int) ;
 int FUNC_6 (int ) ;

__attribute__((used)) static int FUNC_7(struct cros_ec_device *VAR_11,
    struct cros_ec_command *VAR_12)
{
 struct i2c_client *VAR_13 = VAR_11->priv;
 int VAR_14 = -VAR_8;
 int VAR_15;
 int VAR_16;
 u8 *VAR_17 = ((void*)0);
 u8 *VAR_18 = ((void*)0);
 u8 VAR_19;
 struct i2c_msg VAR_20[2];
 struct ec_host_response *VAR_21;
 struct ec_host_request_i2c *VAR_22;
 struct ec_host_response_i2c *VAR_23;
 int VAR_24 = sizeof(struct ec_host_request_i2c);
 int VAR_25 = sizeof(struct ec_host_response_i2c);

 VAR_20[0].addr = VAR_13->addr;
 VAR_20[0].flags = 0;
 VAR_20[1].addr = VAR_13->addr;
 VAR_20[1].flags = VAR_10;

 VAR_16 = VAR_12->insize + VAR_25;
 FUNC_0(VAR_16 > VAR_11->din_size);
 VAR_18 = VAR_11->din;
 VAR_20[1].len = VAR_16;
 VAR_20[1].buf = (char *) VAR_18;

 VAR_16 = VAR_12->outsize + VAR_24;
 FUNC_0(VAR_16 > VAR_11->dout_size);
 VAR_17 = VAR_11->dout;
 VAR_20[0].len = VAR_16;
 VAR_20[0].buf = (char *) VAR_17;


 VAR_22 = (struct ec_host_request_i2c *) VAR_17;
 VAR_22->command_protocol = VAR_3;

 VAR_11->dout++;
 VAR_14 = FUNC_1(VAR_11, VAR_12);
 VAR_11->dout--;


 VAR_14 = FUNC_4(VAR_13->adapter, VAR_20, 2);
 if (VAR_14 < 0) {
  FUNC_2(VAR_11->dev, "i2c transfer failed: %d\n", VAR_14);
  goto done;
 } else if (VAR_14 != 2) {
  FUNC_3(VAR_11->dev, "failed to get response: %d\n", VAR_14);
  VAR_14 = -VAR_6;
  goto done;
 }

 VAR_23 = (struct ec_host_response_i2c *) VAR_18;
 VAR_12->result = VAR_23->result;
 VAR_21 = &VAR_23->ec_response;

 switch (VAR_12->result) {
 case 128:
  break;
 case 129:
  VAR_14 = -VAR_0;
  FUNC_2(VAR_11->dev, "command 0x%02x in progress\n",
   VAR_12->command);
  goto done;

 default:
  FUNC_2(VAR_11->dev, "command 0x%02x returned %d\n",
   VAR_12->command, VAR_12->result);
  if (VAR_23->result == VAR_5 &&
      VAR_23->packet_length == 0) {
   VAR_14 = -VAR_9;
   goto done;
  }
 }

 if (VAR_23->packet_length < sizeof(struct ec_host_response)) {
  FUNC_3(VAR_11->dev,
   "response of %u bytes too short; not a full header\n",
   VAR_23->packet_length);
  VAR_14 = -VAR_1;
  goto done;
 }

 if (VAR_12->insize < VAR_21->data_len) {
  FUNC_3(VAR_11->dev,
   "response data size is too large: expected %u, got %u\n",
   VAR_12->insize,
   VAR_21->data_len);
  VAR_14 = -VAR_7;
  goto done;
 }


 VAR_19 = 0;
 for (VAR_15 = 0; VAR_15 < sizeof(struct ec_host_response); VAR_15++)
  VAR_19 += ((u8 *)VAR_21)[VAR_15];

 FUNC_5(VAR_12->data,
        VAR_18 + VAR_25,
        VAR_21->data_len);
 for (VAR_15 = 0; VAR_15 < VAR_21->data_len; VAR_15++)
  VAR_19 += VAR_12->data[VAR_15];


 if (VAR_19) {
  FUNC_3(VAR_11->dev, "bad packet checksum\n");
  VAR_14 = -VAR_1;
  goto done;
 }

 VAR_14 = VAR_21->data_len;

done:
 if (VAR_12->command == VAR_2)
  FUNC_6(VAR_4);

 return VAR_14;
}
