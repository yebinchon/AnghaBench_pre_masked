
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct qeth_card {int dummy; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;


 struct qeth_card* FUNC_0 (struct device*) ;
 int FUNC_1 (struct device*,struct device_attribute*,char*,int) ;
 scalar_t__ FUNC_2 (struct qeth_card*) ;
 int FUNC_3 (char*,char*) ;

__attribute__((used)) static ssize_t FUNC_4(struct device *VAR_0,
    struct device_attribute *VAR_1, char *VAR_2)
{
 struct qeth_card *VAR_3 = FUNC_0(VAR_0);

 if (FUNC_2(VAR_3))
  return FUNC_3(VAR_2, "n/a (VNIC characteristics)\n");

 return FUNC_1(VAR_0, VAR_1, VAR_2, 1);
}
