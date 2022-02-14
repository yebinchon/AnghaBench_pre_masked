
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct s5k6aa {int sd; } ;
struct i2c_client {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct i2c_client*,int ,int*) ;
 int FUNC_1 (struct i2c_client*,int ,int) ;
 struct i2c_client* FUNC_2 (int *) ;

__attribute__((used)) static int FUNC_3(struct s5k6aa *VAR_5, int VAR_6)
{
 struct i2c_client *VAR_7 = FUNC_2(&VAR_5->sd);
 u16 VAR_8;
 int VAR_9;

 VAR_9 = FUNC_0(VAR_7, VAR_1, &VAR_8);
 if (VAR_9)
  return VAR_9;

 if (VAR_6 == VAR_4) {
  VAR_8 |= VAR_0;
 } else {
  VAR_8 &= ~VAR_0;


  VAR_9 = FUNC_1(VAR_7, VAR_2, VAR_6);
  if (VAR_9)
   return VAR_9;
  VAR_9 = FUNC_1(VAR_7, VAR_3, 1);
  if (VAR_9)
   return VAR_9;
 }

 return FUNC_1(VAR_7, VAR_1, VAR_8);
}
