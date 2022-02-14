
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef char u8 ;
typedef int u32 ;
typedef int u16 ;
struct i40e_hw {int dummy; } ;
typedef scalar_t__ i40e_status ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct i40e_hw*,char*,...) ;
 scalar_t__ FUNC_1 (struct i40e_hw*,int,int*) ;

i40e_status FUNC_2(struct i40e_hw *VAR_3, u8 *VAR_4,
     u32 VAR_5)
{
 i40e_status VAR_6 = 0;
 u16 VAR_7 = 0;
 u16 VAR_8 = 0;
 u16 VAR_9 = 0;
 u16 VAR_10 = 0;

 VAR_6 = FUNC_1(VAR_3, VAR_2, &VAR_7);
 if (VAR_6 || (VAR_7 != 0xFAFA)) {
  FUNC_0(VAR_3, "Failed to read PBA flags or flag is invalid.\n");
  return VAR_6;
 }

 VAR_6 = FUNC_1(VAR_3, VAR_1, &VAR_9);
 if (VAR_6) {
  FUNC_0(VAR_3, "Failed to read PBA Block pointer.\n");
  return VAR_6;
 }

 VAR_6 = FUNC_1(VAR_3, VAR_9, &VAR_8);
 if (VAR_6) {
  FUNC_0(VAR_3, "Failed to read PBA Block size.\n");
  return VAR_6;
 }




 VAR_8--;
 if (VAR_5 < (((u32)VAR_8 * 2) + 1)) {
  FUNC_0(VAR_3, "Buffer to small for PBA data.\n");
  return VAR_0;
 }

 for (VAR_10 = 0; VAR_10 < VAR_8; VAR_10++) {
  VAR_6 = FUNC_1(VAR_3, (VAR_9 + 1) + VAR_10, &VAR_7);
  if (VAR_6) {
   FUNC_0(VAR_3, "Failed to read PBA Block word %d.\n", VAR_10);
   return VAR_6;
  }

  VAR_4[(VAR_10 * 2)] = (VAR_7 >> 8) & 0xFF;
  VAR_4[(VAR_10 * 2) + 1] = VAR_7 & 0xFF;
 }
 VAR_4[(VAR_8 * 2)] = '\0';

 return VAR_6;
}
