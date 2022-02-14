
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iscsi_boot_kset {int dummy; } ;


 int VAR_0 ;
 struct iscsi_boot_kset* FUNC_0 (char*) ;
 char* FUNC_1 (int ,char*,unsigned int) ;
 int FUNC_2 (char*) ;

struct iscsi_boot_kset *FUNC_3(unsigned int VAR_1)
{
 struct iscsi_boot_kset *VAR_2;
 char *VAR_3;

 VAR_3 = FUNC_1(VAR_0, "iscsi_boot%u", VAR_1);
 if (!VAR_3)
  return ((void*)0);

 VAR_2 = FUNC_0(VAR_3);
 FUNC_2(VAR_3);
 return VAR_2;
}
