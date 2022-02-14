
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
typedef scalar_t__ u32 ;
typedef int u16 ;
struct i2c_client {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (struct i2c_client*,int ,int ) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,int ) ;

__attribute__((used)) static u32 FUNC_4(struct i2c_client *VAR_3, u32 VAR_4,
          u16 *VAR_5)
{
 u64 VAR_6;

 if (VAR_4 > VAR_2)
  VAR_4 = VAR_2;
 VAR_6 = FUNC_1(VAR_4);
 *VAR_5 = FUNC_2(VAR_6);
 FUNC_0(VAR_3, VAR_0, *VAR_5);
 return (u32) FUNC_3(VAR_1, *VAR_5);
}
