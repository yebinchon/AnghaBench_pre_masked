
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct orc_scb {int dummy; } ;
struct orc_host {int index; int** allocation_map; struct orc_scb* scb_virt; } ;



__attribute__((used)) static struct orc_scb *FUNC_0(struct orc_host * VAR_0)
{
 u8 VAR_1;
 unsigned long VAR_2;
 u8 VAR_3;
 u8 VAR_4;

 VAR_1 = VAR_0->index;
 for (VAR_4 = 0; VAR_4 < 8; VAR_4++) {
  for (VAR_3 = 0; VAR_3 < 32; VAR_3++) {
   if ((VAR_0->allocation_map[VAR_1][VAR_4] >> VAR_3) & 0x01) {
    VAR_0->allocation_map[VAR_1][VAR_4] &= ~(1 << VAR_3);
    VAR_2 = VAR_3 + 32 * VAR_4;



    return VAR_0->scb_virt + VAR_2;
   }
  }
 }
 return ((void*)0);
}
