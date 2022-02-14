
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct i2c_client {int dummy; } ;
struct et8ek8_reglist {int regs; } ;
struct et8ek8_meta_reglist {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct i2c_client*,int ) ;
 struct et8ek8_reglist* FUNC_1 (struct et8ek8_meta_reglist*,int ) ;

__attribute__((used)) static int FUNC_2(struct i2c_client *VAR_1,
      struct et8ek8_meta_reglist *VAR_2,
      u16 VAR_3)
{
 struct et8ek8_reglist *VAR_4;

 VAR_4 = FUNC_1(VAR_2, VAR_3);
 if (!VAR_4)
  return -VAR_0;

 return FUNC_0(VAR_1, VAR_4->regs);
}
