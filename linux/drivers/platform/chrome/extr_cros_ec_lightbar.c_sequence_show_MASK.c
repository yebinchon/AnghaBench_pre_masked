
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ num; } ;
struct ec_response_lightbar {TYPE_1__ get_seq; } ;
struct ec_params_lightbar {int cmd; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
struct cros_ec_dev {int ec_dev; } ;
struct cros_ec_command {scalar_t__ result; scalar_t__ data; } ;
typedef int ssize_t ;


 scalar_t__ FUNC_0 (scalar_t__*) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct cros_ec_command* FUNC_1 (struct cros_ec_dev*) ;
 int FUNC_2 (int ,struct cros_ec_command*) ;
 int FUNC_3 (struct cros_ec_command*) ;
 int FUNC_4 () ;
 int FUNC_5 (char*,int ,char*,scalar_t__) ;
 scalar_t__* VAR_4 ;
 struct cros_ec_dev* FUNC_6 (struct device*) ;

__attribute__((used)) static ssize_t FUNC_7(struct device *VAR_5,
        struct device_attribute *VAR_6, char *VAR_7)
{
 struct ec_params_lightbar *VAR_8;
 struct ec_response_lightbar *VAR_9;
 struct cros_ec_command *VAR_10;
 int VAR_11;
 struct cros_ec_dev *VAR_12 = FUNC_6(VAR_5);

 VAR_10 = FUNC_1(VAR_12);
 if (!VAR_10)
  return -VAR_1;

 VAR_8 = (struct ec_params_lightbar *)VAR_10->data;
 VAR_8->cmd = VAR_2;
 VAR_11 = FUNC_4();
 if (VAR_11)
  goto exit;

 VAR_11 = FUNC_2(VAR_12->ec_dev, VAR_10);
 if (VAR_11 < 0)
  goto exit;

 if (VAR_10->result != VAR_0) {
  VAR_11 = FUNC_5(VAR_7, VAR_3,
    "ERROR: EC returned %d\n", VAR_10->result);
  goto exit;
 }

 VAR_9 = (struct ec_response_lightbar *)VAR_10->data;
 if (VAR_9->get_seq.num >= FUNC_0(VAR_4))
  VAR_11 = FUNC_5(VAR_7, VAR_3, "%d\n", VAR_9->get_seq.num);
 else
  VAR_11 = FUNC_5(VAR_7, VAR_3, "%s\n",
    VAR_4[VAR_9->get_seq.num]);

exit:
 FUNC_3(VAR_10);
 return VAR_11;
}
