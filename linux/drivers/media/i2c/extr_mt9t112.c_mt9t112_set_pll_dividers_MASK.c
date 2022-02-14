
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u16 ;
struct i2c_client {int dummy; } ;


 int FUNC_0 (int,struct i2c_client const*,int,int,int) ;

__attribute__((used)) static int FUNC_1(const struct i2c_client *VAR_0,
        u8 VAR_1, u8 VAR_2, u8 VAR_3, u8 VAR_4, u8 VAR_5, u8 VAR_6,
        u8 VAR_7, u8 VAR_8, u8 VAR_9)
{
 int VAR_10;
 u16 VAR_11;


 VAR_11 = (VAR_2 << 8) | (VAR_1 << 0);
 FUNC_0(VAR_10, VAR_0, 0x0010, 0x3fff, VAR_11);


 VAR_11 = ((VAR_5 & 0x0F) << 8) | ((VAR_4 & 0x0F) << 4) | ((VAR_3 & 0x0F) << 0);
 FUNC_0(VAR_10, VAR_0, 0x0012, 0x0fff, VAR_11);


 VAR_11 = (0x7 << 12) | ((VAR_8 & 0x0F) << 8) | ((VAR_7 & 0x0F) << 4) |
       ((VAR_6 & 0x0F) << 0);
 FUNC_0(VAR_10, VAR_0, 0x002A, 0x7fff, VAR_11);


 VAR_11 = (0x1 << 12) | ((VAR_9 & 0x0F) << 0);
 FUNC_0(VAR_10, VAR_0, 0x002C, 0x100f, VAR_11);

 return VAR_10;
}
