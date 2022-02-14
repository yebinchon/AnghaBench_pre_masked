
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct pt1 {TYPE_1__** adaps; } ;
struct i2c_client {int name; } ;
struct TYPE_2__ {struct i2c_client* demod_i2c_client; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct i2c_client*,int*,int) ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ,int ,int ) ;
 int FUNC_3 (int,int) ;

__attribute__((used)) static int FUNC_4(struct pt1 *VAR_3)
{
 struct i2c_client *VAR_4;
 u8 VAR_5[2] = {0x01, 0x80};
 int VAR_6;
 int VAR_7;


 for (VAR_7 = 0; VAR_7 < VAR_0; VAR_7++) {
  VAR_4 = VAR_3->adaps[VAR_7]->demod_i2c_client;
  if (FUNC_2(VAR_4->name, VAR_2,
       FUNC_1(VAR_2)))
   continue;

  VAR_6 = FUNC_0(VAR_4, VAR_5, 2);
  if (VAR_6 < 0)
   return VAR_6;
  FUNC_3(30000, 50000);
 }

 for (VAR_7 = 0; VAR_7 < VAR_0; VAR_7++) {
  VAR_4 = VAR_3->adaps[VAR_7]->demod_i2c_client;
  if (FUNC_2(VAR_4->name, VAR_1,
       FUNC_1(VAR_1)))
   continue;

  VAR_6 = FUNC_0(VAR_4, VAR_5, 2);
  if (VAR_6 < 0)
   return VAR_6;
  FUNC_3(30000, 50000);
 }
 return 0;
}
