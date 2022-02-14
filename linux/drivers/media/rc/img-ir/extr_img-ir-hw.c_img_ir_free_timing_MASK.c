
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned int u32 ;
struct img_ir_free_timing {int minlen; int maxlen; unsigned long ft_min; } ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;

__attribute__((used)) static u32 FUNC_0(const struct img_ir_free_timing *VAR_3,
         unsigned long VAR_4)
{
 unsigned int VAR_5, VAR_6, VAR_7;

 if (VAR_3->minlen < 30)
  VAR_5 = VAR_3->minlen & -2;
 else
  VAR_5 = 30;

 if (VAR_3->maxlen < 48)
  VAR_6 = (VAR_3->maxlen + 1) & -2;
 else
  VAR_6 = 48;

 VAR_7 = (VAR_3->ft_min*VAR_4 + 999999) / 1000000;
 VAR_7 = (VAR_7 + 7) >> 3;

 return (VAR_6 << VAR_1) |
  (VAR_5 << VAR_2) |
  (VAR_7 << VAR_0);
}
