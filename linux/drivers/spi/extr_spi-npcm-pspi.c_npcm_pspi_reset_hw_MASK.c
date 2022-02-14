
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct npcm_pspi {int id; int rst_regmap; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ,int) ;

__attribute__((used)) static void FUNC_1(struct npcm_pspi *VAR_2)
{
 FUNC_0(VAR_2->rst_regmap, VAR_0,
       VAR_1 << VAR_2->id);
 FUNC_0(VAR_2->rst_regmap, VAR_0, 0x0);
}
