
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct wil_rx_buff {int id; int list; } ;
struct list_head {int dummy; } ;
struct TYPE_2__ {size_t size; struct wil_rx_buff* buff_arr; struct list_head free; struct list_head active; } ;
struct wil6210_priv {TYPE_1__ rx_buff_mgmt; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct list_head*) ;
 struct wil_rx_buff* FUNC_1 (size_t,int,int ) ;
 int FUNC_2 (int *,struct list_head*) ;

__attribute__((used)) static int FUNC_3(struct wil6210_priv *VAR_2,
    size_t VAR_3)
{
 struct wil_rx_buff *VAR_4;
 struct list_head *VAR_5 = &VAR_2->rx_buff_mgmt.active;
 struct list_head *VAR_6 = &VAR_2->rx_buff_mgmt.free;
 int VAR_7;

 VAR_2->rx_buff_mgmt.buff_arr = FUNC_1(VAR_3 + 1,
          sizeof(struct wil_rx_buff),
          VAR_1);
 if (!VAR_2->rx_buff_mgmt.buff_arr)
  return -VAR_0;


 FUNC_0(VAR_5);
 FUNC_0(VAR_6);




 VAR_4 = VAR_2->rx_buff_mgmt.buff_arr;
 for (VAR_7 = 1; VAR_7 <= VAR_3; VAR_7++) {
  FUNC_2(&VAR_4[VAR_7].list, VAR_6);
  VAR_4[VAR_7].id = VAR_7;
 }

 VAR_2->rx_buff_mgmt.size = VAR_3 + 1;

 return 0;
}
