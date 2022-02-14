
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct SiS_Private {TYPE_1__* SiS_RefIndex; } ;
struct TYPE_2__ {unsigned short Ext_InfoFlag; unsigned short XRes; } ;


 unsigned short VAR_0 ;
 unsigned short FUNC_0 (struct SiS_Private*,unsigned short,unsigned short) ;

__attribute__((used)) static unsigned short
FUNC_1(struct SiS_Private *VAR_1, unsigned short VAR_2,
       unsigned short VAR_3, unsigned short VAR_4)
{
 unsigned short VAR_5, VAR_6, VAR_7, VAR_8;

 VAR_8 = VAR_1->SiS_RefIndex[VAR_4].Ext_InfoFlag;
 VAR_5 = VAR_1->SiS_RefIndex[VAR_4].XRes;

 VAR_7 = FUNC_0(VAR_1, VAR_2, VAR_3);

 VAR_6 = VAR_5 / 16;

 if (VAR_8 & VAR_0)
  VAR_6 <<= 1;

 VAR_6 *= VAR_7;

 if (VAR_5 % 16)
  VAR_6 += (VAR_7 >> 1);

 return VAR_6;
}
