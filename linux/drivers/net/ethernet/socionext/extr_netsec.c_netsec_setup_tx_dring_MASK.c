
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct netsec_priv {struct netsec_desc_ring* desc_ring; } ;
struct netsec_desc_ring {struct netsec_de* vaddr; } ;
struct netsec_de {unsigned int attr; } ;


 int VAR_0 ;
 int VAR_1 ;
 size_t VAR_2 ;
 unsigned int VAR_3 ;

__attribute__((used)) static void FUNC_0(struct netsec_priv *VAR_4)
{
 struct netsec_desc_ring *VAR_5 = &VAR_4->desc_ring[VAR_2];
 int VAR_6;

 for (VAR_6 = 0; VAR_6 < VAR_0; VAR_6++) {
  struct netsec_de *VAR_7;

  VAR_7 = VAR_5->vaddr + (VAR_1 * VAR_6);




  VAR_7->attr = 1U << VAR_3;
 }
}
