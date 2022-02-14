
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iscsi_cls_session {int state; } ;
struct device_attribute {int dummy; } ;
struct device {int parent; } ;
typedef int ssize_t ;


 struct iscsi_cls_session* FUNC_0 (int ) ;
 char* FUNC_1 (int ) ;
 int FUNC_2 (char*,char*,char*) ;

__attribute__((used)) static ssize_t
FUNC_3(struct device *VAR_0, struct device_attribute *VAR_1,
   char *VAR_2)
{
 struct iscsi_cls_session *VAR_3 = FUNC_0(VAR_0->parent);
 return FUNC_2(VAR_2, "%s\n", FUNC_1(VAR_3->state));
}
