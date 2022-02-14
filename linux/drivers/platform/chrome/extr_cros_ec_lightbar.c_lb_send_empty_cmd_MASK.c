
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
struct ec_params_lightbar {int cmd; } ;
struct cros_ec_dev {int ec_dev; } ;
struct cros_ec_command {scalar_t__ result; scalar_t__ data; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct cros_ec_command* FUNC_0 (struct cros_ec_dev*) ;
 int FUNC_1 (int ,struct cros_ec_command*) ;
 int FUNC_2 (struct cros_ec_command*) ;
 int FUNC_3 () ;

__attribute__((used)) static int FUNC_4(struct cros_ec_dev *VAR_3, uint8_t VAR_4)
{
 struct ec_params_lightbar *VAR_5;
 struct cros_ec_command *VAR_6;
 int VAR_7;

 VAR_6 = FUNC_0(VAR_3);
 if (!VAR_6)
  return -VAR_2;

 VAR_5 = (struct ec_params_lightbar *)VAR_6->data;
 VAR_5->cmd = VAR_4;

 VAR_7 = FUNC_3();
 if (VAR_7)
  goto error;

 VAR_7 = FUNC_1(VAR_3->ec_dev, VAR_6);
 if (VAR_7 < 0)
  goto error;
 if (VAR_6->result != VAR_0) {
  VAR_7 = -VAR_1;
  goto error;
 }
 VAR_7 = 0;
error:
 FUNC_2(VAR_6);

 return VAR_7;
}
