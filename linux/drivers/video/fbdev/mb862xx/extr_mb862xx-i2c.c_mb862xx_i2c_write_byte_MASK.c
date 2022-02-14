
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct mb862xxfb_par {int dummy; } ;
struct i2c_adapter {struct mb862xxfb_par* algo_data; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (struct i2c_adapter*) ;
 int FUNC_2 (int ,int ,int ) ;

__attribute__((used)) static int FUNC_3(struct i2c_adapter *VAR_7, u8 VAR_8)
{
 struct mb862xxfb_par *VAR_9 = VAR_7->algo_data;

 FUNC_2(VAR_6, VAR_3, VAR_8);
 FUNC_2(VAR_6, VAR_1, VAR_5);
 if (!FUNC_1(VAR_7))
  return -VAR_0;
 return !(FUNC_0(VAR_6, VAR_2) & VAR_4);
}
