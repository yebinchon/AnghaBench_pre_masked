
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct ath10k_ce {int paddr_rri; int vaddr_rri; } ;
struct ath10k {int dev; } ;


 int VAR_0 ;
 struct ath10k_ce* FUNC_0 (struct ath10k*) ;
 int FUNC_1 (int ,int,int ,int ) ;

void FUNC_2(struct ath10k *VAR_1)
{
 struct ath10k_ce *VAR_2 = FUNC_0(VAR_1);

 FUNC_1(VAR_1->dev, (VAR_0 * sizeof(u32)),
     VAR_2->vaddr_rri,
     VAR_2->paddr_rri);
}
