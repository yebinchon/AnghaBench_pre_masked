
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
typedef int u16 ;
struct npcm_pspi {scalar_t__ base; int clk; } ;


 int FUNC_0 (int ,int) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (int,scalar_t__) ;

__attribute__((used)) static void FUNC_4(struct npcm_pspi *VAR_2, unsigned int VAR_3)
{
 u32 VAR_4;
 u16 VAR_5;


 VAR_4 = FUNC_0(FUNC_1(VAR_2->clk), (2 * VAR_3)) - 1;

 VAR_5 = FUNC_2(VAR_0 + VAR_2->base);
 VAR_5 &= ~VAR_1;
 FUNC_3(VAR_5 | (VAR_4 << 9), VAR_0 + VAR_2->base);
}
