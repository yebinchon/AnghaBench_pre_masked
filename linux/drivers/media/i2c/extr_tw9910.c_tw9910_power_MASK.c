
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct i2c_client {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (struct i2c_client*,int ,int ,int) ;

__attribute__((used)) static int FUNC_1(struct i2c_client *VAR_8, int VAR_9)
{
 int VAR_10;
 u8 VAR_11;
 u8 VAR_12;

 if (VAR_9) {
  VAR_11 = 0;
  VAR_12 = 0;
 } else {
  VAR_11 = VAR_4 | VAR_7 | VAR_5;
  VAR_12 = VAR_6;
 }

 VAR_10 = FUNC_0(VAR_8, VAR_0, VAR_1, VAR_11);
 if (VAR_10 < 0)
  return VAR_10;

 return FUNC_0(VAR_8, VAR_2, VAR_3, VAR_12);
}
