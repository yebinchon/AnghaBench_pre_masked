
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int tmp_hsuid ;
struct TYPE_2__ {int hsuid; } ;
struct qeth_card {TYPE_1__ options; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;


 int FUNC_0 (char*,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (struct qeth_card*) ;
 struct qeth_card* FUNC_2 (struct device*) ;
 int FUNC_3 (char*,int ,int) ;
 int FUNC_4 (char*,char*,char*) ;

__attribute__((used)) static ssize_t FUNC_5(struct device *VAR_2,
  struct device_attribute *VAR_3, char *VAR_4)
{
 struct qeth_card *VAR_5 = FUNC_2(VAR_2);
 char VAR_6[9];

 if (!VAR_5)
  return -VAR_0;

 if (!FUNC_1(VAR_5))
  return -VAR_1;

 FUNC_3(VAR_6, VAR_5->options.hsuid, sizeof(VAR_6));
 FUNC_0(VAR_6, 8);
 return FUNC_4(VAR_4, "%s\n", VAR_6);
}
