
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct i2o_header {int dummy; } ;


 unsigned int VAR_0 ;

__attribute__((used)) static inline unsigned short FUNC_0(unsigned int VAR_1)
{
 unsigned int VAR_2;
 unsigned short VAR_3;

 if (VAR_1 > VAR_0)
  VAR_1 = VAR_0;

 VAR_2 = sizeof(struct i2o_header) + VAR_1;

 VAR_3 = VAR_2 / sizeof(u32);

 if (VAR_2 % sizeof(u32))
        VAR_3++;

 return VAR_3;
}
