
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ec_response_hello {int out_data; } ;
struct ec_params_hello {int in_data; } ;
struct cros_ec_device {int dev; } ;
struct cros_ec_command {int outsize; int insize; int result; scalar_t__ data; int command; scalar_t__ version; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ,char*,int) ;
 int FUNC_1 (int ,char*,int) ;
 int FUNC_2 (struct cros_ec_command*) ;
 struct cros_ec_command* FUNC_3 (int,int ) ;
 int FUNC_4 (int,int) ;
 int FUNC_5 (struct cros_ec_device*,struct cros_ec_command*) ;

__attribute__((used)) static int FUNC_6(struct cros_ec_device *VAR_5)
{
 struct cros_ec_command *VAR_6;
 struct ec_params_hello *VAR_7;
 struct ec_response_hello *VAR_8;
 int VAR_9;
 int VAR_10 = FUNC_4(sizeof(*VAR_7), sizeof(*VAR_8));

 VAR_6 = FUNC_3(sizeof(*VAR_6) + VAR_10, VAR_4);
 if (!VAR_6)
  return -VAR_3;

 VAR_6->version = 0;
 VAR_6->command = VAR_1;
 VAR_7 = (struct ec_params_hello *)VAR_6->data;
 VAR_6->outsize = sizeof(*VAR_7);
 VAR_8 = (struct ec_response_hello *)VAR_6->data;
 VAR_6->insize = sizeof(*VAR_8);

 VAR_7->in_data = 0xa0b0c0d0;

 VAR_9 = FUNC_5(VAR_5, VAR_6);

 if (VAR_9 < 0) {
  FUNC_0(VAR_5->dev,
   "EC failed to respond to v2 hello: %d\n",
   VAR_9);
  goto exit;
 } else if (VAR_6->result != VAR_2) {
  FUNC_1(VAR_5->dev,
   "EC responded to v2 hello with error: %d\n",
   VAR_6->result);
  VAR_9 = VAR_6->result;
  goto exit;
 } else if (VAR_8->out_data != 0xa1b2c3d4) {
  FUNC_1(VAR_5->dev,
   "EC responded to v2 hello with bad result: %u\n",
   VAR_8->out_data);
  VAR_9 = -VAR_0;
  goto exit;
 }

 VAR_9 = 0;

 exit:
 FUNC_2(VAR_6);
 return VAR_9;
}
