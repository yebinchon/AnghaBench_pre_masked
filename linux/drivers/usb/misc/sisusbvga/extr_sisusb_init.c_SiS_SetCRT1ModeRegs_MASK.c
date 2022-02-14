
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct SiS_Private {scalar_t__ SiS_ModeType; int SiS_P3d4; int SiS_P3c4; TYPE_3__* SiS_RefIndex; TYPE_2__* SiS_EModeIDTable; TYPE_1__* SiS_SModeIDTable; } ;
struct TYPE_6__ {unsigned short Ext_InfoFlag; } ;
struct TYPE_5__ {unsigned short Ext_ModeFlag; } ;
struct TYPE_4__ {unsigned short St_ModeFlag; } ;


 unsigned short VAR_0 ;
 unsigned short VAR_1 ;
 unsigned short VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct SiS_Private*,int ,int) ;
 int FUNC_1 (struct SiS_Private*,int ,int,int) ;
 int FUNC_2 (struct SiS_Private*,int ,int,int) ;
 int FUNC_3 (struct SiS_Private*,int ,int,int,unsigned short) ;
 int FUNC_4 (struct SiS_Private*,int ,int,int) ;
 int FUNC_5 (struct SiS_Private*,unsigned short,unsigned short) ;

__attribute__((used)) static void
FUNC_6(struct SiS_Private *VAR_6, unsigned short VAR_7,
      unsigned short VAR_8, unsigned short VAR_9)
{
 unsigned short VAR_10, VAR_11 = 0, VAR_12;

 if (VAR_7 <= 0x13)
  VAR_12 = VAR_6->SiS_SModeIDTable[VAR_8].St_ModeFlag;
 else {
  VAR_12 = VAR_6->SiS_EModeIDTable[VAR_8].Ext_ModeFlag;
  VAR_11 = VAR_6->SiS_RefIndex[VAR_9].Ext_InfoFlag;
 }


 FUNC_2(VAR_6, VAR_6->SiS_P3c4, 0x1F, 0x3F);

 VAR_10 = 0;
 if (VAR_7 > 0x13) {
  if (VAR_6->SiS_ModeType > VAR_3) {
   VAR_10 |= 0x02;
   VAR_10 |= ((VAR_6->SiS_ModeType - VAR_5) << 2);
  }
  if (VAR_11 & VAR_1)
   VAR_10 |= 0x20;
 }
 FUNC_3(VAR_6, VAR_6->SiS_P3c4, 0x06, 0xC0, VAR_10);

 VAR_10 = 0;
 if (VAR_11 & VAR_1) {

  unsigned short VAR_13 =
      (FUNC_0(VAR_6, VAR_6->SiS_P3d4, 0x04) |
       ((FUNC_0(VAR_6, VAR_6->SiS_P3c4, 0x0b) & 0xc0) << 2))
      - 3;
  unsigned short VAR_14 =
      (FUNC_0(VAR_6, VAR_6->SiS_P3d4, 0x00) |
       ((FUNC_0(VAR_6, VAR_6->SiS_P3c4, 0x0b) & 0x03) << 8))
      + 5;
  VAR_10 = VAR_13 - (VAR_14 >> 1) + 3;
 }
 FUNC_1(VAR_6, VAR_6->SiS_P3d4, 0x19, (VAR_10 & 0xFF));
 FUNC_3(VAR_6, VAR_6->SiS_P3d4, 0x1a, 0xFC, (VAR_10 >> 8));

 if (VAR_12 & VAR_0)
  FUNC_4(VAR_6, VAR_6->SiS_P3c4, 0x01, 0x08);

 VAR_10 = 0;
 if (VAR_12 & VAR_2)
  VAR_10 = 0x08;
 FUNC_3(VAR_6, VAR_6->SiS_P3c4, 0x0F, 0xB7, VAR_10);

 if ((VAR_6->SiS_ModeType == VAR_3) && (VAR_7 > 0x13))
  FUNC_4(VAR_6, VAR_6->SiS_P3c4, 0x0F, 0x40);

 FUNC_2(VAR_6, VAR_6->SiS_P3c4, 0x31, 0xfb);

 VAR_10 = 0x60;
 if (VAR_6->SiS_ModeType != VAR_4) {
  VAR_10 ^= 0x60;
  if (VAR_6->SiS_ModeType != VAR_3)
   VAR_10 ^= 0xA0;
 }
 FUNC_3(VAR_6, VAR_6->SiS_P3c4, 0x21, 0x1F, VAR_10);

 FUNC_5(VAR_6, VAR_7, VAR_9);

 if (FUNC_0(VAR_6, VAR_6->SiS_P3d4, 0x31) & 0x40)
  FUNC_1(VAR_6, VAR_6->SiS_P3d4, 0x52, 0x2c);
 else
  FUNC_1(VAR_6, VAR_6->SiS_P3d4, 0x52, 0x6c);
}
