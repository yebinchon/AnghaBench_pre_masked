
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cros_ec_device {scalar_t__ proto_version; scalar_t__ max_response; scalar_t__ max_request; scalar_t__ max_passthru; int lock; int dev; } ;
struct cros_ec_command {scalar_t__ insize; scalar_t__ command; scalar_t__ outsize; } ;


 scalar_t__ FUNC_0 (int) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (struct cros_ec_device*) ;
 int FUNC_2 (int ,char*) ;
 int FUNC_3 (int ,char*,...) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (struct cros_ec_device*,struct cros_ec_command*) ;

int FUNC_7(struct cros_ec_device *VAR_2,
       struct cros_ec_command *VAR_3)
{
 int VAR_4;

 FUNC_4(&VAR_2->lock);
 if (VAR_2->proto_version == VAR_0) {
  VAR_4 = FUNC_1(VAR_2);
  if (VAR_4) {
   FUNC_3(VAR_2->dev,
    "EC version unknown and query failed; aborting command\n");
   FUNC_5(&VAR_2->lock);
   return VAR_4;
  }
 }

 if (VAR_3->insize > VAR_2->max_response) {
  FUNC_2(VAR_2->dev, "clamping message receive buffer\n");
  VAR_3->insize = VAR_2->max_response;
 }

 if (VAR_3->command < FUNC_0(1)) {
  if (VAR_3->outsize > VAR_2->max_request) {
   FUNC_3(VAR_2->dev,
    "request of size %u is too big (max: %u)\n",
    VAR_3->outsize,
    VAR_2->max_request);
   FUNC_5(&VAR_2->lock);
   return -VAR_1;
  }
 } else {
  if (VAR_3->outsize > VAR_2->max_passthru) {
   FUNC_3(VAR_2->dev,
    "passthru rq of size %u is too big (max: %u)\n",
    VAR_3->outsize,
    VAR_2->max_passthru);
   FUNC_5(&VAR_2->lock);
   return -VAR_1;
  }
 }
 VAR_4 = FUNC_6(VAR_2, VAR_3);
 FUNC_5(&VAR_2->lock);

 return VAR_4;
}
