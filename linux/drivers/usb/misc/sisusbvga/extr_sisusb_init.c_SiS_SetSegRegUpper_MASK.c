
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct SiS_Private {int SiS_P3cd; int SiS_P3cb; } ;


 int FUNC_0 (struct SiS_Private*,int ) ;
 int FUNC_1 (struct SiS_Private*,int ,unsigned short) ;

__attribute__((used)) static void FUNC_2(struct SiS_Private *VAR_0, unsigned short VAR_1)
{
 unsigned short VAR_2;

 VAR_1 &= 0x00ff;
 VAR_2 = FUNC_0(VAR_0, VAR_0->SiS_P3cb) & 0x0f;
 VAR_2 |= (VAR_1 & 0xf0);
 FUNC_1(VAR_0, VAR_0->SiS_P3cb, VAR_2);
 VAR_2 = FUNC_0(VAR_0, VAR_0->SiS_P3cd) & 0x0f;
 VAR_2 |= (VAR_1 << 4);
 FUNC_1(VAR_0, VAR_0->SiS_P3cd, VAR_2);
}
