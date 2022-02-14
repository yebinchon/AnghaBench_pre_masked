
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {size_t size; int data; } ;
struct ec_params_lightbar {TYPE_1__ set_program; int cmd; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
struct cros_ec_dev {TYPE_2__* ec_dev; } ;
struct cros_ec_command {size_t outsize; scalar_t__ result; scalar_t__ data; } ;
typedef int ssize_t ;
struct TYPE_4__ {scalar_t__ max_request; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 struct cros_ec_command* FUNC_0 (struct cros_ec_dev*) ;
 int FUNC_1 (TYPE_2__*,struct cros_ec_command*) ;
 int FUNC_2 (struct device*,char*,unsigned int,int) ;
 int FUNC_3 (struct device*,char*,size_t) ;
 int FUNC_4 (struct cros_ec_command*) ;
 int FUNC_5 () ;
 int FUNC_6 (int ,char const*,size_t) ;
 int FUNC_7 (int ,scalar_t__) ;
 struct cros_ec_dev* FUNC_8 (struct device*) ;

__attribute__((used)) static ssize_t FUNC_9(struct device *VAR_5, struct device_attribute *VAR_6,
        const char *VAR_7, size_t VAR_8)
{
 int VAR_9, VAR_10, VAR_11;
 struct ec_params_lightbar *VAR_12;
 struct cros_ec_command *VAR_13;
 struct cros_ec_dev *VAR_14 = FUNC_8(VAR_5);
 VAR_9 = sizeof(*VAR_12) - sizeof(VAR_12->set_program.data);
 VAR_10 = FUNC_7(VAR_0, VAR_14->ec_dev->max_request - VAR_9);
 if (VAR_8 > VAR_10) {
  FUNC_2(VAR_5, "Program is %u bytes, too long to send (max: %u)",
   (unsigned int)VAR_8, VAR_10);

  return -VAR_2;
 }

 VAR_13 = FUNC_0(VAR_14);
 if (!VAR_13)
  return -VAR_3;

 VAR_11 = FUNC_5();
 if (VAR_11)
  goto exit;

 FUNC_3(VAR_5, "Copying %zu byte program to EC", VAR_8);

 VAR_12 = (struct ec_params_lightbar *)VAR_13->data;
 VAR_12->cmd = VAR_4;

 VAR_12->set_program.size = VAR_8;
 FUNC_6(VAR_12->set_program.data, VAR_7, VAR_8);






 VAR_13->outsize = VAR_8 + VAR_9;

 VAR_11 = FUNC_1(VAR_14->ec_dev, VAR_13);
 if (VAR_11 < 0)
  goto exit;
 if (VAR_13->result != VAR_1) {
  VAR_11 = -VAR_2;
  goto exit;
 }

 VAR_11 = VAR_8;
exit:
 FUNC_4(VAR_13);

 return VAR_11;
}
