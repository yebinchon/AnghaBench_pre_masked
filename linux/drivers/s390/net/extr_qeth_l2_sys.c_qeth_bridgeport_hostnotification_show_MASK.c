
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int hostnotification; } ;
struct TYPE_4__ {TYPE_1__ sbp; } ;
struct qeth_card {TYPE_2__ options; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;


 int VAR_0 ;
 struct qeth_card* FUNC_0 (struct device*) ;
 scalar_t__ FUNC_1 (struct qeth_card*) ;
 int FUNC_2 (char*,char*,...) ;

__attribute__((used)) static ssize_t FUNC_3(struct device *VAR_1,
    struct device_attribute *VAR_2, char *VAR_3)
{
 struct qeth_card *VAR_4 = FUNC_0(VAR_1);
 int VAR_5;

 if (!VAR_4)
  return -VAR_0;

 if (FUNC_1(VAR_4))
  return FUNC_2(VAR_3, "n/a (VNIC characteristics)\n");

 VAR_5 = VAR_4->options.sbp.hostnotification;

 return FUNC_2(VAR_3, "%d\n", VAR_5);
}
