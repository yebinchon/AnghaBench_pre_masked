
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct netsec_priv {int dev; struct netsec_desc_ring* desc_ring; } ;
struct netsec_desc_ring {int * desc; int * vaddr; int desc_dma; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int,int *,int ) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static void FUNC_2(struct netsec_priv *VAR_2, int VAR_3)
{
 struct netsec_desc_ring *VAR_4 = &VAR_2->desc_ring[VAR_3];

 if (VAR_4->vaddr) {
  FUNC_0(VAR_2->dev, VAR_1 * VAR_0,
      VAR_4->vaddr, VAR_4->desc_dma);
  VAR_4->vaddr = ((void*)0);
 }

 FUNC_1(VAR_4->desc);
 VAR_4->desc = ((void*)0);
}
