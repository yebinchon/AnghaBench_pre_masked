
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct logger_data {scalar_t__ ec_buffer; struct cros_ec_dev* ec_dev; } ;
struct ec_response_pd_log {int dummy; } ;
struct cros_ec_dev {int ec_dev; scalar_t__ cmd_offset; } ;
struct cros_ec_command {scalar_t__ data; int insize; scalar_t__ command; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 struct ec_response_pd_log* FUNC_0 (int) ;
 int FUNC_1 (int ,struct cros_ec_command*) ;

__attribute__((used)) static struct ec_response_pd_log *FUNC_2(struct logger_data *VAR_2)
{
 struct cros_ec_dev *VAR_3 = VAR_2->ec_dev;
 struct cros_ec_command *VAR_4;
 int VAR_5;

 VAR_4 = (struct cros_ec_command *)VAR_2->ec_buffer;

 VAR_4->command = VAR_3->cmd_offset + VAR_1;
 VAR_4->insize = VAR_0;

 VAR_5 = FUNC_1(VAR_3->ec_dev, VAR_4);
 if (VAR_5 < 0)
  return FUNC_0(VAR_5);

 return (struct ec_response_pd_log *)VAR_4->data;
}
