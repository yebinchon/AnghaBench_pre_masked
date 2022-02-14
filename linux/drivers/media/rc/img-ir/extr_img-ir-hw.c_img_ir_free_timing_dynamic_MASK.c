
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned int u32 ;
struct img_ir_filter {int minlen; int maxlen; } ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;

__attribute__((used)) static u32 FUNC_0(u32 VAR_4, struct img_ir_filter *VAR_5)
{
 unsigned int VAR_6, VAR_7, VAR_8, VAR_9;


 VAR_8 = VAR_5->minlen & -2;
 VAR_9 = (VAR_5->maxlen + 1) & -2;

 VAR_6 = (VAR_4 & VAR_2) >> VAR_3;
 VAR_7 = (VAR_4 & VAR_0) >> VAR_1;

 if (VAR_8 > VAR_6) {
  VAR_4 &= ~VAR_2;
  VAR_4 |= VAR_8 << VAR_3;
 }
 if (VAR_9 < VAR_7) {
  VAR_4 &= ~VAR_0;
  VAR_4 |= VAR_9 << VAR_1;
 }
 return VAR_4;
}
