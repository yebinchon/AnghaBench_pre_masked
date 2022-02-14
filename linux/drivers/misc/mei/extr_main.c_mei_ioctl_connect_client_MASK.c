
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int protocol_version; int max_msg_length; scalar_t__ fixed_address; } ;
struct mei_me_client {TYPE_1__ props; int client_id; } ;
struct mei_device {scalar_t__ dev_state; int dev; int hbm_f_fa_supported; int allow_fixed_address; scalar_t__ override_fixed_address; } ;
struct mei_client {int protocol_version; int max_msg_length; } ;
struct mei_connect_client_data {struct mei_client out_client_properties; int in_client_uuid; } ;
struct mei_cl {scalar_t__ state; struct mei_device* dev; } ;
struct file {struct mei_cl* private_data; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_0 (int ,char*,...) ;
 int FUNC_1 (struct mei_cl*,struct mei_me_client*,struct file*) ;
 struct mei_me_client* FUNC_2 (struct mei_device*,int *) ;
 int FUNC_3 (struct mei_me_client*) ;

__attribute__((used)) static int FUNC_4(struct file *VAR_6,
   struct mei_connect_client_data *VAR_7)
{
 struct mei_device *VAR_8;
 struct mei_client *VAR_9;
 struct mei_me_client *VAR_10;
 struct mei_cl *VAR_11;
 int VAR_12;

 VAR_11 = VAR_6->private_data;
 VAR_8 = VAR_11->dev;

 if (VAR_8->dev_state != VAR_3)
  return -VAR_1;

 if (VAR_11->state != VAR_5 &&
     VAR_11->state != VAR_4)
  return -VAR_0;


 VAR_10 = FUNC_2(VAR_8, &VAR_7->in_client_uuid);
 if (!VAR_10) {
  FUNC_0(VAR_8->dev, "Cannot connect to FW Client UUID = %pUl\n",
   &VAR_7->in_client_uuid);
  VAR_12 = -VAR_2;
  goto end;
 }

 if (VAR_10->props.fixed_address) {
  bool VAR_13 = VAR_8->override_fixed_address ?
    !VAR_8->allow_fixed_address : !VAR_8->hbm_f_fa_supported;
  if (VAR_13) {
   FUNC_0(VAR_8->dev, "Connection forbidden to FW Client UUID = %pUl\n",
    &VAR_7->in_client_uuid);
   VAR_12 = -VAR_2;
   goto end;
  }
 }

 FUNC_0(VAR_8->dev, "Connect to FW Client ID = %d\n",
   VAR_10->client_id);
 FUNC_0(VAR_8->dev, "FW Client - Protocol Version = %d\n",
   VAR_10->props.protocol_version);
 FUNC_0(VAR_8->dev, "FW Client - Max Msg Len = %d\n",
   VAR_10->props.max_msg_length);


 VAR_9 = &VAR_7->out_client_properties;
 VAR_9->max_msg_length = VAR_10->props.max_msg_length;
 VAR_9->protocol_version = VAR_10->props.protocol_version;
 FUNC_0(VAR_8->dev, "Can connect?\n");

 VAR_12 = FUNC_1(VAR_11, VAR_10, VAR_6);

end:
 FUNC_3(VAR_10);
 return VAR_12;
}
