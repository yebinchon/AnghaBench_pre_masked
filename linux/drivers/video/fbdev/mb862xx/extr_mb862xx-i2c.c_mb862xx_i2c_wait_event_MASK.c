
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct mb862xxfb_par {int dummy; } ;
struct i2c_adapter {struct mb862xxfb_par* algo_data; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int) ;

__attribute__((used)) static int FUNC_2(struct i2c_adapter *VAR_4)
{
 struct mb862xxfb_par *VAR_5 = VAR_4->algo_data;
 u32 VAR_6;

 do {
  FUNC_1(10);
  VAR_6 = FUNC_0(VAR_3, VAR_0);
  if (VAR_6 & (VAR_2 | VAR_1))
   break;
 } while (1);

 return (VAR_6 & VAR_1) ? 0 : 1;
}
