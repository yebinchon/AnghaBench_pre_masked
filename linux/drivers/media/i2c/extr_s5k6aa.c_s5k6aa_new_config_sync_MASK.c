
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct i2c_client {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 unsigned long VAR_4 ;
 unsigned long FUNC_0 (int) ;
 int FUNC_1 (struct i2c_client*,int ,int*) ;
 int FUNC_2 (struct i2c_client*,int ,int) ;
 scalar_t__ FUNC_3 (unsigned long) ;
 int FUNC_4 (int,int) ;

__attribute__((used)) static int FUNC_5(struct i2c_client *VAR_5, int VAR_6,
      int VAR_7)
{
 unsigned long VAR_8 = VAR_4 + FUNC_0(VAR_6);
 u16 VAR_9 = 1;
 int VAR_10;

 VAR_10 = FUNC_2(VAR_5, VAR_1, VAR_7);
 if (!VAR_10)
  VAR_10 = FUNC_2(VAR_5, VAR_3, 1);
 if (!VAR_10)
  VAR_10 = FUNC_2(VAR_5, VAR_2, 1);
 if (VAR_6 == 0)
  return VAR_10;

 while (VAR_10 >= 0 && FUNC_3(VAR_8)) {
  VAR_10 = FUNC_1(VAR_5, VAR_2, &VAR_9);
  if (!VAR_9)
   return 0;
  FUNC_4(1000, 5000);
 }
 return VAR_10 ? VAR_10 : -VAR_0;
}
