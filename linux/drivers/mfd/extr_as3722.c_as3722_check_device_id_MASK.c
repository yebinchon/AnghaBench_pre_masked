
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct as3722 {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct as3722*,int ,int*) ;
 int FUNC_1 (int ,char*,int) ;
 int FUNC_2 (int ,char*,int) ;

__attribute__((used)) static int FUNC_3(struct as3722 *VAR_4)
{
 u32 VAR_5;
 int VAR_6;


 VAR_6 = FUNC_0(VAR_4, VAR_0, &VAR_5);
 if (VAR_6 < 0) {
  FUNC_1(VAR_4->dev, "ASIC_ID1 read failed: %d\n", VAR_6);
  return VAR_6;
 }

 if (VAR_5 != VAR_2) {
  FUNC_1(VAR_4->dev, "Device is not AS3722, ID is 0x%x\n", VAR_5);
  return -VAR_3;
 }

 VAR_6 = FUNC_0(VAR_4, VAR_1, &VAR_5);
 if (VAR_6 < 0) {
  FUNC_1(VAR_4->dev, "ASIC_ID2 read failed: %d\n", VAR_6);
  return VAR_6;
 }

 FUNC_2(VAR_4->dev, "AS3722 with revision 0x%x found\n", VAR_5);
 return 0;
}
