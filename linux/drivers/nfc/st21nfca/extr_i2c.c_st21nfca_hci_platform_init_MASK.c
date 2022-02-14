
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
typedef int u16 ;
struct st21nfca_i2c_phy {int i2c_dev; } ;
typedef int reboot_cmd ;


 int FUNC_0 (int*) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_1 (int ,scalar_t__*,int) ;
 int FUNC_2 (int ,char*,int) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int,int) ;

__attribute__((used)) static int FUNC_5(struct st21nfca_i2c_phy *VAR_3)
{
 u16 VAR_4[] = { 50, 300, 1000 };
 char VAR_5[] = { 0x7E, 0x66, 0x48, 0xF6, 0x7E };
 u8 VAR_6[VAR_1];
 int VAR_7, VAR_8 = -1;

 for (VAR_7 = 0; VAR_7 < FUNC_0(VAR_4) && VAR_8 < 0; VAR_7++) {
  VAR_8 = FUNC_2(VAR_3->i2c_dev, VAR_5,
        sizeof(VAR_5));
  if (VAR_8 < 0)
   FUNC_3(VAR_4[VAR_7]);
 }
 if (VAR_8 < 0)
  return VAR_8;


 FUNC_3(20);
 VAR_8 = -1;
 for (VAR_7 = 0; VAR_7 < FUNC_0(VAR_4) && VAR_8 < 0; VAR_7++) {
  VAR_8 = FUNC_1(VAR_3->i2c_dev, VAR_6,
        VAR_1);
  if (VAR_8 < 0)
   FUNC_3(VAR_4[VAR_7]);
 }
 if (VAR_8 < 0)
  return VAR_8;

 for (VAR_7 = 0; VAR_7 < VAR_1 &&
  VAR_6[VAR_7] == VAR_2; VAR_7++)
  ;

 if (VAR_8 != VAR_1)
  return -VAR_0;

 FUNC_4(1000, 1500);
 return 0;
}
