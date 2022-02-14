
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u8 ;
struct ishtp_cl_data {int dummy; } ;
struct ishtp_cl {int dummy; } ;
struct device {int dummy; } ;
struct TYPE_5__ {int data_len; int command_version; int command; int checksum; int struct_version; } ;
struct TYPE_4__ {scalar_t__ status; int channel; } ;
struct cros_ish_out_msg {TYPE_2__ ec_request; TYPE_1__ hdr; } ;
struct TYPE_6__ {int data_len; int result; int checksum; int struct_version; } ;
struct cros_ish_in_msg {TYPE_3__ ec_response; } ;
struct cros_ec_device {size_t din_size; size_t dout_size; scalar_t__ dout; scalar_t__ din; struct ishtp_cl* priv; } ;
struct cros_ec_command {int insize; int outsize; scalar_t__ command; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 struct device* FUNC_0 (struct ishtp_cl_data*) ;
 int FUNC_1 (struct cros_ec_device*,struct cros_ec_command*) ;
 int FUNC_2 (struct device*,char*,int ,int ,int ,int,...) ;
 int FUNC_3 (struct device*,char*,size_t,size_t) ;
 int FUNC_4 (struct device*,char*) ;
 int FUNC_5 (int *) ;
 int VAR_6 ;
 int FUNC_6 (struct ishtp_cl_data*,int *,size_t,int *,size_t) ;
 struct ishtp_cl_data* FUNC_7 (struct ishtp_cl*) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (struct cros_ec_device*,struct cros_ish_in_msg*,struct cros_ec_command*) ;
 int FUNC_10 (int *) ;

__attribute__((used)) static int FUNC_11(struct cros_ec_device *VAR_7,
    struct cros_ec_command *VAR_8)
{
 int VAR_9;
 struct ishtp_cl *VAR_10 = VAR_7->priv;
 struct ishtp_cl_data *VAR_11 = FUNC_7(VAR_10);
 struct device *VAR_12 = FUNC_0(VAR_11);
 struct cros_ish_in_msg *VAR_13 = (struct cros_ish_in_msg *)VAR_7->din;
 struct cros_ish_out_msg *VAR_14 =
  (struct cros_ish_out_msg *)VAR_7->dout;
 size_t VAR_15 = sizeof(struct cros_ish_in_msg) + VAR_8->insize;
 size_t VAR_16 = sizeof(struct cros_ish_out_msg) + VAR_8->outsize;


 if (VAR_15 > VAR_7->din_size) {
  FUNC_3(VAR_12,
   "Incoming payload size %zu is too large for ec_dev->din_size %d\n",
   VAR_15, VAR_7->din_size);
  return -VAR_4;
 }

 if (VAR_16 > VAR_7->dout_size) {
  FUNC_3(VAR_12,
   "Outgoing payload size %zu is too large for ec_dev->dout_size %d\n",
   VAR_16, VAR_7->dout_size);
  return -VAR_4;
 }


 if (!FUNC_5(&VAR_6)) {
  FUNC_4(VAR_12,
    "Host is not ready to send messages to ISH. Try again\n");
  return -VAR_1;
 }


 VAR_14->hdr.channel = VAR_0;
 VAR_14->hdr.status = 0;

 VAR_7->dout += VAR_5;
 FUNC_1(VAR_7, VAR_8);
 VAR_7->dout -= VAR_5;

 FUNC_2(VAR_12,
  "out_msg: struct_ver=0x%x checksum=0x%x command=0x%x command_ver=0x%x data_len=0x%x\n",
  VAR_14->ec_request.struct_version,
  VAR_14->ec_request.checksum,
  VAR_14->ec_request.command,
  VAR_14->ec_request.command_version,
  VAR_14->ec_request.data_len);


 VAR_9 = FUNC_6(VAR_11,
        (u8 *)VAR_14, VAR_16,
        (u8 *)VAR_13, VAR_15);
 if (VAR_9 < 0)
  goto end_error;

 VAR_9 = FUNC_9(VAR_7, VAR_13, VAR_8);
 if (VAR_9)
  goto end_error;

 VAR_9 = VAR_13->ec_response.data_len;

 FUNC_2(VAR_12,
  "in_msg: struct_ver=0x%x checksum=0x%x result=0x%x data_len=0x%x\n",
  VAR_13->ec_response.struct_version,
  VAR_13->ec_response.checksum,
  VAR_13->ec_response.result,
  VAR_13->ec_response.data_len);

end_error:
 if (VAR_8->command == VAR_2)
  FUNC_8(VAR_3);

 FUNC_10(&VAR_6);

 return VAR_9;
}
