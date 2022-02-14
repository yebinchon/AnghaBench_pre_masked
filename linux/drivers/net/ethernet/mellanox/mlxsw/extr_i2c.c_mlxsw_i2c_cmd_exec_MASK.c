
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
typedef int u16 ;
struct mlxsw_i2c {int dev; } ;


 int FUNC_0 (int ,int ,int ,size_t,char*,size_t,char*,int *) ;

__attribute__((used)) static int FUNC_1(void *VAR_0, u16 VAR_1, u8 VAR_2,
         u32 VAR_3, bool VAR_4,
         char *VAR_5, size_t VAR_6,
         char *VAR_7, size_t VAR_8,
         u8 *VAR_9)
{
 struct mlxsw_i2c *VAR_10 = VAR_0;

 return FUNC_0(VAR_10->dev, VAR_1, VAR_3, VAR_6,
        VAR_5, VAR_8, VAR_7, VAR_9);
}
