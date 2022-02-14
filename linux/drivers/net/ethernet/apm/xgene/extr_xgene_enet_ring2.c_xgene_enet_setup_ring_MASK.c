
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u32 ;
struct xgene_enet_desc_ring {size_t slots; int id; int irq_mbox_dma; int * raw_desc; int size; } ;


 size_t VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (struct xgene_enet_desc_ring*) ;
 size_t FUNC_1 (int,int ) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int *) ;
 scalar_t__ FUNC_4 (int) ;
 int FUNC_5 (struct xgene_enet_desc_ring*,size_t,int) ;
 int FUNC_6 (struct xgene_enet_desc_ring*) ;
 int FUNC_7 (struct xgene_enet_desc_ring*) ;

__attribute__((used)) static struct xgene_enet_desc_ring *FUNC_8(
        struct xgene_enet_desc_ring *VAR_3)
{
 bool VAR_4;
 u32 VAR_5, VAR_6;

 FUNC_0(VAR_3);
 FUNC_7(VAR_3);
 FUNC_6(VAR_3);

 VAR_3->slots = FUNC_1(VAR_3->id, VAR_3->size);

 VAR_4 = FUNC_2(VAR_3->id);
 if (VAR_4 || FUNC_4(VAR_3->id) != VAR_2)
  return VAR_3;

 VAR_5 = VAR_0 + (4 * (VAR_3->id & VAR_1));
 FUNC_5(VAR_3, VAR_5, VAR_3->irq_mbox_dma >> 10);

 for (VAR_6 = 0; VAR_6 < VAR_3->slots; VAR_6++)
  FUNC_3(&VAR_3->raw_desc[VAR_6]);

 return VAR_3;
}
