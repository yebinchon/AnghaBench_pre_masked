
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct i2c_client {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int,int) ;
 int FUNC_1 (int,int ) ;
 int FUNC_2 (int,struct i2c_client const*,int ,int) ;

__attribute__((used)) static int FUNC_3(const struct i2c_client *VAR_2,
        u16 VAR_3, u16 VAR_4)
{
 int VAR_5;
 u16 VAR_6 = (VAR_1 - VAR_3) / 2;
 u16 VAR_7 = (VAR_0 - VAR_4) / 2;


 FUNC_2(VAR_5, VAR_2, FUNC_0(26, 0), VAR_3);
 FUNC_2(VAR_5, VAR_2, FUNC_0(26, 2), VAR_4);


 FUNC_2(VAR_5, VAR_2, FUNC_0(18, 43), 8 + VAR_3);
 FUNC_2(VAR_5, VAR_2, FUNC_0(18, 45), 8 + VAR_4);


 FUNC_2(VAR_5, VAR_2, FUNC_0(18, 2), 4 + VAR_7);
 FUNC_2(VAR_5, VAR_2, FUNC_0(18, 4), 4 + VAR_6);


 FUNC_2(VAR_5, VAR_2, FUNC_0(18, 6), 11 + VAR_4 + VAR_7);
 FUNC_2(VAR_5, VAR_2, FUNC_0(18, 8), 11 + VAR_3 + VAR_6);

 FUNC_2(VAR_5, VAR_2, FUNC_1(1, 0), 0x06);

 return VAR_5;
}
