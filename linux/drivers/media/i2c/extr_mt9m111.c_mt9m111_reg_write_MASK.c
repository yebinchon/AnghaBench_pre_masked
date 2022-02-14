
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct i2c_client {int dev; } ;


 int FUNC_0 (int *,char*,int const,int const,int) ;
 int FUNC_1 (struct i2c_client*,int const,int const) ;
 int FUNC_2 (struct i2c_client*,int const) ;

__attribute__((used)) static int FUNC_3(struct i2c_client *VAR_0, const u16 VAR_1,
        const u16 VAR_2)
{
 int VAR_3;

 VAR_3 = FUNC_2(VAR_0, VAR_1);
 if (!VAR_3)
  VAR_3 = FUNC_1(VAR_0, VAR_1 & 0xff, VAR_2);
 FUNC_0(&VAR_0->dev, "write reg.%03x = %04x -> %d\n", VAR_1, VAR_2, VAR_3);
 return VAR_3;
}
