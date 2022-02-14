
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iscsi_param_list {int dummy; } ;
struct iscsi_param {char* name; } ;


 int FUNC_0 (struct iscsi_param*) ;
 int FUNC_1 (struct iscsi_param*) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct iscsi_param* FUNC_2 (char*,struct iscsi_param_list*) ;
 int FUNC_3 (char*,char*,char*) ;
 scalar_t__ FUNC_4 (char*) ;

__attribute__((used)) static struct iscsi_param *FUNC_5(
 char *VAR_4,
 int VAR_5,
 struct iscsi_param_list *VAR_6)
{
 struct iscsi_param *VAR_7;

 if (FUNC_4(VAR_4) > VAR_0) {
  FUNC_3("Length of key name \"%s\" exceeds %d.\n",
   VAR_4, VAR_0);
  return ((void*)0);
 }

 VAR_7 = FUNC_2(VAR_4, VAR_6);
 if (!VAR_7)
  return ((void*)0);

 if ((VAR_5 & VAR_1) && !FUNC_0(VAR_7)) {
  FUNC_3("Key \"%s\" may not be sent to %s,"
   " protocol error.\n", VAR_7->name,
   (VAR_5 & VAR_2) ? "target" : "initiator");
  return ((void*)0);
 }

 if ((VAR_5 & VAR_3) && !FUNC_1(VAR_7)) {
  FUNC_3("Key \"%s\" may not be sent to %s,"
   " protocol error.\n", VAR_7->name,
   (VAR_5 & VAR_2) ? "initiator" : "target");
  return ((void*)0);
 }

 return VAR_7;
}
