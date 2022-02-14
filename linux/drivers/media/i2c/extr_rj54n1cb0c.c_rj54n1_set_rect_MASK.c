
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
typedef int u16 ;
struct i2c_client {int dummy; } ;


 int FUNC_0 (struct i2c_client*,int ,int) ;

__attribute__((used)) static int FUNC_1(struct i2c_client *VAR_0,
      u16 VAR_1, u16 VAR_2, u16 VAR_3,
      u32 VAR_4, u32 VAR_5)
{
 int VAR_6;

 VAR_6 = FUNC_0(VAR_0, VAR_3,
   ((VAR_4 >> 4) & 0x70) |
   ((VAR_5 >> 8) & 7));

 if (!VAR_6)
  VAR_6 = FUNC_0(VAR_0, VAR_1, VAR_4 & 0xff);
 if (!VAR_6)
  VAR_6 = FUNC_0(VAR_0, VAR_2, VAR_5 & 0xff);

 return VAR_6;
}
