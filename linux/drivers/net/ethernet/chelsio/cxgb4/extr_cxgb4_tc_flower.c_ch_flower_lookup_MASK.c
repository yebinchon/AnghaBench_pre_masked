
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ch_tc_flower_entry {int dummy; } ;
struct adapter {int flower_ht_params; int flower_tbl; } ;


 struct ch_tc_flower_entry* FUNC_0 (int *,unsigned long*,int ) ;

__attribute__((used)) static struct ch_tc_flower_entry *FUNC_1(struct adapter *VAR_0,
         unsigned long VAR_1)
{
 return FUNC_0(&VAR_0->flower_tbl, &VAR_1,
          VAR_0->flower_ht_params);
}
