
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {size_t size; int * vaddr_txbuff_32; int paddr; } ;
struct ath10k_htt {TYPE_1__ txbuf; struct ath10k* ar; } ;
struct ath10k {int dev; } ;


 int FUNC_0 (int ,size_t,int *,int ) ;

__attribute__((used)) static void FUNC_1(struct ath10k_htt *VAR_0)
{
 struct ath10k *VAR_1 = VAR_0->ar;
 size_t VAR_2;

 if (!VAR_0->txbuf.vaddr_txbuff_32)
  return;

 VAR_2 = VAR_0->txbuf.size;
 FUNC_0(VAR_1->dev, VAR_2, VAR_0->txbuf.vaddr_txbuff_32,
     VAR_0->txbuf.paddr);
 VAR_0->txbuf.vaddr_txbuff_32 = ((void*)0);
}
