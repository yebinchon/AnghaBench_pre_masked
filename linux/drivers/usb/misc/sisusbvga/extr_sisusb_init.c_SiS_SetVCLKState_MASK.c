
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct SiS_Private {int SiS_P3c4; TYPE_2__* SiS_VCLKData; TYPE_1__* SiS_RefIndex; } ;
struct TYPE_4__ {unsigned short CLOCK; } ;
struct TYPE_3__ {unsigned short Ext_CRTVCLK; } ;


 int FUNC_0 (struct SiS_Private*,int ,int,int) ;
 int FUNC_1 (struct SiS_Private*,int ,int,int,unsigned short) ;

__attribute__((used)) static void
FUNC_2(struct SiS_Private *VAR_0, unsigned short VAR_1,
   unsigned short VAR_2)
{
 unsigned short VAR_3 = 0, VAR_4 = 0, VAR_5 = 0;

 if (VAR_1 > 0x13) {
  VAR_5 = VAR_0->SiS_RefIndex[VAR_2].Ext_CRTVCLK;
  VAR_4 = VAR_0->SiS_VCLKData[VAR_5].CLOCK;
 }

 if (VAR_4 >= 166)
  VAR_3 |= 0x0c;
 FUNC_1(VAR_0, VAR_0->SiS_P3c4, 0x32, 0xf3, VAR_3);

 if (VAR_4 >= 166)
  FUNC_0(VAR_0, VAR_0->SiS_P3c4, 0x1f, 0xe7);


 VAR_3 = 0x03;
 if (VAR_4 >= 260)
  VAR_3 = 0x00;
 else if (VAR_4 >= 160)
  VAR_3 = 0x01;
 else if (VAR_4 >= 135)
  VAR_3 = 0x02;

 FUNC_1(VAR_0, VAR_0->SiS_P3c4, 0x07, 0xF8, VAR_3);
}
