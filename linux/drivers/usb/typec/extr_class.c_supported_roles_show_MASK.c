
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
struct altmode {int roles; } ;
typedef int ssize_t ;





 int FUNC_0 (char*,char*) ;
 struct altmode* FUNC_1 (int ) ;
 int FUNC_2 (struct device*) ;

__attribute__((used)) static ssize_t
FUNC_3(struct device *VAR_0, struct device_attribute *VAR_1,
       char *VAR_2)
{
 struct altmode *VAR_3 = FUNC_1(FUNC_2(VAR_0));
 ssize_t VAR_4;

 switch (VAR_3->roles) {
 case 128:
  VAR_4 = FUNC_0(VAR_2, "source\n");
  break;
 case 129:
  VAR_4 = FUNC_0(VAR_2, "sink\n");
  break;
 case 130:
 default:
  VAR_4 = FUNC_0(VAR_2, "source sink\n");
  break;
 }
 return VAR_4;
}
