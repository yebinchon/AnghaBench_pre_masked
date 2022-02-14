
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct asus_wireless_data {int idev; } ;
struct acpi_device {int dev; } ;


 int VAR_0 ;
 struct asus_wireless_data* FUNC_0 (struct acpi_device*) ;
 int FUNC_1 (int *,char*,int) ;
 int FUNC_2 (int *,char*,int) ;
 int FUNC_3 (int ,int ,int) ;
 int FUNC_4 (int ) ;

__attribute__((used)) static void FUNC_5(struct acpi_device *VAR_1, u32 VAR_2)
{
 struct asus_wireless_data *VAR_3 = FUNC_0(VAR_1);

 FUNC_1(&VAR_1->dev, "event=%#x\n", VAR_2);
 if (VAR_2 != 0x88) {
  FUNC_2(&VAR_1->dev, "Unknown ASHS event: %#x\n", VAR_2);
  return;
 }
 FUNC_3(VAR_3->idev, VAR_0, 1);
 FUNC_4(VAR_3->idev);
 FUNC_3(VAR_3->idev, VAR_0, 0);
 FUNC_4(VAR_3->idev);
}
