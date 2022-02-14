
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ec_response_get_comms_status {int flags; } ;
struct cros_ec_device {int proto_version; int (* pkt_xfer ) (struct cros_ec_device*,struct cros_ec_command*) ;int (* cmd_xfer ) (struct cros_ec_device*,struct cros_ec_command*) ;int dev; } ;
struct cros_ec_command {scalar_t__ result; int insize; scalar_t__ data; scalar_t__ outsize; int command; scalar_t__ version; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (struct cros_ec_command*) ;
 struct cros_ec_command* FUNC_2 (int,int ) ;
 int FUNC_3 (struct cros_ec_device*,struct cros_ec_command*) ;
 int FUNC_4 (struct cros_ec_device*,struct cros_ec_command*) ;
 int FUNC_5 (struct cros_ec_command*) ;
 int FUNC_6 (int,int) ;

__attribute__((used)) static int FUNC_7(struct cros_ec_device *VAR_9,
   struct cros_ec_command *VAR_10)
{
 int VAR_11;
 int (*VAR_12)(struct cros_ec_device *VAR_13, struct cros_ec_command *VAR_14);

 FUNC_5(VAR_10);

 if (VAR_9->proto_version > 2)
  VAR_12 = VAR_9->pkt_xfer;
 else
  VAR_12 = VAR_9->cmd_xfer;

 if (!VAR_12) {





  FUNC_0(VAR_9->dev,
        "missing EC transfer API, cannot send command\n");
  return -VAR_6;
 }

 VAR_11 = (*VAR_12)(VAR_9, VAR_10);
 if (VAR_10->result == VAR_4) {
  int VAR_15;
  struct cros_ec_command *VAR_16;
  struct ec_response_get_comms_status *VAR_17;

  VAR_16 = FUNC_2(sizeof(*VAR_16) + sizeof(*VAR_17),
         VAR_8);
  if (!VAR_16)
   return -VAR_7;

  VAR_16->version = 0;
  VAR_16->command = VAR_1;
  VAR_16->insize = sizeof(*VAR_17);
  VAR_16->outsize = 0;





  for (VAR_15 = 0; VAR_15 < VAR_2; VAR_15++) {
   FUNC_6(10000, 11000);

   VAR_11 = (*VAR_12)(VAR_9, VAR_16);
   if (VAR_11 == -VAR_0)
    continue;
   if (VAR_11 < 0)
    break;

   VAR_10->result = VAR_16->result;
   if (VAR_16->result != VAR_5)
    break;

   VAR_17 = (struct ec_response_get_comms_status *)
     VAR_16->data;
   if (!(VAR_17->flags & VAR_3))
    break;
  }

  FUNC_1(VAR_16);
 }

 return VAR_11;
}
