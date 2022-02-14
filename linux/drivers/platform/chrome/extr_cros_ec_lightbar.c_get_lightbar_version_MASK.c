
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_2__ {int flags; int num; } ;
struct ec_response_lightbar {TYPE_1__ version; } ;
struct ec_params_lightbar {int cmd; } ;
struct cros_ec_dev {int ec_dev; } ;
struct cros_ec_command {int result; scalar_t__ data; } ;




 int VAR_0 ;
 struct cros_ec_command* FUNC_0 (struct cros_ec_dev*) ;
 int FUNC_1 (int ,struct cros_ec_command*) ;
 int FUNC_2 (struct cros_ec_command*) ;

__attribute__((used)) static int FUNC_3(struct cros_ec_dev *VAR_1,
    uint32_t *VAR_2, uint32_t *VAR_3)
{
 struct ec_params_lightbar *VAR_4;
 struct ec_response_lightbar *VAR_5;
 struct cros_ec_command *VAR_6;
 int VAR_7;

 VAR_6 = FUNC_0(VAR_1);
 if (!VAR_6)
  return 0;

 VAR_4 = (struct ec_params_lightbar *)VAR_6->data;
 VAR_4->cmd = VAR_0;
 VAR_7 = FUNC_1(VAR_1->ec_dev, VAR_6);
 if (VAR_7 < 0) {
  VAR_7 = 0;
  goto exit;
 }

 switch (VAR_6->result) {
 case 129:

  if (VAR_2)
   *VAR_2 = 0;
  if (VAR_3)
   *VAR_3 = 0;
  VAR_7 = 1;
  goto exit;

 case 128:
  VAR_5 = (struct ec_response_lightbar *)VAR_6->data;


  if (VAR_2)
   *VAR_2 = VAR_5->version.num;
  if (VAR_3)
   *VAR_3 = VAR_5->version.flags;
  VAR_7 = 1;
  goto exit;
 }


 VAR_7 = 0;
exit:
 FUNC_2(VAR_6);
 return VAR_7;
}
