
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tw9910_priv {int revision; } ;
struct i2c_client {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct i2c_client*,int ,int) ;
 struct tw9910_priv* FUNC_1 (struct i2c_client*) ;
 int FUNC_2 (struct i2c_client*,int ,int,int) ;

__attribute__((used)) static int FUNC_3(struct i2c_client *VAR_5)
{
 struct tw9910_priv *VAR_6 = FUNC_1(VAR_5);
 int VAR_7;


 VAR_7 = FUNC_0(VAR_5, VAR_0,
     (VAR_4 & 0x07F8) >> 3);
 if (VAR_7 < 0)
  return VAR_7;


 VAR_7 = FUNC_0(VAR_5, VAR_1,
     (VAR_3 & 0x07F8) >> 3);
 if (VAR_7 < 0)
  return VAR_7;



 if (VAR_6->revision == 1)
  VAR_7 = FUNC_2(VAR_5, VAR_2, 0x77,
          (VAR_4 & 0x0007) << 4 |
          (VAR_3 & 0x0007));

 return VAR_7;
}
