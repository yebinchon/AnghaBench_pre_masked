
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cros_ec_device {int dev; } ;
struct cros_ec_command {scalar_t__ result; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct cros_ec_device*,struct cros_ec_command*) ;
 int FUNC_1 (int ,char*,scalar_t__) ;
 int FUNC_2 (int ,char*,int) ;

int FUNC_3(struct cros_ec_device *VAR_2,
       struct cros_ec_command *VAR_3)
{
 int VAR_4;

 VAR_4 = FUNC_0(VAR_2, VAR_3);
 if (VAR_4 < 0) {
  FUNC_2(VAR_2->dev, "Command xfer error (err:%d)\n", VAR_4);
 } else if (VAR_3->result != VAR_0) {
  FUNC_1(VAR_2->dev, "Command result (err: %d)\n", VAR_3->result);
  return -VAR_1;
 }

 return VAR_4;
}
