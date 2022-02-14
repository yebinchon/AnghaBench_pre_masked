
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u16 ;
struct rvu {int dummy; } ;
struct npc_mcam {size_t bmap_entries; size_t* entry2pfvf_map; size_t* entry2cntr_map; } ;


 size_t VAR_0 ;
 int FUNC_0 (struct rvu*,struct npc_mcam*,int,size_t,int) ;
 int FUNC_1 (struct npc_mcam*,size_t) ;
 int FUNC_2 (struct rvu*,struct npc_mcam*,int,size_t,size_t) ;

__attribute__((used)) static void FUNC_3(struct rvu *VAR_1, struct npc_mcam *VAR_2,
          int VAR_3, u16 VAR_4)
{
 u16 VAR_5, VAR_6;


 for (VAR_5 = 0; VAR_5 < VAR_2->bmap_entries; VAR_5++) {
  if (VAR_2->entry2pfvf_map[VAR_5] == VAR_4) {
   VAR_2->entry2pfvf_map[VAR_5] = VAR_0;

   FUNC_1(VAR_2, VAR_5);

   FUNC_0(VAR_1, VAR_2, VAR_3, VAR_5, 0);


   VAR_6 = VAR_2->entry2cntr_map[VAR_5];
   if (VAR_6 != VAR_0)
    FUNC_2(VAR_1, VAR_2,
             VAR_3, VAR_5,
             VAR_6);
  }
 }
}
