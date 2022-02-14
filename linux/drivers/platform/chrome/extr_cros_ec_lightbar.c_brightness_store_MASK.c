
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {unsigned int num; } ;
struct ec_params_lightbar {TYPE_1__ set_brightness; int cmd; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
struct cros_ec_dev {int ec_dev; } ;
struct cros_ec_command {scalar_t__ result; scalar_t__ data; } ;
typedef int ssize_t ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct cros_ec_command* FUNC_0 (struct cros_ec_dev*) ;
 int FUNC_1 (int ,struct cros_ec_command*) ;
 int FUNC_2 (struct cros_ec_command*) ;
 scalar_t__ FUNC_3 (char const*,int ,unsigned int*) ;
 int FUNC_4 () ;
 struct cros_ec_dev* FUNC_5 (struct device*) ;

__attribute__((used)) static ssize_t FUNC_6(struct device *VAR_4,
    struct device_attribute *VAR_5,
    const char *VAR_6, size_t VAR_7)
{
 struct ec_params_lightbar *VAR_8;
 struct cros_ec_command *VAR_9;
 int VAR_10;
 unsigned int VAR_11;
 struct cros_ec_dev *VAR_12 = FUNC_5(VAR_4);

 if (FUNC_3(VAR_6, 0, &VAR_11))
  return -VAR_1;

 VAR_9 = FUNC_0(VAR_12);
 if (!VAR_9)
  return -VAR_2;

 VAR_8 = (struct ec_params_lightbar *)VAR_9->data;
 VAR_8->cmd = VAR_3;
 VAR_8->set_brightness.num = VAR_11;
 VAR_10 = FUNC_4();
 if (VAR_10)
  goto exit;

 VAR_10 = FUNC_1(VAR_12->ec_dev, VAR_9);
 if (VAR_10 < 0)
  goto exit;

 if (VAR_9->result != VAR_0) {
  VAR_10 = -VAR_1;
  goto exit;
 }

 VAR_10 = VAR_7;
exit:
 FUNC_2(VAR_9);
 return VAR_10;
}
