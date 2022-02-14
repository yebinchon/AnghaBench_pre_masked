
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u32 ;
struct xgene_enet_desc_ring {size_t size; size_t slots; int id; int * raw_desc; } ;


 size_t FUNC_0 (scalar_t__) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (struct xgene_enet_desc_ring*) ;
 size_t FUNC_2 (int ,size_t) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int *) ;
 scalar_t__ FUNC_5 (int ) ;
 scalar_t__ FUNC_6 (int ) ;
 int FUNC_7 (struct xgene_enet_desc_ring*,int ,size_t*) ;
 int FUNC_8 (struct xgene_enet_desc_ring*,int ,size_t) ;
 int FUNC_9 (struct xgene_enet_desc_ring*) ;
 int FUNC_10 (struct xgene_enet_desc_ring*) ;

__attribute__((used)) static struct xgene_enet_desc_ring *FUNC_11(
        struct xgene_enet_desc_ring *VAR_2)
{
 u32 VAR_3 = VAR_2->size;
 u32 VAR_4, VAR_5;
 bool VAR_6;

 FUNC_1(VAR_2);
 FUNC_10(VAR_2);
 FUNC_9(VAR_2);

 VAR_2->slots = FUNC_2(VAR_2->id, VAR_3);

 VAR_6 = FUNC_3(VAR_2->id);
 if (VAR_6 || FUNC_6(VAR_2->id) != VAR_1)
  return VAR_2;

 for (VAR_4 = 0; VAR_4 < VAR_2->slots; VAR_4++)
  FUNC_4(&VAR_2->raw_desc[VAR_4]);

 FUNC_7(VAR_2, VAR_0, &VAR_5);
 VAR_5 |= FUNC_0(31 - FUNC_5(VAR_2->id));
 FUNC_8(VAR_2, VAR_0, VAR_5);

 return VAR_2;
}
