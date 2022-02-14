
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct i2c_msg {unsigned short flags; int addr; } ;
struct i2c_adapter {int dummy; } ;


 int VAR_0 ;
 unsigned short VAR_1 ;
 int FUNC_0 (struct i2c_adapter*,unsigned char,int) ;
 int FUNC_1 (struct i2c_adapter*,unsigned char,int) ;

__attribute__((used)) static inline int FUNC_2(struct i2c_adapter *VAR_2,
       struct i2c_msg *VAR_3, int VAR_4,
       unsigned char *VAR_5)
{
 unsigned short VAR_6 = VAR_3->flags;

 unsigned char VAR_7;
 int VAR_8;

 VAR_7 = (VAR_3->addr << 1);
 if (VAR_6 & VAR_1)
  VAR_7 |= 1;

 VAR_5[0] = VAR_7;
 if (VAR_6 & VAR_1)
  VAR_8 = FUNC_0(VAR_2, VAR_7, VAR_4);
 else
  VAR_8 = FUNC_1(VAR_2, VAR_7, VAR_4);

 if (VAR_8 != 1)
  return -VAR_0;

 return 0;
}
