
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct zone_entry {int * free_table; int * l2p_table; scalar_t__ unused_blk_cnt; scalar_t__ get_index; scalar_t__ set_index; scalar_t__ build_flag; } ;


 int FUNC_0 (int *) ;

__attribute__((used)) static inline void FUNC_1(struct zone_entry *VAR_0)
{
 if (!VAR_0)
  return;

 VAR_0->build_flag = 0;
 VAR_0->set_index = 0;
 VAR_0->get_index = 0;
 VAR_0->unused_blk_cnt = 0;
 FUNC_0(VAR_0->l2p_table);
 VAR_0->l2p_table = ((void*)0);
 FUNC_0(VAR_0->free_table);
 VAR_0->free_table = ((void*)0);
}
