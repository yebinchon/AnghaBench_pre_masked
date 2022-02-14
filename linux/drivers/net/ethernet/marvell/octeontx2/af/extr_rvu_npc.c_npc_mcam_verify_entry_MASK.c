
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u16 ;
struct npc_mcam {int bmap_entries; scalar_t__* entry2pfvf_map; } ;


 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static int FUNC_0(struct npc_mcam *VAR_2,
     u16 VAR_3, int VAR_4)
{



 if (VAR_4 >= VAR_2->bmap_entries)
  return VAR_0;

 if (VAR_3 != VAR_2->entry2pfvf_map[VAR_4])
  return VAR_1;

 return 0;
}
