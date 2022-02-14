
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct npcm_pspi {scalar_t__ base; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (int ,scalar_t__) ;

__attribute__((used)) static void FUNC_2(struct npcm_pspi *VAR_2, int VAR_3)
{
 u16 VAR_4;

 VAR_4 = FUNC_0(VAR_0 + VAR_2->base);

 switch (VAR_3) {
 case 8:
  VAR_4 &= ~VAR_1;
  break;
 case 16:
  VAR_4 |= VAR_1;
  break;
 }

 FUNC_1(VAR_4, VAR_0 + VAR_2->base);
}
