
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u16 ;
struct ec_response_motion_sense {int dummy; } ;
struct TYPE_2__ {int data; } ;
struct ec_params_motion_sense {TYPE_1__ kb_wake_angle; int cmd; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
struct cros_ec_dev {int ec_dev; scalar_t__ cmd_offset; } ;
struct cros_ec_command {int version; int outsize; int insize; scalar_t__ command; scalar_t__ data; } ;
typedef int ssize_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ,struct cros_ec_command*) ;
 int FUNC_1 (struct cros_ec_command*) ;
 struct cros_ec_command* FUNC_2 (scalar_t__,int ) ;
 int FUNC_3 (char const*,int ,int *) ;
 struct cros_ec_dev* FUNC_4 (struct device*) ;

__attribute__((used)) static ssize_t FUNC_5(struct device *VAR_5,
       struct device_attribute *VAR_6,
       const char *VAR_7, size_t VAR_8)
{
 struct cros_ec_dev *VAR_9 = FUNC_4(VAR_5);
 struct ec_params_motion_sense *VAR_10;
 struct cros_ec_command *VAR_11;
 u16 VAR_12;
 int VAR_13;

 VAR_13 = FUNC_3(VAR_7, 0, &VAR_12);
 if (VAR_13)
  return VAR_13;

 VAR_11 = FUNC_2(sizeof(*VAR_11) + VAR_1, VAR_3);
 if (!VAR_11)
  return -VAR_2;

 VAR_10 = (struct ec_params_motion_sense *)VAR_11->data;
 VAR_11->command = VAR_0 + VAR_9->cmd_offset;
 VAR_11->version = 2;
 VAR_10->cmd = VAR_4;
 VAR_10->kb_wake_angle.data = VAR_12;
 VAR_11->outsize = sizeof(*VAR_10);
 VAR_11->insize = sizeof(struct ec_response_motion_sense);

 VAR_13 = FUNC_0(VAR_9->ec_dev, VAR_11);
 FUNC_1(VAR_11);
 if (VAR_13 < 0)
  return VAR_13;
 return VAR_8;
}
