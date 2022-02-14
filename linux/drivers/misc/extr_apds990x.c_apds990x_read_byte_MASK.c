
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct i2c_client {int dummy; } ;
struct apds990x_chip {struct i2c_client* client; } ;
typedef int s32 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct i2c_client*,int) ;

__attribute__((used)) static int FUNC_1(struct apds990x_chip *VAR_3, u8 VAR_4, u8 *VAR_5)
{
 struct i2c_client *VAR_6 = VAR_3->client;
 s32 VAR_7;

 VAR_4 &= ~VAR_1;
 VAR_4 |= VAR_0 | VAR_2;

 VAR_7 = FUNC_0(VAR_6, VAR_4);
 *VAR_5 = VAR_7;
 return (int)VAR_7;
}
