
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bnad {int dummy; } ;
struct bna_cq_entry {scalar_t__ valid; } ;
struct bna_ccb {int q_depth; scalar_t__ sw_q; } ;



__attribute__((used)) static void
FUNC_0(struct bnad *VAR_0, struct bna_ccb *VAR_1)
{
 struct bna_cq_entry *VAR_2;
 int VAR_3;

 for (VAR_3 = 0; VAR_3 < VAR_1->q_depth; VAR_3++) {
  VAR_2 = &((struct bna_cq_entry *)VAR_1->sw_q)[VAR_3];
  VAR_2->valid = 0;
 }
}
