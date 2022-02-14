
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int const u8 ;


 unsigned int VAR_0 ;

bool FUNC_0(const u8 *VAR_1, unsigned int VAR_2,
      unsigned int VAR_3)
{
 unsigned int VAR_4 = VAR_2 / VAR_0;
 u8 VAR_5 = 1 << (VAR_2 - (VAR_4 * VAR_0));

 if (VAR_4 >= VAR_3)
  return 0;

 return VAR_1[VAR_4] & VAR_5;
}
