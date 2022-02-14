
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct SiS_Private {int SiS_P3c4; int SiS_P3d4; TYPE_1__* SiS_RefIndex; } ;
struct TYPE_2__ {unsigned short Ext_InfoFlag; } ;


 unsigned short VAR_0 ;
 unsigned short FUNC_0 (struct SiS_Private*,unsigned short,unsigned short,unsigned short) ;
 int FUNC_1 (struct SiS_Private*,int ,int,unsigned short) ;
 int FUNC_2 (struct SiS_Private*,int ,int,int,unsigned short) ;

__attribute__((used)) static void
FUNC_3(struct SiS_Private *VAR_1, unsigned short VAR_2,
    unsigned short VAR_3, unsigned short VAR_4)
{
 unsigned short VAR_5 = FUNC_0(VAR_1, VAR_2, VAR_3, VAR_4);
 unsigned short VAR_6 = VAR_1->SiS_RefIndex[VAR_4].Ext_InfoFlag;
 unsigned short VAR_7;

 VAR_7 = (VAR_5 >> 8) & 0x0f;
 FUNC_2(VAR_1, VAR_1->SiS_P3c4, 0x0E, 0xF0, VAR_7);

 FUNC_1(VAR_1, VAR_1->SiS_P3d4, 0x13, (VAR_5 & 0xFF));

 if (VAR_6 & VAR_0)
  VAR_5 >>= 1;

 VAR_5 <<= 5;
 VAR_7 = (VAR_5 >> 8) & 0xff;
 if (VAR_5 & 0xff)
  VAR_7++;
 VAR_7++;
 FUNC_1(VAR_1, VAR_1->SiS_P3c4, 0x10, VAR_7);
}
