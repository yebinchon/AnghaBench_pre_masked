
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct SiS_Private {int SiS_VBInfo; scalar_t__ SiS_ModeType; int SiS_P3c4; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct SiS_Private*,unsigned short,unsigned short) ;
 int FUNC_1 (int ,int,int) ;

__attribute__((used)) static void
FUNC_2(struct SiS_Private *VAR_4, unsigned short VAR_5, unsigned short VAR_6)
{

  if(VAR_4->SiS_VBInfo & VAR_2) return;

  if(VAR_4->SiS_ModeType == VAR_1) {
     if(!(VAR_4->SiS_VBInfo & (VAR_3 | VAR_0))) {
        FUNC_1(VAR_4->SiS_P3c4,0x1E,0x20);
        FUNC_0(VAR_4, VAR_5, VAR_6);
     }
  }
}
