
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fcoe_ctlr_device {int enabled; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;


 int VAR_0 ;
 int VAR_1 ;
 struct fcoe_ctlr_device* FUNC_0 (struct device*) ;
 char* FUNC_1 (int ) ;
 int FUNC_2 (char*,int ,char*,char const*) ;

__attribute__((used)) static ssize_t FUNC_3(struct device *VAR_2,
           struct device_attribute *VAR_3,
           char *VAR_4)
{
 struct fcoe_ctlr_device *VAR_5 = FUNC_0(VAR_2);
 const char *VAR_6;

 VAR_6 = FUNC_1(VAR_5->enabled);
 if (!VAR_6)
  return -VAR_0;
 return FUNC_2(VAR_4, VAR_1,
   "%s\n", VAR_6);
}
