
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
typedef int u16 ;
struct ec_response_get_cmd_versions {int version_mask; } ;
struct ec_params_get_cmd_versions {int cmd; } ;
struct cros_ec_device {int dummy; } ;
struct cros_ec_command {int insize; int outsize; scalar_t__ data; int command; scalar_t__ version; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct cros_ec_command*) ;
 struct cros_ec_command* FUNC_1 (scalar_t__,int ) ;
 scalar_t__ FUNC_2 (int,int) ;
 int FUNC_3 (struct cros_ec_device*,struct cros_ec_command*) ;

__attribute__((used)) static int FUNC_4(struct cros_ec_device *VAR_3,
 u16 VAR_4, u32 *VAR_5)
{
 struct ec_params_get_cmd_versions *VAR_6;
 struct ec_response_get_cmd_versions *VAR_7;
 struct cros_ec_command *VAR_8;
 int VAR_9;

 VAR_8 = FUNC_1(sizeof(*VAR_8) + FUNC_2(sizeof(*VAR_7), sizeof(*VAR_6)),
        VAR_2);
 if (!VAR_8)
  return -VAR_1;

 VAR_8->version = 0;
 VAR_8->command = VAR_0;
 VAR_8->insize = sizeof(*VAR_7);
 VAR_8->outsize = sizeof(*VAR_6);

 VAR_6 = (struct ec_params_get_cmd_versions *)VAR_8->data;
 VAR_6->cmd = VAR_4;

 VAR_9 = FUNC_3(VAR_3, VAR_8);
 if (VAR_9 > 0) {
  VAR_7 = (struct ec_response_get_cmd_versions *)VAR_8->data;
  *VAR_5 = VAR_7->version_mask;
 }

 FUNC_0(VAR_8);

 return VAR_9;
}
