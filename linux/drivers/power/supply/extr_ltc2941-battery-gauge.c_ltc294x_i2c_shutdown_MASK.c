
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
struct ltc294x_info {scalar_t__ id; int client; } ;
struct i2c_client {int dummy; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (scalar_t__) ;
 struct ltc294x_info* FUNC_1 (struct i2c_client*) ;
 int FUNC_2 (int ,int ,scalar_t__*,int) ;
 int FUNC_3 (int ,int ,scalar_t__*,int) ;

__attribute__((used)) static void FUNC_4(struct i2c_client *VAR_2)
{
 struct ltc294x_info *VAR_3 = FUNC_1(VAR_2);
 int VAR_4;
 u8 VAR_5;
 u8 VAR_6;


 if (VAR_3->id == VAR_0)
  return;


 VAR_4 = FUNC_2(VAR_3->client, VAR_1, &VAR_5, 1);
 if (VAR_4 < 0)
  return;


 VAR_6 = FUNC_0(VAR_5);
 if (VAR_6 != VAR_5)
  FUNC_3(VAR_3->client, VAR_1,
   &VAR_6, 1);
}
