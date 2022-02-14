
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wl1251_acx_mem_map {int rx_control_addr; int num_rx_mem_blocks; int tx_control_addr; int num_tx_mem_blocks; } ;
struct wl1251 {struct wl1251_acx_mem_map* target_mem_map; struct wl1251_acx_mem_map* data_path; int channel; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct wl1251_acx_mem_map*) ;
 int FUNC_1 (struct wl1251*) ;
 int FUNC_2 (struct wl1251*,int ,int) ;
 int FUNC_3 (struct wl1251*,int ,int) ;
 int FUNC_4 (struct wl1251*) ;
 int FUNC_5 (struct wl1251*) ;
 int FUNC_6 (struct wl1251*) ;
 int FUNC_7 (struct wl1251*) ;
 int FUNC_8 (struct wl1251*) ;
 int FUNC_9 (struct wl1251*) ;
 int FUNC_10 (struct wl1251*) ;
 int FUNC_11 (struct wl1251*) ;
 int FUNC_12 (struct wl1251*) ;
 int FUNC_13 (struct wl1251*,int,int ) ;
 int FUNC_14 (struct wl1251*) ;
 int FUNC_15 (struct wl1251*) ;
 int FUNC_16 (char*,int ,int ,int ,int ) ;

int FUNC_17(struct wl1251 *VAR_3)
{
 struct wl1251_acx_mem_map *VAR_4;
 int VAR_5;

 VAR_5 = FUNC_8(VAR_3);
 if (VAR_5 < 0)
  return VAR_5;


 VAR_5 = FUNC_14(VAR_3);
 if (VAR_5 < 0)
  return VAR_5;


 VAR_5 = FUNC_9(VAR_3);
 if (VAR_5 < 0)
  return VAR_5;


 VAR_5 = FUNC_6(VAR_3);
 if (VAR_5 < 0)
  goto out_free_memmap;


 VAR_5 = FUNC_13(VAR_3,
           VAR_0 | VAR_1,
           VAR_2);


 if (VAR_5 < 0)
  goto out_free_data_path;


 VAR_5 = FUNC_15(VAR_3);
 if (VAR_5 < 0)
  goto out_free_data_path;


 VAR_5 = FUNC_10(VAR_3);
 if (VAR_5 < 0)
  goto out_free_data_path;


 VAR_5 = FUNC_1(VAR_3);
 if (VAR_5 < 0)
  goto out_free_data_path;


 VAR_5 = FUNC_5(VAR_3);
 if (VAR_5 < 0)
  goto out_free_data_path;


 VAR_5 = FUNC_12(VAR_3);
 if (VAR_5 < 0)
  goto out_free_data_path;


 VAR_5 = FUNC_7(VAR_3);
 if (VAR_5 < 0)
  goto out_free_data_path;


 VAR_5 = FUNC_4(VAR_3);
 if (VAR_5 < 0)
  goto out_free_data_path;


 VAR_5 = FUNC_2(VAR_3, VAR_3->channel, 1);
 if (VAR_5 < 0)
  goto out_free_data_path;


 VAR_5 = FUNC_3(VAR_3, VAR_3->channel, 1);
 if (VAR_5 < 0)
  goto out_free_data_path;


 VAR_5 = FUNC_11(VAR_3);
 if (VAR_5 < 0)
  goto out_free_data_path;

 VAR_4 = VAR_3->target_mem_map;
 FUNC_16("%d tx blocks at 0x%x, %d rx blocks at 0x%x",
      VAR_4->num_tx_mem_blocks,
      VAR_3->data_path->tx_control_addr,
      VAR_4->num_rx_mem_blocks,
      VAR_3->data_path->rx_control_addr);

 return 0;

 out_free_data_path:
 FUNC_0(VAR_3->data_path);

 out_free_memmap:
 FUNC_0(VAR_3->target_mem_map);

 return VAR_5;
}
