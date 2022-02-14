
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cros_ec_device {int dev; } ;
struct cros_ec_command {int result; int command; } ;


 int VAR_0 ;


 int FUNC_0 (int ,char*,int ,...) ;

int FUNC_1(struct cros_ec_device *VAR_1,
    struct cros_ec_command *VAR_2)
{
 switch (VAR_2->result) {
 case 128:
  return 0;
 case 129:
  FUNC_0(VAR_1->dev, "command 0x%02x in progress\n",
   VAR_2->command);
  return -VAR_0;
 default:
  FUNC_0(VAR_1->dev, "command 0x%02x returned %d\n",
   VAR_2->command, VAR_2->result);
  return 0;
 }
}
