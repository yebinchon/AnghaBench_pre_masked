
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mb862xxfb_par {scalar_t__ i2c_rs; } ;
struct i2c_adapter {struct mb862xxfb_par* algo_data; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ,int ,int ) ;

__attribute__((used)) static void FUNC_1(struct i2c_adapter *VAR_5)
{
 struct mb862xxfb_par *VAR_6 = VAR_5->algo_data;

 FUNC_0(VAR_4, VAR_0, VAR_3);
 FUNC_0(VAR_4, VAR_1, VAR_2);
 VAR_6->i2c_rs = 0;
}
