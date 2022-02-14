
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct i2c_client {int dummy; } ;
struct apds990x_chip {struct i2c_client* client; } ;
typedef scalar_t__ s32 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;


 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_0 (struct i2c_client*,int) ;

__attribute__((used)) static int FUNC_1(struct apds990x_chip *VAR_5, u8 VAR_6)
{
 struct i2c_client *VAR_7 = VAR_5->client;
 s32 VAR_8;
 u8 VAR_9 = VAR_3 | VAR_4;

 switch (VAR_6 & (129 | 128)) {
 case 129:
  VAR_9 |= VAR_0;
  break;
 case 128:
  VAR_9 |= VAR_2;
  break;
 default:
  VAR_9 |= VAR_1;
  break;
 }

 VAR_8 = FUNC_0(VAR_7, VAR_9);
 return (int)VAR_8;
}
