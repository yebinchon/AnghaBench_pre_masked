
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct mt9m032 {int subdev; } ;
struct i2c_client {int dummy; } ;
typedef int s32 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct i2c_client*,int ,int) ;
 struct i2c_client* FUNC_1 (int *) ;

__attribute__((used)) static int FUNC_2(struct mt9m032 *VAR_5, s32 VAR_6)
{
 struct i2c_client *VAR_7 = FUNC_1(&VAR_5->subdev);
 int VAR_8;
 int VAR_9;
 int VAR_10;
 u16 VAR_11;

 VAR_8 = 51;

 if (VAR_6 < 63) {
  VAR_9 = 0;
  VAR_10 = VAR_6;
 } else {
  VAR_9 = 1;
  VAR_10 = VAR_6 / 2;
 }




 VAR_11 = ((VAR_8 & VAR_3)
     << VAR_4)
  | ((VAR_9 & 1) << VAR_1)
  | (VAR_10 & VAR_2);

 return FUNC_0(VAR_7, VAR_0, VAR_11);
}
