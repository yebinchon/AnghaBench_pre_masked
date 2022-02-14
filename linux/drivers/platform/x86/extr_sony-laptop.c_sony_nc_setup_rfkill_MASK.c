
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rfkill {int dummy; } ;
struct acpi_device {int dev; } ;
typedef enum sony_nc_rfkill { ____Placeholder_sony_nc_rfkill } sony_nc_rfkill ;
typedef enum rfkill_type { ____Placeholder_rfkill_type } rfkill_type ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;




 struct rfkill* FUNC_0 (char const*,int *,int,int *,void*) ;
 int FUNC_1 (struct rfkill*) ;
 int FUNC_2 (struct rfkill*,int) ;
 int FUNC_3 (struct rfkill*) ;
 int FUNC_4 (struct rfkill*,int) ;
 int FUNC_5 (int ,int,int*) ;
 int* VAR_6 ;
 struct rfkill** VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;

__attribute__((used)) static int FUNC_6(struct acpi_device *VAR_10,
    enum sony_nc_rfkill VAR_11)
{
 int VAR_12;
 struct rfkill *VAR_13;
 enum rfkill_type VAR_14;
 const char *VAR_15;
 int VAR_16;
 bool VAR_17, VAR_18;

 switch (VAR_11) {
 case 130:
  VAR_14 = VAR_4;
  VAR_15 = "sony-wifi";
  break;
 case 131:
  VAR_14 = VAR_2;
  VAR_15 = "sony-bluetooth";
  break;
 case 128:
  VAR_14 = VAR_5;
  VAR_15 = "sony-wwan";
  break;
 case 129:
  VAR_14 = VAR_3;
  VAR_15 = "sony-wimax";
  break;
 default:
  return -VAR_0;
 }

 VAR_13 = FUNC_0(VAR_15, &VAR_10->dev, VAR_14,
      &VAR_9, (void *)VAR_11);
 if (!VAR_13)
  return -VAR_1;

 VAR_12 = FUNC_5(VAR_8, 0x200, &VAR_16);
 if (VAR_12 < 0) {
  FUNC_1(VAR_13);
  return VAR_12;
 }
 VAR_17 = !(VAR_16 & 0x1);

 VAR_12 = FUNC_5(VAR_8,
       VAR_6[VAR_11],
       &VAR_16);
 if (VAR_12 < 0) {
  FUNC_1(VAR_13);
  return VAR_12;
 }
 VAR_18 = !(VAR_16 & 0x2);

 FUNC_2(VAR_13, VAR_18);
 FUNC_4(VAR_13, VAR_17);

 VAR_12 = FUNC_3(VAR_13);
 if (VAR_12) {
  FUNC_1(VAR_13);
  return VAR_12;
 }
 VAR_7[VAR_11] = VAR_13;
 return VAR_12;
}
