
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fc_rport {scalar_t__ supported_classes; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (scalar_t__,char*) ;
 int FUNC_1 (char*,int,char*) ;
 struct fc_rport* FUNC_2 (struct device*) ;

__attribute__((used)) static ssize_t
FUNC_3 (struct device *VAR_1,
     struct device_attribute *VAR_2, char *VAR_3)
{
 struct fc_rport *VAR_4 = FUNC_2(VAR_1);
 if (VAR_4->supported_classes == VAR_0)
  return FUNC_1(VAR_3, 20, "unspecified\n");
 return FUNC_0(VAR_4->supported_classes, VAR_3);
}
