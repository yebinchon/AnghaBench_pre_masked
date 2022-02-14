
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct i2c_client {int dummy; } ;


 unsigned char VAR_0 ;
 unsigned char VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct i2c_client*,int ,int,unsigned char*) ;

__attribute__((used)) static int FUNC_1(struct i2c_client *VAR_3, unsigned char *VAR_4,
      unsigned char *VAR_5)
{
 unsigned char VAR_6;
 int VAR_7;

 VAR_7 = FUNC_0(VAR_3, VAR_2, 1, &VAR_6);
 if (VAR_7)
  return VAR_7;

 if (VAR_4)
  *VAR_4 = !!(VAR_6 & VAR_1);
 if (VAR_5)
  *VAR_5 = !!(VAR_6 & VAR_0);

 return 0;
}
