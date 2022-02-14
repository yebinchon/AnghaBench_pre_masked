
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct msb_data {int * card; int cache; int lba_to_pba_table; int used_blocks_bitmap; int boot_page; } ;


 int FUNC_0 (int ) ;

__attribute__((used)) static void FUNC_1(struct msb_data *VAR_0)
{
 FUNC_0(VAR_0->boot_page);
 FUNC_0(VAR_0->used_blocks_bitmap);
 FUNC_0(VAR_0->lba_to_pba_table);
 FUNC_0(VAR_0->cache);
 VAR_0->card = ((void*)0);
}
