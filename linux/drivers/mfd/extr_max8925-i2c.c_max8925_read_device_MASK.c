
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct i2c_client {int dummy; } ;


 int FUNC_0 (struct i2c_client*,int) ;
 int FUNC_1 (struct i2c_client*,int,int,void*) ;

__attribute__((used)) static inline int FUNC_2(struct i2c_client *VAR_0,
          int VAR_1, int VAR_2, void *VAR_3)
{
 int VAR_4;

 if (VAR_2 > 1)
  VAR_4 = FUNC_1(VAR_0, VAR_1, VAR_2, VAR_3);
 else {
  VAR_4 = FUNC_0(VAR_0, VAR_1);
  if (VAR_4 < 0)
   return VAR_4;
  *(unsigned char *)VAR_3 = (unsigned char)VAR_4;
 }
 return VAR_4;
}
