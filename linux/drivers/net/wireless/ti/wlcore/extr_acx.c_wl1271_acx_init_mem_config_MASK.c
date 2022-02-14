
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct wl1271_acx_mem_map {int dummy; } ;
struct wl1271 {int tx_blocks_available; TYPE_1__* target_mem_map; } ;
struct TYPE_3__ {int num_tx_mem_blocks; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (TYPE_1__*) ;
 TYPE_1__* FUNC_1 (int,int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct wl1271*,void*,int) ;
 int FUNC_4 (int ,char*,int ) ;
 int FUNC_5 (char*) ;

int FUNC_6(struct wl1271 *VAR_3)
{
 int VAR_4;

 VAR_3->target_mem_map = FUNC_1(sizeof(struct wl1271_acx_mem_map),
         VAR_2);
 if (!VAR_3->target_mem_map) {
  FUNC_5("couldn't allocate target memory map");
  return -VAR_1;
 }


 VAR_4 = FUNC_3(VAR_3, (void *)VAR_3->target_mem_map,
     sizeof(struct wl1271_acx_mem_map));
 if (VAR_4 < 0) {
  FUNC_5("couldn't retrieve firmware memory map");
  FUNC_0(VAR_3->target_mem_map);
  VAR_3->target_mem_map = ((void*)0);
  return VAR_4;
 }


 VAR_3->tx_blocks_available =
  FUNC_2(VAR_3->target_mem_map->num_tx_mem_blocks);
 FUNC_4(VAR_0, "available tx blocks: %d",
       VAR_3->tx_blocks_available);

 return 0;
}
