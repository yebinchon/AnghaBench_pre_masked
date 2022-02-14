
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct SiS_Private {int SiS_P3c4; TYPE_2__* SiS_VCLKData; TYPE_1__* SiS_RefIndex; } ;
struct TYPE_4__ {unsigned short SR2B; unsigned short SR2C; } ;
struct TYPE_3__ {unsigned short Ext_CRTVCLK; } ;


 int FUNC_0 (struct SiS_Private*,int ,int,int) ;
 int FUNC_1 (struct SiS_Private*,int ,int,int) ;

__attribute__((used)) static void
FUNC_2(struct SiS_Private *VAR_0, unsigned short VAR_1,
  unsigned short VAR_2)
{
 unsigned short VAR_3 = VAR_0->SiS_RefIndex[VAR_2].Ext_CRTVCLK;
 unsigned short VAR_4 = VAR_0->SiS_VCLKData[VAR_3].SR2B;
 unsigned short VAR_5 = VAR_0->SiS_VCLKData[VAR_3].SR2C;

 FUNC_1(VAR_0, VAR_0->SiS_P3c4, 0x31, 0xCF);

 FUNC_0(VAR_0, VAR_0->SiS_P3c4, 0x2B, VAR_4);
 FUNC_0(VAR_0, VAR_0->SiS_P3c4, 0x2C, VAR_5);
 FUNC_0(VAR_0, VAR_0->SiS_P3c4, 0x2D, 0x01);
}
