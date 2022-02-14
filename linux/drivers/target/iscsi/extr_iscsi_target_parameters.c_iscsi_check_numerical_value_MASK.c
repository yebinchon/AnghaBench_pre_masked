
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iscsi_param {int name; } ;


 scalar_t__ FUNC_0 (struct iscsi_param*) ;
 scalar_t__ FUNC_1 (struct iscsi_param*) ;
 scalar_t__ FUNC_2 (struct iscsi_param*) ;
 scalar_t__ FUNC_3 (struct iscsi_param*) ;
 scalar_t__ FUNC_4 (struct iscsi_param*) ;
 scalar_t__ FUNC_5 (struct iscsi_param*) ;
 scalar_t__ FUNC_6 (struct iscsi_param*) ;
 int FUNC_7 (char*,int ) ;
 int FUNC_8 (char*,char**,int ) ;

__attribute__((used)) static int FUNC_9(struct iscsi_param *VAR_0, char *VAR_1)
{
 char *VAR_2;
 int VAR_3 = 0;

 VAR_3 = FUNC_8(VAR_1, &VAR_2, 0);

 if (FUNC_0(VAR_0)) {
  if ((VAR_3 < 0) || (VAR_3 > 2)) {
   FUNC_7("Illegal value for \"%s\", must be"
    " between 0 and 2.\n", VAR_0->name);
   return -1;
  }
  return 0;
 }
 if (FUNC_2(VAR_0)) {
  if ((VAR_3 < 0) || (VAR_3 > 3600)) {
   FUNC_7("Illegal value for \"%s\", must be"
    " between 0 and 3600.\n", VAR_0->name);
   return -1;
  }
  return 0;
 }
 if (FUNC_1(VAR_0)) {
  if ((VAR_3 < 0) || (VAR_3 > 32767)) {
   FUNC_7("Illegal value for \"%s\", must be"
    " between 0 and 32767.\n", VAR_0->name);
   return -1;
  }
  return 0;
 }
 if (FUNC_3(VAR_0)) {
  if ((VAR_3 < 0) || (VAR_3 > 65535)) {
   FUNC_7("Illegal value for \"%s\", must be"
    " between 0 and 65535.\n", VAR_0->name);
   return -1;
  }
  return 0;
 }
 if (FUNC_4(VAR_0)) {
  if ((VAR_3 < 1) || (VAR_3 > 65535)) {
   FUNC_7("Illegal value for \"%s\", must be"
    " between 1 and 65535.\n", VAR_0->name);
   return -1;
  }
  return 0;
 }
 if (FUNC_5(VAR_0)) {
  if ((VAR_3 < 2) || (VAR_3 > 3600)) {
   FUNC_7("Illegal value for \"%s\", must be"
    " between 2 and 3600.\n", VAR_0->name);
   return -1;
  }
  return 0;
 }
 if (FUNC_6(VAR_0)) {
  if ((VAR_3 < 512) || (VAR_3 > 16777215)) {
   FUNC_7("Illegal value for \"%s\", must be"
    " between 512 and 16777215.\n", VAR_0->name);
   return -1;
  }
  return 0;
 }

 return 0;
}
