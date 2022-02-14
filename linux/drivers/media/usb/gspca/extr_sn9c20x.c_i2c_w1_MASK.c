
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct sd {int i2c_intf; int i2c_addr; } ;
struct gspca_dev {int dummy; } ;


 int FUNC_0 (struct gspca_dev*,int*) ;

__attribute__((used)) static void FUNC_1(struct gspca_dev *VAR_0, u8 VAR_1, u8 VAR_2)
{
 struct sd *VAR_3 = (struct sd *) VAR_0;
 u8 VAR_4[8];





 VAR_4[0] = VAR_3->i2c_intf | (2 << 4);
 VAR_4[1] = VAR_3->i2c_addr;
 VAR_4[2] = VAR_1;
 VAR_4[3] = VAR_2;
 VAR_4[4] = 0x00;
 VAR_4[5] = 0x00;
 VAR_4[6] = 0x00;
 VAR_4[7] = 0x10;

 FUNC_0(VAR_0, VAR_4);
}
