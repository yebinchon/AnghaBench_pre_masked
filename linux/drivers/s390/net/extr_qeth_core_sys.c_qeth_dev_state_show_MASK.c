
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct qeth_card {int state; TYPE_1__* dev; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;
struct TYPE_2__ {int flags; } ;





 int VAR_0 ;
 int VAR_1 ;
 struct qeth_card* FUNC_0 (struct device*) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (char*,char*,...) ;

__attribute__((used)) static ssize_t FUNC_3(struct device *VAR_2,
    struct device_attribute *VAR_3, char *VAR_4)
{
 struct qeth_card *VAR_5 = FUNC_0(VAR_2);
 if (!VAR_5)
  return -VAR_0;

 switch (VAR_5->state) {
 case 130:
  return FUNC_2(VAR_4, "DOWN\n");
 case 129:
  return FUNC_2(VAR_4, "HARDSETUP\n");
 case 128:
  if (VAR_5->dev->flags & VAR_1)
   return FUNC_2(VAR_4, "UP (LAN %s)\n",
           FUNC_1(VAR_5->dev) ? "ONLINE" :
             "OFFLINE");
  return FUNC_2(VAR_4, "SOFTSETUP\n");
 default:
  return FUNC_2(VAR_4, "UNKNOWN\n");
 }
}
