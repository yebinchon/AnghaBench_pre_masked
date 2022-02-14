
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct fusb302_chip {int i2c_client; } ;


 int VAR_0 ;
 int FUNC_0 (struct fusb302_chip*,char*,int,int,int) ;
 int FUNC_1 (int ,int,int,int*) ;

__attribute__((used)) static int FUNC_2(struct fusb302_chip *VAR_1, u8 VAR_2,
      u8 VAR_3, u8 *VAR_4)
{
 int VAR_5 = 0;

 if (VAR_3 <= 0)
  return VAR_5;

 VAR_5 = FUNC_1(VAR_1->i2c_client, VAR_2,
         VAR_3, VAR_4);
 if (VAR_5 < 0) {
  FUNC_0(VAR_1, "cannot block read 0x%02x, len=%d, ret=%d",
       VAR_2, VAR_3, VAR_5);
  goto done;
 }
 if (VAR_5 != VAR_3) {
  FUNC_0(VAR_1, "only read %d/%d bytes from 0x%02x",
       VAR_5, VAR_3, VAR_2);
  VAR_5 = -VAR_0;
 }

done:
 return VAR_5;
}
