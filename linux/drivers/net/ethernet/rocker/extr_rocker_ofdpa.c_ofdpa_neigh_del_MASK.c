
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ofdpa_neigh_tbl_entry {scalar_t__ ref_count; int entry; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (struct ofdpa_neigh_tbl_entry*) ;

__attribute__((used)) static void FUNC_2(struct ofdpa_neigh_tbl_entry *VAR_0)
{
 if (--VAR_0->ref_count == 0) {
  FUNC_0(&VAR_0->entry);
  FUNC_1(VAR_0);
 }
}
