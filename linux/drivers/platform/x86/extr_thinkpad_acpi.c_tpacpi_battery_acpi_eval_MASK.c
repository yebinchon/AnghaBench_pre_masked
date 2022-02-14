
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int acpi_status ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int*,char*,char*,int) ;
 int FUNC_1 (int ,char*,char*) ;
 int VAR_3 ;

__attribute__((used)) static acpi_status FUNC_2(char *VAR_4, int *VAR_5, int VAR_6)
{
 int VAR_7;

 if (!FUNC_0(VAR_3, &VAR_7, VAR_4, "dd", VAR_6)) {
  FUNC_1(VAR_3, "%s: evaluate failed", VAR_4);
  return VAR_0;
 }
 if (VAR_7 & VAR_2) {
  FUNC_1(VAR_3,
    "%s evaluated but flagged as error", VAR_4);
  return VAR_0;
 }
 *VAR_5 = VAR_7;
 return VAR_1;
}
