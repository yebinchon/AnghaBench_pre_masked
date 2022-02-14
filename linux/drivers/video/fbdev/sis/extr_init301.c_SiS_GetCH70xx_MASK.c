
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct SiS_Private {int SiS_IF_DEF_CH70xx; } ;


 unsigned short FUNC_0 (struct SiS_Private*,unsigned short) ;
 unsigned short FUNC_1 (struct SiS_Private*,unsigned short) ;

__attribute__((used)) static
unsigned short
FUNC_2(struct SiS_Private *VAR_0, unsigned short VAR_1)
{
  if(VAR_0->SiS_IF_DEF_CH70xx == 1)
     return FUNC_0(VAR_0, VAR_1);
  else
     return FUNC_1(VAR_0, VAR_1);
}
