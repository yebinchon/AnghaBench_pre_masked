
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct ufx_data {int dummy; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int,char*) ;
 int FUNC_2 (int*,int,int) ;
 int FUNC_3 (char*) ;
 int FUNC_4 (char*) ;
 int FUNC_5 (char*) ;
 int FUNC_6 (struct ufx_data*) ;
 int FUNC_7 (struct ufx_data*) ;
 int FUNC_8 (struct ufx_data*,int,int ) ;
 int FUNC_9 (struct ufx_data*,int,int) ;

__attribute__((used)) static int FUNC_10(struct ufx_data *VAR_2, u8 *VAR_3, int VAR_4)
{
 int VAR_5, VAR_6, VAR_7;
 u32 *VAR_8 = (u32 *)VAR_3;

 FUNC_0(VAR_4 != VAR_0);

 VAR_7 = FUNC_6(VAR_2);
 if (VAR_7 < 0) {
  FUNC_4("ufx_i2c_configure failed");
  return VAR_7;
 }

 FUNC_2(VAR_3, 0xff, VAR_0);


 for (VAR_5 = 0; VAR_5 < 2; VAR_5++) {
  u32 VAR_9 = 0x28070000 | (63 << 20) | (((u32)(VAR_5 * 64)) << 8);
  VAR_7 = FUNC_9(VAR_2, 0x1100, VAR_9);
  FUNC_1(VAR_7, "Failed to write 0x1100");

  VAR_9 |= 0x80000000;
  VAR_7 = FUNC_9(VAR_2, 0x1100, VAR_9);
  FUNC_1(VAR_7, "Failed to write 0x1100");

  VAR_7 = FUNC_7(VAR_2);
  FUNC_1(VAR_7, "Timeout waiting for I2C BUSY to clear");

  for (VAR_6 = 0; VAR_6 < 16; VAR_6++) {
   u32 VAR_10 = 0x1110 + (VAR_6 * 4);
   VAR_7 = FUNC_8(VAR_2, VAR_10, VAR_8++);
   FUNC_1(VAR_7, "Error reading i2c data");
  }
 }


 for (VAR_5 = 0; VAR_5 < 16; VAR_5++) {
  if (VAR_3[VAR_5] != 0xFF) {
   FUNC_3("edid data read successfully");
   return VAR_0;
  }
 }

 FUNC_5("edid data contains all 0xff");
 return -VAR_1;
}
