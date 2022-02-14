
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned int uchar ;
struct sx_period {unsigned int reg_value; } ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 size_t FUNC_0 (unsigned int,struct sx_period const*) ;

__attribute__((used)) static uchar
FUNC_1(unsigned int VAR_2, unsigned int VAR_3, unsigned int VAR_4,
               const struct sx_period *VAR_5)
{



 uchar VAR_6;

 if (VAR_3 && VAR_4) {
  VAR_4 = VAR_1;
  VAR_2 *= 2;
 } else {
  VAR_4 = 0;
 }
 VAR_2 *= 4;
 VAR_6 = VAR_5[FUNC_0(VAR_2,VAR_5)].reg_value;
 VAR_6 |= (VAR_3 < VAR_0) ? VAR_3 : VAR_0;
 VAR_6 |= VAR_4;
 return VAR_6;
}
