
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ishtp_cl_data {int cros_ish_cl; struct cros_ec_device* ec_dev; } ;
struct ec_response_get_protocol_info {int dummy; } ;
struct device {struct cros_ec_device* driver_data; } ;
struct cros_ish_out_msg {int dummy; } ;
struct cros_ish_in_msg {int dummy; } ;
struct cros_ec_device {int din_size; int dout_size; int phys_name; int pkt_xfer; int * cmd_xfer; int priv; struct device* dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct device* FUNC_0 (struct ishtp_cl_data*) ;
 int VAR_2 ;
 int FUNC_1 (struct cros_ec_device*) ;
 int FUNC_2 (struct device*) ;
 struct cros_ec_device* FUNC_3 (struct device*,int,int ) ;

__attribute__((used)) static int FUNC_4(struct ishtp_cl_data *VAR_3)
{
 struct cros_ec_device *VAR_4;
 struct device *VAR_5 = FUNC_0(VAR_3);

 VAR_4 = FUNC_3(VAR_5, sizeof(*VAR_4), VAR_1);
 if (!VAR_4)
  return -VAR_0;

 VAR_3->ec_dev = VAR_4;
 VAR_5->driver_data = VAR_4;

 VAR_4->dev = VAR_5;
 VAR_4->priv = VAR_3->cros_ish_cl;
 VAR_4->cmd_xfer = ((void*)0);
 VAR_4->pkt_xfer = VAR_2;
 VAR_4->phys_name = FUNC_2(VAR_5);
 VAR_4->din_size = sizeof(struct cros_ish_in_msg) +
      sizeof(struct ec_response_get_protocol_info);
 VAR_4->dout_size = sizeof(struct cros_ish_out_msg);

 return FUNC_1(VAR_4);
}
