
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct npc_mcam {int banksize; scalar_t__ keysize; } ;


 scalar_t__ VAR_0 ;

__attribute__((used)) static int FUNC_0(struct npc_mcam *VAR_1, int VAR_2)
{
 int VAR_3 = VAR_2 / VAR_1->banksize;


 if (VAR_1->keysize == VAR_0)
  return VAR_3 ? 2 : 0;

 return VAR_3;
}
