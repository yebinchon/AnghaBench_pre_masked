
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u8 ;
struct sfp {int i2c; } ;
struct i2c_msg {size_t addr; int len; size_t* buf; scalar_t__ flags; } ;


 int FUNC_0 (struct i2c_msg*) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (int ,struct i2c_msg*,int) ;

__attribute__((used)) static int FUNC_2(struct sfp *VAR_1, bool VAR_2, u8 VAR_3, void *VAR_4,
   size_t VAR_5)
{
 struct i2c_msg VAR_6[2];
 u8 VAR_7 = VAR_2 ? 0x51 : 0x50;
 size_t VAR_8;
 int VAR_9;

 VAR_6[0].addr = VAR_7;
 VAR_6[0].flags = 0;
 VAR_6[0].len = 1;
 VAR_6[0].buf = &VAR_3;
 VAR_6[1].addr = VAR_7;
 VAR_6[1].flags = VAR_0;
 VAR_6[1].len = VAR_5;
 VAR_6[1].buf = VAR_4;

 while (VAR_5) {
  VAR_8 = VAR_5;
  if (VAR_8 > 16)
   VAR_8 = 16;

  VAR_6[1].len = VAR_8;

  VAR_9 = FUNC_1(VAR_1->i2c, VAR_6, FUNC_0(VAR_6));
  if (VAR_9 < 0)
   return VAR_9;

  if (VAR_9 != FUNC_0(VAR_6))
   break;

  VAR_6[1].buf += VAR_8;
  VAR_3 += VAR_8;
  VAR_5 -= VAR_8;
 }

 return VAR_6[1].buf - (u8 *)VAR_4;
}
