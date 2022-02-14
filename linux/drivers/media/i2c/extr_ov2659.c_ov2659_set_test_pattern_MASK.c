
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct ov2659 {int sd; } ;
struct i2c_client {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct i2c_client*,int ,int *) ;
 int FUNC_1 (struct i2c_client*,int ,int ) ;
 struct i2c_client* FUNC_2 (int *) ;

__attribute__((used)) static int FUNC_3(struct ov2659 *VAR_3, int VAR_4)
{
 struct i2c_client *VAR_5 = FUNC_2(&VAR_3->sd);
 int VAR_6;
 u8 VAR_7;

 VAR_6 = FUNC_0(VAR_5, VAR_0, &VAR_7);
 if (VAR_6 < 0)
  return VAR_6;

 switch (VAR_4) {
 case 0:
  VAR_7 &= ~VAR_1;
  break;
 case 1:
  VAR_7 &= VAR_2;
  VAR_7 |= VAR_1;
  break;
 }

 return FUNC_1(VAR_5, VAR_0, VAR_7);
}
