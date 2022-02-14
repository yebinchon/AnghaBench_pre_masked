
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct atmel_mci {int dummy; } ;


 unsigned int FUNC_0 (struct atmel_mci*) ;
 unsigned int FUNC_1 (unsigned int) ;

__attribute__((used)) static inline unsigned int FUNC_2(struct atmel_mci *VAR_0,
       unsigned int VAR_1)
{
 unsigned int VAR_2 = FUNC_0(VAR_0);
 unsigned int VAR_3 = 2;

 if (VAR_2 >= 0x600)
  VAR_3 = 1;

 if (VAR_1 > 1)
  return FUNC_1(VAR_1) - VAR_3;
 else
  return 0;
}
