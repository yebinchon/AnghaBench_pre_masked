
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ec_response_get_protocol_info {int dummy; } ;
struct cros_ec_device {int dev; int pkt_xfer; } ;
struct cros_ec_command {int command; int insize; scalar_t__ result; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (int ,char*,int,int) ;
 int FUNC_2 (struct cros_ec_command*,int ,int) ;
 int FUNC_3 (struct cros_ec_device*,struct cros_ec_command*) ;

__attribute__((used)) static int FUNC_4(struct cros_ec_device *VAR_5,
         int VAR_6,
         struct cros_ec_command *VAR_7)
{






 int VAR_8;

 if (!VAR_5->pkt_xfer)
  return -VAR_4;

 FUNC_2(VAR_7, 0, sizeof(*VAR_7));
 VAR_7->command = FUNC_0(VAR_6) | VAR_0;
 VAR_7->insize = sizeof(struct ec_response_get_protocol_info);

 VAR_8 = FUNC_3(VAR_5, VAR_7);

 if (VAR_8 < 0) {
  FUNC_1(VAR_5->dev,
   "failed to check for EC[%d] protocol version: %d\n",
   VAR_6, VAR_8);
  return VAR_8;
 }

 if (VAR_6 > 0 && VAR_7->result == VAR_1)
  return -VAR_3;
 else if (VAR_7->result != VAR_2)
  return VAR_7->result;

 return 0;
}
