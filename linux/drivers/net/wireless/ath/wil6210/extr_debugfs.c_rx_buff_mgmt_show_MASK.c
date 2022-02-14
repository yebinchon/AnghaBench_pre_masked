
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wil_rx_buff_mgmt {int size; int free_list_empty_cnt; int free; int active; int buff_arr; } ;
struct wil6210_priv {struct wil_rx_buff_mgmt rx_buff_mgmt; } ;
struct seq_file {struct wil6210_priv* private; } ;


 int VAR_0 ;
 int FUNC_0 (struct seq_file*,char*,int) ;
 int FUNC_1 (struct seq_file*,char*) ;
 int FUNC_2 (struct seq_file*,int *) ;

__attribute__((used)) static int FUNC_3(struct seq_file *VAR_1, void *VAR_2)
{
 struct wil6210_priv *VAR_3 = VAR_1->private;
 struct wil_rx_buff_mgmt *VAR_4 = &VAR_3->rx_buff_mgmt;
 int VAR_5;
 int VAR_6;

 if (!VAR_4->buff_arr)
  return -VAR_0;

 FUNC_0(VAR_1, "  size = %zu\n", VAR_4->size);
 FUNC_0(VAR_1, "  free_list_empty_cnt = %lu\n",
     VAR_4->free_list_empty_cnt);


 FUNC_1(VAR_1, "  Active list:\n");
 VAR_5 = FUNC_2(VAR_1, &VAR_4->active);
 FUNC_1(VAR_1, "\n  Free list:\n");
 VAR_6 = FUNC_2(VAR_1, &VAR_4->free);

 FUNC_0(VAR_1, "  Total number of buffers: %u\n",
     VAR_5 + VAR_6);

 return 0;
}
