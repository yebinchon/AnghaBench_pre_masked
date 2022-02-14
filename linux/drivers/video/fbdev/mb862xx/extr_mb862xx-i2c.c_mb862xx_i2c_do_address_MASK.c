
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mb862xxfb_par {int i2c_rs; } ;
struct i2c_adapter {struct mb862xxfb_par* algo_data; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (struct i2c_adapter*) ;
 int FUNC_2 (int ,int ,int) ;

__attribute__((used)) static int FUNC_3(struct i2c_adapter *VAR_10, int VAR_11)
{
 struct mb862xxfb_par *VAR_12 = VAR_10->algo_data;

 FUNC_2(VAR_9, VAR_4, VAR_11);
 FUNC_2(VAR_9, VAR_3, VAR_5);
 FUNC_2(VAR_9, VAR_1, VAR_12->i2c_rs ? VAR_7 : VAR_8);
 if (!FUNC_1(VAR_10))
  return -VAR_0;
 VAR_12->i2c_rs = !(FUNC_0(VAR_9, VAR_2) & VAR_6);
 return VAR_12->i2c_rs;
}
