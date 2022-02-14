
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ exe; } ;
struct audit_entry {TYPE_1__ rule; } ;




 int VAR_0 ;
 int FUNC_0 (struct audit_entry*) ;
 int FUNC_1 (struct audit_entry*) ;
 int FUNC_2 (int) ;
 int FUNC_3 (struct audit_entry*) ;
 struct audit_entry* FUNC_4 (void*,size_t) ;
 int FUNC_5 (struct audit_entry*) ;
 int FUNC_6 (struct audit_entry*) ;
 int FUNC_7 (char*,TYPE_1__*,int) ;
 int FUNC_8 (scalar_t__) ;

int FUNC_9(int VAR_1, int VAR_2, void *VAR_3, size_t VAR_4)
{
 int VAR_5 = 0;
 struct audit_entry *VAR_6;

 switch (VAR_1) {
 case 129:
  VAR_6 = FUNC_4(VAR_3, VAR_4);
  if (FUNC_0(VAR_6))
   return FUNC_1(VAR_6);
  VAR_5 = FUNC_3(VAR_6);
  FUNC_7("add_rule", &VAR_6->rule, !VAR_5);
  break;
 case 128:
  VAR_6 = FUNC_4(VAR_3, VAR_4);
  if (FUNC_0(VAR_6))
   return FUNC_1(VAR_6);
  VAR_5 = FUNC_5(VAR_6);
  FUNC_7("remove_rule", &VAR_6->rule, !VAR_5);
  break;
 default:
  FUNC_2(1);
  return -VAR_0;
 }

 if (VAR_5 || VAR_1 == 128) {
  if (VAR_6->rule.exe)
   FUNC_8(VAR_6->rule.exe);
  FUNC_6(VAR_6);
 }

 return VAR_5;
}
