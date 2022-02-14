
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;


 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static int FUNC_0(uint32_t VAR_2)
{







 int VAR_3 = VAR_2 / 1024 / 1024;
 int VAR_4 = (VAR_3 * 2) & ~0x3f;

 if (VAR_4 < VAR_1)
  return VAR_1;
 if (VAR_4 > VAR_0)
  return VAR_0;

 return VAR_4;
}
