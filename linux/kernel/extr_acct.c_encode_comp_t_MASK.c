
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int comp_t ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned long VAR_2 ;

__attribute__((used)) static comp_t FUNC_0(unsigned long VAR_3)
{
 int VAR_4, VAR_5;

 VAR_4 = VAR_5 = 0;
 while (VAR_3 > VAR_2) {
  VAR_5 = VAR_3 & (1 << (VAR_0 - 1));
  VAR_3 >>= VAR_0;
  VAR_4++;
 }




 if (VAR_5 && (++VAR_3 > VAR_2)) {
  VAR_3 >>= VAR_0;
  VAR_4++;
 }




 VAR_4 <<= VAR_1;
 VAR_4 += VAR_3;
 return VAR_4;
}
