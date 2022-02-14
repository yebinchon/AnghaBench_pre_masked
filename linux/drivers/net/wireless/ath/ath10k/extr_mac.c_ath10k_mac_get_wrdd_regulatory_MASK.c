
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
typedef int u16 ;
struct ath10k {int dev; } ;
struct acpi_buffer {int pointer; int * member_1; int member_0; } ;
typedef int acpi_string ;
typedef char* acpi_status ;
typedef int acpi_handle ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (char*) ;
 int FUNC_1 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 char* FUNC_2 (int ,int *,int *,struct acpi_buffer*) ;
 char* FUNC_3 (int ,int ,int *) ;
 int FUNC_4 (struct ath10k*,int ,char*,char*) ;
 int FUNC_5 (struct ath10k*,int ) ;
 int FUNC_6 (char*) ;
 int FUNC_7 (int ) ;

__attribute__((used)) static int FUNC_8(struct ath10k *VAR_6, u16 *VAR_7)
{
 acpi_handle VAR_8;
 acpi_handle VAR_9;
 struct acpi_buffer VAR_10 = {VAR_0, ((void*)0)};
 acpi_status VAR_11;
 u32 VAR_12;
 char VAR_13[3];

 VAR_8 = FUNC_1(VAR_6->dev);
 if (!VAR_8)
  return -VAR_4;

 VAR_11 = FUNC_3(VAR_8, (acpi_string)VAR_5, &VAR_9);
 if (FUNC_0(VAR_11)) {
  FUNC_4(VAR_6, VAR_1,
      "failed to get wrd method %d\n", VAR_11);
  return -VAR_3;
 }

 VAR_11 = FUNC_2(VAR_9, ((void*)0), ((void*)0), &VAR_10);
 if (FUNC_0(VAR_11)) {
  FUNC_4(VAR_6, VAR_1,
      "failed to call wrdc %d\n", VAR_11);
  return -VAR_3;
 }

 VAR_12 = FUNC_5(VAR_6, VAR_10.pointer);
 FUNC_7(VAR_10.pointer);
 if (!VAR_12)
  return -VAR_3;

 VAR_13[0] = (VAR_12 >> 8) & 0xff;
 VAR_13[1] = (VAR_12 >> 0) & 0xff;
 VAR_13[2] = '\0';

 FUNC_4(VAR_6, VAR_1,
     "regulatory hint from WRDD (alpha2-code): %s\n", VAR_13);

 *VAR_7 = FUNC_6(VAR_13);
 if (*VAR_7 == 0xffff)
  return -VAR_3;

 *VAR_7 |= VAR_2;
 return 0;
}
