
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct device {int dummy; } ;
struct rpmsg_device {struct device dev; } ;
struct ec_response_get_protocol_info {int dummy; } ;
struct ec_host_response {int dummy; } ;
struct ec_host_request {int dummy; } ;
struct cros_ec_rpmsg {int host_event_work; int ept; int xfer_ack; struct rpmsg_device* rpdev; } ;
struct cros_ec_device {int din_size; int dout_size; int phys_name; int pkt_xfer; int cmd_xfer; struct cros_ec_rpmsg* priv; struct device* dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int ) ;
 int FUNC_1 (int *) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (struct cros_ec_device*) ;
 int FUNC_3 (struct rpmsg_device*) ;
 int VAR_4 ;
 int FUNC_4 (struct device*) ;
 int FUNC_5 (struct device*,struct cros_ec_device*) ;
 void* FUNC_6 (struct device*,int,int ) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int ) ;

__attribute__((used)) static int FUNC_9(struct rpmsg_device *VAR_5)
{
 struct device *VAR_6 = &VAR_5->dev;
 struct cros_ec_rpmsg *VAR_7;
 struct cros_ec_device *VAR_8;
 int VAR_9;

 VAR_8 = FUNC_6(VAR_6, sizeof(*VAR_8), VAR_1);
 if (!VAR_8)
  return -VAR_0;

 VAR_7 = FUNC_6(VAR_6, sizeof(*VAR_7), VAR_1);
 if (!VAR_7)
  return -VAR_0;

 VAR_8->dev = VAR_6;
 VAR_8->priv = VAR_7;
 VAR_8->cmd_xfer = VAR_2;
 VAR_8->pkt_xfer = VAR_3;
 VAR_8->phys_name = FUNC_4(&VAR_5->dev);
 VAR_8->din_size = sizeof(struct ec_host_response) +
      sizeof(struct ec_response_get_protocol_info);
 VAR_8->dout_size = sizeof(struct ec_host_request);
 FUNC_5(VAR_6, VAR_8);

 VAR_7->rpdev = VAR_5;
 FUNC_7(&VAR_7->xfer_ack);
 FUNC_0(&VAR_7->host_event_work,
    VAR_4);

 VAR_7->ept = FUNC_3(VAR_5);
 if (!VAR_7->ept)
  return -VAR_0;

 VAR_9 = FUNC_2(VAR_8);
 if (VAR_9 < 0) {
  FUNC_8(VAR_7->ept);
  FUNC_1(&VAR_7->host_event_work);
  return VAR_9;
 }

 return 0;
}
