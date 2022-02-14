
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct SiS_Private {int SiS_P3c4; } ;


 int FUNC_0 (struct SiS_Private*,int ,int,int) ;
 int FUNC_1 (struct SiS_Private*,int ,int,int) ;

__attribute__((used)) static void FUNC_2(struct SiS_Private *VAR_0, unsigned short VAR_1)
{
 int VAR_2;

 for (VAR_2 = 0x0A; VAR_2 <= 0x0E; VAR_2++) {
  FUNC_0(VAR_0, VAR_0->SiS_P3c4, VAR_2, 0x00);
 }

 FUNC_1(VAR_0, VAR_0->SiS_P3c4, 0x37, 0xFE);
}
