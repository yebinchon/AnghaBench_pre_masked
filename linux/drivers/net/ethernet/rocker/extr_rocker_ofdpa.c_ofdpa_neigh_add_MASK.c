
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ofdpa_neigh_tbl_entry {int ip_addr; int entry; int ref_count; scalar_t__ index; } ;
struct ofdpa {int neigh_tbl; int neigh_tbl_next_index; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int *,int ) ;

__attribute__((used)) static void FUNC_2(struct ofdpa *VAR_0,
       struct ofdpa_neigh_tbl_entry *VAR_1)
{
 VAR_1->index = VAR_0->neigh_tbl_next_index++;
 VAR_1->ref_count++;
 FUNC_1(VAR_0->neigh_tbl, &VAR_1->entry,
   FUNC_0(VAR_1->ip_addr));
}
