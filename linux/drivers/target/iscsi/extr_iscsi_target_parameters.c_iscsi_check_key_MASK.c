
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iscsi_param_list {int dummy; } ;
struct iscsi_param {char* name; int phase; } ;


 scalar_t__ FUNC_0 (struct iscsi_param*) ;
 int FUNC_1 (struct iscsi_param*) ;
 int FUNC_2 (struct iscsi_param*) ;
 scalar_t__ VAR_0 ;


 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct iscsi_param* FUNC_3 (char*,struct iscsi_param_list*) ;
 int FUNC_4 (char*) ;
 int FUNC_5 (char*,char*,...) ;
 scalar_t__ FUNC_6 (char*) ;

__attribute__((used)) static struct iscsi_param *FUNC_7(
 char *VAR_4,
 int VAR_5,
 int VAR_6,
 struct iscsi_param_list *VAR_7)
{
 struct iscsi_param *VAR_8;



 if (FUNC_6(VAR_4) > VAR_0) {
  FUNC_5("Length of key name \"%s\" exceeds %d.\n",
   VAR_4, VAR_0);
  return ((void*)0);
 }

 VAR_8 = FUNC_3(VAR_4, VAR_7);
 if (!VAR_8)
  return ((void*)0);

 if ((VAR_6 & VAR_1) && !FUNC_1(VAR_8)) {
  FUNC_5("Key \"%s\" may not be sent to %s,"
   " protocol error.\n", VAR_8->name,
   (VAR_6 & VAR_2) ? "target" : "initiator");
  return ((void*)0);
 }
 if ((VAR_6 & VAR_3) && !FUNC_2(VAR_8)) {
  FUNC_5("Key \"%s\" may not be sent to %s,"
    " protocol error.\n", VAR_8->name,
   (VAR_6 & VAR_2) ? "initiator" : "target");
  return ((void*)0);
 }

 if (FUNC_0(VAR_8)) {
  FUNC_5("Key \"%s\" received twice, protocol error.\n",
    VAR_4);
  return ((void*)0);
 }

 if (!VAR_5)
  return VAR_8;

 if (!(VAR_8->phase & VAR_5)) {
  FUNC_5("Key \"%s\" may not be negotiated during ",
    VAR_8->name);
  switch (VAR_5) {
  case 128:
   FUNC_4("Security phase.\n");
   break;
  case 129:
   FUNC_4("Operational phase.\n");
   break;
  default:
   FUNC_4("Unknown phase.\n");
  }
  return ((void*)0);
 }

 return VAR_8;
}
