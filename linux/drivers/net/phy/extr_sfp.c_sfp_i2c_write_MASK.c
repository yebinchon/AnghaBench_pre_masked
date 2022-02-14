
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef void* u8 ;
struct sfp {int i2c; } ;
struct i2c_msg {int len; void** buf; scalar_t__ flags; void* addr; } ;


 int FUNC_0 (struct i2c_msg*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int ,struct i2c_msg*,int) ;
 int FUNC_2 (void**) ;
 void** FUNC_3 (int,int ) ;
 int FUNC_4 (void**,void*,size_t) ;

__attribute__((used)) static int FUNC_5(struct sfp *VAR_2, bool VAR_3, u8 VAR_4, void *VAR_5,
 size_t VAR_6)
{
 struct i2c_msg VAR_7[1];
 u8 VAR_8 = VAR_3 ? 0x51 : 0x50;
 int VAR_9;

 VAR_7[0].addr = VAR_8;
 VAR_7[0].flags = 0;
 VAR_7[0].len = 1 + VAR_6;
 VAR_7[0].buf = FUNC_3(1 + VAR_6, VAR_1);
 if (!VAR_7[0].buf)
  return -VAR_0;

 VAR_7[0].buf[0] = VAR_4;
 FUNC_4(&VAR_7[0].buf[1], VAR_5, VAR_6);

 VAR_9 = FUNC_1(VAR_2->i2c, VAR_7, FUNC_0(VAR_7));

 FUNC_2(VAR_7[0].buf);

 if (VAR_9 < 0)
  return VAR_9;

 return VAR_9 == FUNC_0(VAR_7) ? VAR_6 : 0;
}
