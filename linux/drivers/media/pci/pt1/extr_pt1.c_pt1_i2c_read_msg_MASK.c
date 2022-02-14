
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pt1 {int dummy; } ;
struct i2c_msg {int addr; int len; } ;


 int FUNC_0 (struct pt1*,int,int*) ;
 int FUNC_1 (struct pt1*,int,int*,int) ;
 int FUNC_2 (struct pt1*,int,int*,int) ;

__attribute__((used)) static void
FUNC_3(struct pt1 *VAR_0, int VAR_1, int *VAR_2, struct i2c_msg *VAR_3)
{
 int VAR_4;
 FUNC_0(VAR_0, VAR_1, &VAR_1);
 FUNC_2(VAR_0, VAR_1, &VAR_1, VAR_3->addr << 1 | 1);
 for (VAR_4 = 0; VAR_4 < VAR_3->len; VAR_4++)
  FUNC_1(VAR_0, VAR_1, &VAR_1, VAR_4 == VAR_3->len - 1);
 *VAR_2 = VAR_1;
}
