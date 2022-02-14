
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_2__ {int enable; } ;
struct ec_params_lightbar {TYPE_1__ manual_suspend_ctrl; int cmd; } ;
struct cros_ec_dev {int ec_dev; } ;
struct cros_ec_command {scalar_t__ result; scalar_t__ data; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct cros_ec_command* FUNC_0 (struct cros_ec_dev*) ;
 int FUNC_1 (int ,struct cros_ec_command*) ;
 int FUNC_2 (struct cros_ec_command*) ;
 int FUNC_3 () ;

__attribute__((used)) static int FUNC_4(struct cros_ec_dev *VAR_4, uint8_t VAR_5)
{
 struct ec_params_lightbar *VAR_6;
 struct cros_ec_command *VAR_7;
 int VAR_8;

 VAR_7 = FUNC_0(VAR_4);
 if (!VAR_7)
  return -VAR_2;

 VAR_6 = (struct ec_params_lightbar *)VAR_7->data;

 VAR_6->cmd = VAR_3;
 VAR_6->manual_suspend_ctrl.enable = VAR_5;

 VAR_8 = FUNC_3();
 if (VAR_8)
  goto error;

 VAR_8 = FUNC_1(VAR_4->ec_dev, VAR_7);
 if (VAR_8 < 0)
  goto error;
 if (VAR_7->result != VAR_0) {
  VAR_8 = -VAR_1;
  goto error;
 }
 VAR_8 = 0;
error:
 FUNC_2(VAR_7);

 return VAR_8;
}
