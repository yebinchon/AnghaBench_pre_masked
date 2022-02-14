
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct qedi_ctx {int link_state; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (int *) ;
 struct qedi_ctx* FUNC_1 (struct device*) ;
 int FUNC_2 (char*,char*) ;

__attribute__((used)) static ssize_t FUNC_3(struct device *VAR_1,
        struct device_attribute *VAR_2,
        char *VAR_3)
{
 struct qedi_ctx *VAR_4 = FUNC_1(VAR_1);

 if (FUNC_0(&VAR_4->link_state) == VAR_0)
  return FUNC_2(VAR_3, "Online\n");
 else
  return FUNC_2(VAR_3, "Linkdown\n");
}
