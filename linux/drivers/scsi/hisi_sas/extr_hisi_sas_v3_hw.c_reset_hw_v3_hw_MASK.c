
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct hisi_hba {struct device* dev; } ;
struct device {int dummy; } ;
typedef int acpi_status ;


 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (struct device*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (scalar_t__,char*,int *,int *) ;
 int FUNC_3 (struct device*,char*,...) ;
 int FUNC_4 (int ,int ,int,int,int) ;
 int FUNC_5 (struct hisi_hba*) ;
 int FUNC_6 (struct hisi_hba*,int ,int ) ;
 int FUNC_7 (int) ;

__attribute__((used)) static int FUNC_8(struct hisi_hba *VAR_4)
{
 struct device *VAR_5 = VAR_4->dev;
 int VAR_6;
 u32 VAR_7;

 FUNC_6(VAR_4, VAR_1, 0);


 FUNC_5(VAR_4);
 FUNC_7(50);


 VAR_6 = FUNC_4(VAR_0, VAR_7, !VAR_7,
        20000, 1000000);
 if (VAR_6) {
  FUNC_3(VAR_5, "axi bus is not idle, ret = %d!\n", VAR_6);
  return -VAR_3;
 }

 if (FUNC_1(VAR_5)) {
  acpi_status VAR_8;

  VAR_8 = FUNC_2(FUNC_1(VAR_5), "_RST", ((void*)0), ((void*)0));
  if (FUNC_0(VAR_8)) {
   FUNC_3(VAR_5, "Reset failed\n");
   return -VAR_3;
  }
 } else {
  FUNC_3(VAR_5, "no reset method!\n");
  return -VAR_2;
 }

 return 0;
}
