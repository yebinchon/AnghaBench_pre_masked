
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct SiS_Private {scalar_t__ ChipType; int SiS_VBType; int SiS_LCDInfo; int SiS_Part4Port; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 (struct SiS_Private*) ;
 scalar_t__ FUNC_1 (struct SiS_Private*) ;
 int FUNC_2 (int ,int,int) ;
 int FUNC_3 (int ,int,int) ;
 int FUNC_4 (int ,int,int) ;
 int VAR_2 ;
 int VAR_3 ;

__attribute__((used)) static void
FUNC_5(struct SiS_Private *VAR_4)
{
  if(VAR_4->ChipType >= VAR_1) {
     if(VAR_4->SiS_VBType & VAR_2) {
 if((FUNC_0(VAR_4)) ||
    (FUNC_1(VAR_4))) {
    if(VAR_4->SiS_LCDInfo & VAR_0) {
       FUNC_4(VAR_4->SiS_Part4Port,0x27,0x2c);
    } else {
       FUNC_3(VAR_4->SiS_Part4Port,0x27,~0x20);
    }
 }
     }
  }
  if(VAR_4->SiS_VBType & VAR_3) {
     FUNC_2(VAR_4->SiS_Part4Port,0x2a,0x00);



     FUNC_2(VAR_4->SiS_Part4Port,0x34,0x10);
  }
}
