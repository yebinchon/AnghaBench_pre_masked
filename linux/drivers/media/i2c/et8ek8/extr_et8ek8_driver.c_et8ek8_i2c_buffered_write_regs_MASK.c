
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
typedef int u16 ;
struct i2c_msg {int dummy; } ;
struct i2c_client {int adapter; } ;
struct et8ek8_reg {int val; int reg; int type; } ;


 int VAR_0 ;
 int FUNC_0 (struct i2c_client*,int ,int ,int ,struct i2c_msg*,unsigned char*) ;
 int FUNC_1 (int ,struct i2c_msg*,int) ;

__attribute__((used)) static int FUNC_2(struct i2c_client *VAR_1,
       const struct et8ek8_reg *VAR_2,
       int VAR_3)
{
 struct i2c_msg VAR_4[VAR_0];
 unsigned char VAR_5[VAR_0][6];
 int VAR_6 = 0;
 u16 VAR_7, VAR_8;
 u32 VAR_9;
 int VAR_10;


 while (VAR_6 < VAR_3) {
  VAR_8 = VAR_2->type;
  VAR_7 = VAR_2->reg;
  VAR_9 = VAR_2->val;
  VAR_2++;

  FUNC_0(VAR_1, VAR_8, VAR_7,
        VAR_9, &VAR_4[VAR_6], &VAR_5[VAR_6][0]);


  VAR_6++;

  if (VAR_6 < VAR_0)
   continue;

  VAR_10 = FUNC_1(VAR_1->adapter, VAR_4, VAR_6);
  if (VAR_10 < 0)
   return VAR_10;

  VAR_3 -= VAR_6;
  VAR_6 = 0;
 }

 VAR_10 = FUNC_1(VAR_1->adapter, VAR_4, VAR_6);

 return VAR_10 < 0 ? VAR_10 : 0;
}
