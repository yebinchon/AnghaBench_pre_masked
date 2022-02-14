
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int ret; } ;
struct ec_response_motion_sense {TYPE_2__ kb_wake_angle; } ;
struct TYPE_3__ {int data; } ;
struct ec_params_motion_sense {TYPE_1__ kb_wake_angle; int cmd; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
struct cros_ec_dev {int ec_dev; scalar_t__ cmd_offset; } ;
struct cros_ec_command {int version; int outsize; int insize; scalar_t__ data; scalar_t__ command; } ;
typedef int ssize_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int ,struct cros_ec_command*) ;
 int FUNC_1 (struct cros_ec_command*) ;
 struct cros_ec_command* FUNC_2 (scalar_t__,int ) ;
 int FUNC_3 (char*,int ,char*,int ) ;
 struct cros_ec_dev* FUNC_4 (struct device*) ;

__attribute__((used)) static ssize_t FUNC_5(struct device *VAR_7,
      struct device_attribute *VAR_8, char *VAR_9)
{
 struct cros_ec_dev *VAR_10 = FUNC_4(VAR_7);
 struct ec_response_motion_sense *VAR_11;
 struct ec_params_motion_sense *VAR_12;
 struct cros_ec_command *VAR_13;
 int VAR_14;

 VAR_13 = FUNC_2(sizeof(*VAR_13) + VAR_1, VAR_4);
 if (!VAR_13)
  return -VAR_3;

 VAR_12 = (struct ec_params_motion_sense *)VAR_13->data;
 VAR_13->command = VAR_0 + VAR_10->cmd_offset;
 VAR_13->version = 2;
 VAR_12->cmd = VAR_5;
 VAR_12->kb_wake_angle.data = VAR_2;
 VAR_13->outsize = sizeof(*VAR_12);
 VAR_13->insize = sizeof(*VAR_11);

 VAR_14 = FUNC_0(VAR_10->ec_dev, VAR_13);
 if (VAR_14 < 0)
  goto exit;

 VAR_11 = (struct ec_response_motion_sense *)VAR_13->data;
 VAR_14 = FUNC_3(VAR_9, VAR_6, "%d\n", VAR_11->kb_wake_angle.ret);
exit:
 FUNC_1(VAR_13);
 return VAR_14;
}
