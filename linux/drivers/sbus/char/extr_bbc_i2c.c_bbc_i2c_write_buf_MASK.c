
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bbc_i2c_client {int dummy; } ;


 int FUNC_0 (struct bbc_i2c_client*,char,int) ;

int FUNC_1(struct bbc_i2c_client *VAR_0,
        char *VAR_1, int VAR_2, int VAR_3)
{
 int VAR_4 = 0;

 while (VAR_2 > 0) {
  VAR_4 = FUNC_0(VAR_0, *VAR_1, VAR_3);
  if (VAR_4 < 0)
   break;
  VAR_2--;
  VAR_1++;
  VAR_3++;
 }
 return VAR_4;
}
