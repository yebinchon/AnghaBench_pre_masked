
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ibm_init_struct {int dummy; } ;
typedef int acpi_handle ;


 scalar_t__ FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int ,int*,int *,char*,int ) ;
 int FUNC_2 (int ,char*,int *) ;
 int VAR_2 ;
 int VAR_3 ;

__attribute__((used)) static int FUNC_3(struct ibm_init_struct *VAR_4)
{
 acpi_handle VAR_5;
 int VAR_6;

 if (FUNC_0(FUNC_2(VAR_2, "GSSS", &VAR_5))) {
  VAR_3 = -VAR_1;
  return 0;
 }

 if (!FUNC_1(VAR_5, &VAR_6, ((void*)0), "dd", 0)) {
  VAR_3 = -VAR_0;
  return -VAR_0;
 }
 if (!(VAR_6 & 0x10000)) {
  VAR_3 = -VAR_1;
  return 0;
 }
 VAR_3 = VAR_6 & 0x1;

 return 0;
}
