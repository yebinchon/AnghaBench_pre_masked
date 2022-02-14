
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iscsi_param {int name; } ;


 scalar_t__ FUNC_0 (struct iscsi_param*) ;
 scalar_t__ FUNC_1 (struct iscsi_param*) ;
 char* FUNC_2 (struct iscsi_param*,char*) ;
 scalar_t__ FUNC_3 (struct iscsi_param*,char*) ;
 int FUNC_4 (char*,int ) ;
 char* FUNC_5 (char*,char) ;

__attribute__((used)) static int FUNC_6(struct iscsi_param *VAR_0, char *VAR_1)
{
 if (FUNC_0(VAR_0)) {
  FUNC_4("Received key \"%s\" twice, protocol error.\n",
    VAR_0->name);
  return -1;
 }

 if (FUNC_1(VAR_0)) {
  char *VAR_2 = ((void*)0), *VAR_3 = ((void*)0);

  VAR_2 = FUNC_5(VAR_1, ',');
  if (VAR_2) {
   FUNC_4("Illegal \",\" in response for \"%s\".\n",
     VAR_0->name);
   return -1;
  }

  VAR_3 = FUNC_2(VAR_0, VAR_1);
  if (!VAR_3)
   return -1;
 }

 if (FUNC_3(VAR_0, VAR_1) < 0)
  return -1;

 return 0;
}
