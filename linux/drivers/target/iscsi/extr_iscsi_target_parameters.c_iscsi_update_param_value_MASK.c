
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iscsi_param {int value; int name; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (char*,int ) ;
 int FUNC_2 (char*,int ,int ) ;
 int FUNC_3 (char*) ;

int FUNC_4(struct iscsi_param *VAR_2, char *VAR_3)
{
 FUNC_0(VAR_2->value);

 VAR_2->value = FUNC_1(VAR_3, VAR_1);
 if (!VAR_2->value) {
  FUNC_3("Unable to allocate memory for value.\n");
  return -VAR_0;
 }

 FUNC_2("iSCSI Parameter updated to %s=%s\n",
   VAR_2->name, VAR_2->value);
 return 0;
}
