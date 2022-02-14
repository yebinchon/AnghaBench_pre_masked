
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct budget {int i2c_adap; } ;
struct budget_av {int has_saa7113; int cur_input; struct budget budget; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int,int,int) ;

__attribute__((used)) static int FUNC_1(struct budget_av *VAR_2, int VAR_3)
{
 struct budget *VAR_4 = &VAR_2->budget;

 if (1 != VAR_2->has_saa7113)
  return -VAR_1;

 if (VAR_3 == 1) {
  FUNC_0(&VAR_4->i2c_adap, 0x4a, 0x02, 0xc7);
  FUNC_0(&VAR_4->i2c_adap, 0x4a, 0x09, 0x80);
 } else if (VAR_3 == 0) {
  FUNC_0(&VAR_4->i2c_adap, 0x4a, 0x02, 0xc0);
  FUNC_0(&VAR_4->i2c_adap, 0x4a, 0x09, 0x00);
 } else
  return -VAR_0;

 VAR_2->cur_input = VAR_3;
 return 0;
}
