
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fm10k_swapi_table_info {void* avail; void* used; } ;
struct fm10k_global_table_data {int avail; int used; } ;


 void* FUNC_0 (int ) ;

__attribute__((used)) static void FUNC_1(struct fm10k_global_table_data *VAR_0,
        struct fm10k_swapi_table_info *VAR_1)
{

 VAR_1->used = FUNC_0(VAR_0->used);
 VAR_1->avail = FUNC_0(VAR_0->avail);
}
