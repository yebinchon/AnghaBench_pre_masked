
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u16 ;
struct npc_mcam {int bmap_fcnt; int bmap_reverse; int bmap; scalar_t__ bmap_entries; } ;


 int FUNC_0 (scalar_t__,int ) ;

__attribute__((used)) static void FUNC_1(struct npc_mcam *VAR_0, u16 VAR_1)
{
 u16 VAR_2, VAR_3;

 VAR_2 = VAR_1;
 VAR_3 = VAR_0->bmap_entries - VAR_1 - 1;

 FUNC_0(VAR_2, VAR_0->bmap);
 FUNC_0(VAR_3, VAR_0->bmap_reverse);
 VAR_0->bmap_fcnt++;
}
