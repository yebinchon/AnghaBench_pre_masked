
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct i2c_client {int dummy; } ;


 int FUNC_0 (struct i2c_client*,unsigned char*,int) ;
 int FUNC_1 (unsigned char*,void*,int) ;

__attribute__((used)) static inline int FUNC_2(struct i2c_client *VAR_0,
           int VAR_1, int VAR_2, void *VAR_3)
{
 unsigned char VAR_4[9];
 int VAR_5;

 VAR_4[0] = (unsigned char)VAR_1;
 FUNC_1(&VAR_4[1], VAR_3, VAR_2);

 VAR_5 = FUNC_0(VAR_0, VAR_4, VAR_2 + 1);
 if (VAR_5 < 0)
  return VAR_5;
 return 0;
}
