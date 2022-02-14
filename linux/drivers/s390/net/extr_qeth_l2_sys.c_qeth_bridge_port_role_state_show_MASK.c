
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int role; scalar_t__ supported_funcs; } ;
struct TYPE_4__ {TYPE_1__ sbp; } ;
struct qeth_card {TYPE_2__ options; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;
typedef enum qeth_sbp_states { ____Placeholder_qeth_sbp_states } qeth_sbp_states ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct qeth_card*,int,char*,int,int) ;






 struct qeth_card* FUNC_1 (struct device*) ;
 int FUNC_2 (struct qeth_card*,int*,int*) ;
 scalar_t__ FUNC_3 (struct qeth_card*) ;
 scalar_t__ FUNC_4 (struct qeth_card*) ;
 int FUNC_5 (char*,char*,...) ;

__attribute__((used)) static ssize_t FUNC_6(struct device *VAR_2,
    struct device_attribute *VAR_3, char *VAR_4,
    int VAR_5)
{
 struct qeth_card *VAR_6 = FUNC_1(VAR_2);
 enum qeth_sbp_states VAR_7 = 129;
 int VAR_8 = 0;
 char *VAR_9;

 if (!VAR_6)
  return -VAR_0;

 if (FUNC_4(VAR_6))
  return FUNC_5(VAR_4, "n/a (VNIC characteristics)\n");

 if (FUNC_3(VAR_6) &&
     VAR_6->options.sbp.supported_funcs)
  VAR_8 = FUNC_2(VAR_6,
   &VAR_6->options.sbp.role, &VAR_7);
 if (!VAR_8) {
  if (VAR_5)
   switch (VAR_7) {
   case 129:
    VAR_9 = "inactive"; break;
   case 128:
    VAR_9 = "standby"; break;
   case 130:
    VAR_9 = "active"; break;
   default:
    VAR_8 = -VAR_1;
   }
  else
   switch (VAR_6->options.sbp.role) {
   case 133:
    VAR_9 = "none"; break;
   case 132:
    VAR_9 = "primary"; break;
   case 131:
    VAR_9 = "secondary"; break;
   default:
    VAR_8 = -VAR_1;
   }
  if (VAR_8)
   FUNC_0(VAR_6, 2, "SBP%02x:%02x",
    VAR_6->options.sbp.role, VAR_7);
  else
   VAR_8 = FUNC_5(VAR_4, "%s\n", VAR_9);
 }

 return VAR_8;
}
