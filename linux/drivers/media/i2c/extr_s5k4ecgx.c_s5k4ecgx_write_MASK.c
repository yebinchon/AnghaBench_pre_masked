
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
typedef int u16 ;
struct i2c_client {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct i2c_client*,int ,int) ;
 int FUNC_1 (int,int ,struct i2c_client*,char*,int,int) ;

__attribute__((used)) static int FUNC_2(struct i2c_client *VAR_4, u32 VAR_5, u16 VAR_6)
{
 u16 VAR_7 = VAR_5 >> 16, VAR_8 = VAR_5 & 0xffff;
 int VAR_9;

 FUNC_1(3, VAR_3, VAR_4, "write: 0x%08x : 0x%04x\n", VAR_5, VAR_6);

 VAR_9 = FUNC_0(VAR_4, VAR_1, VAR_7);
 if (!VAR_9)
  VAR_9 = FUNC_0(VAR_4, VAR_2, VAR_8);
 if (!VAR_9)
  VAR_9 = FUNC_0(VAR_4, VAR_0, VAR_6);

 return VAR_9;
}
