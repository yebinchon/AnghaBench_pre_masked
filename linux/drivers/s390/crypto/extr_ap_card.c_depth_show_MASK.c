
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
struct ap_card {int queue_depth; } ;
typedef int ssize_t ;


 int VAR_0 ;
 int FUNC_0 (char*,int ,char*,int) ;
 struct ap_card* FUNC_1 (struct device*) ;

__attribute__((used)) static ssize_t FUNC_2(struct device *VAR_1, struct device_attribute *VAR_2,
     char *VAR_3)
{
 struct ap_card *VAR_4 = FUNC_1(VAR_1);

 return FUNC_0(VAR_3, VAR_0, "%d\n", VAR_4->queue_depth);
}
