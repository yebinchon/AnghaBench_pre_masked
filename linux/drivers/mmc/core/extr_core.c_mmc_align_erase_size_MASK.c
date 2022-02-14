
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mmc_card {unsigned int erase_size; } ;


 scalar_t__ FUNC_0 (unsigned int) ;
 unsigned int FUNC_1 (unsigned int,unsigned int) ;
 unsigned int FUNC_2 (unsigned int,unsigned int) ;

__attribute__((used)) static unsigned int FUNC_3(struct mmc_card *VAR_0,
      unsigned int *VAR_1,
      unsigned int *VAR_2,
      unsigned int VAR_3)
{
 unsigned int VAR_4 = *VAR_1, VAR_5 = VAR_3, VAR_6;





 if (FUNC_0(VAR_0->erase_size)) {
  unsigned int VAR_7 = VAR_4;

  VAR_4 = FUNC_2(VAR_7, VAR_0->erase_size);
  VAR_6 = VAR_4 - VAR_7;

  if (VAR_5 > VAR_6)
   VAR_5 -= VAR_6;
  else
   return 0;

  VAR_5 = FUNC_1(VAR_5, VAR_0->erase_size);
 } else {
  VAR_6 = VAR_4 % VAR_0->erase_size;
  if (VAR_6) {
   VAR_6 = VAR_0->erase_size - VAR_6;
   VAR_4 += VAR_6;
   if (VAR_5 > VAR_6)
    VAR_5 -= VAR_6;
   else
    return 0;
  }

  VAR_6 = VAR_5 % VAR_0->erase_size;
  if (VAR_6)
   VAR_5 -= VAR_6;
 }

 if (VAR_5 == 0)
  return 0;

 *VAR_2 = VAR_4 + VAR_5;
 *VAR_1 = VAR_4;

 return VAR_5;
}
