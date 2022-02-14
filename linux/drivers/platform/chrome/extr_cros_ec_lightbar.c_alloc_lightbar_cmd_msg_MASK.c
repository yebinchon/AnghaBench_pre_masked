
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ec_response_lightbar {int dummy; } ;
struct ec_params_lightbar {int dummy; } ;
struct cros_ec_dev {scalar_t__ cmd_offset; } ;
struct cros_ec_command {int outsize; int insize; scalar_t__ command; scalar_t__ version; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 struct cros_ec_command* FUNC_0 (int,int ) ;
 int FUNC_1 (int,int) ;

__attribute__((used)) static struct cros_ec_command *FUNC_2(struct cros_ec_dev *VAR_2)
{
 struct cros_ec_command *VAR_3;
 int VAR_4;

 VAR_4 = FUNC_1(sizeof(struct ec_params_lightbar),
    sizeof(struct ec_response_lightbar));

 VAR_3 = FUNC_0(sizeof(*VAR_3) + VAR_4, VAR_1);
 if (!VAR_3)
  return ((void*)0);

 VAR_3->version = 0;
 VAR_3->command = VAR_0 + VAR_2->cmd_offset;
 VAR_3->outsize = sizeof(struct ec_params_lightbar);
 VAR_3->insize = sizeof(struct ec_response_lightbar);

 return VAR_3;
}
