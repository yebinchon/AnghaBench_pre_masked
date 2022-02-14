
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct qeth_card {int dummy; } ;
struct TYPE_2__ {int name; } ;
struct device_attribute {TYPE_1__ attr; } ;
struct device {int dummy; } ;
typedef int ssize_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct qeth_card* FUNC_0 (struct device*) ;
 int FUNC_1 (struct qeth_card*,int ,int*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (char*,char*,...) ;

__attribute__((used)) static ssize_t FUNC_4(struct device *VAR_3,
        struct device_attribute *VAR_4, char *VAR_5)
{
 struct qeth_card *VAR_6 = FUNC_0(VAR_3);
 bool VAR_7;
 u32 VAR_8;
 int VAR_9;

 if (!VAR_6)
  return -VAR_1;

 VAR_8 = FUNC_2(VAR_4->attr.name);
 VAR_9 = FUNC_1(VAR_6, VAR_8, &VAR_7);

 if (VAR_9 == -VAR_0)
  return FUNC_3(VAR_5, "n/a (BridgePort)\n");
 if (VAR_9 == -VAR_2)
  return FUNC_3(VAR_5, "n/a\n");
 return VAR_9 ? VAR_9 : FUNC_3(VAR_5, "%d\n", VAR_7);
}
