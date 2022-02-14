
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dmi_device {int name; } ;


 int VAR_0 ;
 struct dmi_device* FUNC_0 (int ,int *,struct dmi_device const*) ;
 int VAR_1 ;
 int VAR_2 ;
 int * VAR_3 ;
 int FUNC_1 (int ,char*,char*) ;

__attribute__((used)) static void FUNC_2(void)
{
 const struct dmi_device *VAR_4 = ((void*)0);
 char VAR_5[30];

 while ((VAR_4 = FUNC_0(VAR_0, ((void*)0), VAR_4))) {
  if (FUNC_1(VAR_4->name, "AEMS%24c", VAR_5) == 1) {
   if (VAR_5[18] == '1')
    VAR_3 = &VAR_1;
   else if (VAR_5[18] == '3')
    VAR_3 = &VAR_2;
   break;
  }
 }
}
