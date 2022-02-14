
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct qeth_card {TYPE_1__* gdev; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef size_t ssize_t ;
struct TYPE_2__ {int dev; } ;


 struct qeth_card* FUNC_0 (struct device*) ;
 int FUNC_1 (int *,char*) ;

__attribute__((used)) static ssize_t FUNC_2(struct device *VAR_0,
  struct device_attribute *VAR_1, const char *VAR_2, size_t VAR_3)
{
 struct qeth_card *VAR_4 = FUNC_0(VAR_0);

 FUNC_1(&VAR_4->gdev->dev,
        "portname is deprecated and is ignored\n");
 return VAR_3;
}
