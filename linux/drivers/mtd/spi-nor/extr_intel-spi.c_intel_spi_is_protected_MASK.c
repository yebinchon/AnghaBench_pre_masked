
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned int u32 ;
struct intel_spi {int pr_num; scalar_t__ pregs; } ;


 scalar_t__ FUNC_0 (int) ;
 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 unsigned int VAR_4 ;
 unsigned int FUNC_1 (scalar_t__) ;

__attribute__((used)) static bool FUNC_2(const struct intel_spi *VAR_5,
       unsigned int VAR_6, unsigned int VAR_7)
{
 int VAR_8;

 for (VAR_8 = 0; VAR_8 < VAR_5->pr_num; VAR_8++) {
  u32 VAR_9, VAR_10, VAR_11;

  VAR_11 = FUNC_1(VAR_5->pregs + FUNC_0(VAR_8));
  if (!(VAR_11 & (VAR_4 | VAR_3)))
   continue;

  VAR_10 = (VAR_11 & VAR_1) >> VAR_2;
  VAR_9 = VAR_11 & VAR_0;

  if (VAR_9 >= VAR_6 && VAR_10 <= VAR_7)
   return 1;
 }

 return 0;
}
