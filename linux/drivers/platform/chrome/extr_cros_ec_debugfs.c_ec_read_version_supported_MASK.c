
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ec_response_get_cmd_versions {int version_mask; } ;
struct ec_params_get_cmd_versions_v1 {int cmd; } ;
struct cros_ec_dev {int ec_dev; scalar_t__ cmd_offset; } ;
struct cros_ec_command {int outsize; int insize; scalar_t__ data; scalar_t__ command; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int) ;
 int VAR_2 ;
 scalar_t__ FUNC_1 (int ,struct cros_ec_command*) ;
 int FUNC_2 (struct cros_ec_command*) ;
 struct cros_ec_command* FUNC_3 (scalar_t__,int ) ;
 scalar_t__ FUNC_4 (int,int) ;

__attribute__((used)) static int FUNC_5(struct cros_ec_dev *VAR_3)
{
 struct ec_params_get_cmd_versions_v1 *VAR_4;
 struct ec_response_get_cmd_versions *VAR_5;
 int VAR_6;

 struct cros_ec_command *VAR_7;

 VAR_7 = FUNC_3(sizeof(*VAR_7) + FUNC_4(sizeof(*VAR_4), sizeof(*VAR_5)),
  VAR_2);
 if (!VAR_7)
  return 0;

 VAR_7->command = VAR_1 + VAR_3->cmd_offset;
 VAR_7->outsize = sizeof(*VAR_4);
 VAR_7->insize = sizeof(*VAR_5);

 VAR_4 = (struct ec_params_get_cmd_versions_v1 *)VAR_7->data;
 VAR_4->cmd = VAR_0;
 VAR_5 = (struct ec_response_get_cmd_versions *)VAR_7->data;

 VAR_6 = FUNC_1(VAR_3->ec_dev, VAR_7) >= 0 &&
       VAR_5->version_mask & FUNC_0(1);

 FUNC_2(VAR_7);

 return VAR_6;
}
