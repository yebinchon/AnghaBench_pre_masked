
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned int u8 ;


 unsigned int FUNC_0 (unsigned int*) ;

__attribute__((used)) static unsigned int FUNC_1(unsigned int VAR_0,
      unsigned int VAR_1,
      u8 *VAR_2, unsigned int VAR_3, u8 *VAR_4)
{
 const unsigned int VAR_5 = FUNC_0(VAR_2 + VAR_3 / 8) >> (VAR_3 & 7);
 const unsigned int VAR_6 = VAR_5 & VAR_1;

 *VAR_4 = (VAR_5 >> VAR_0) & 3;
 return VAR_6;
}
