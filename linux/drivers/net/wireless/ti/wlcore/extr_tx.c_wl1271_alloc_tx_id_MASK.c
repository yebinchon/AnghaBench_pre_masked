
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wl1271 {int num_tx_desc; int tx_frames_cnt; struct sk_buff** tx_frames; int tx_frames_map; } ;
struct sk_buff {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int,int ) ;
 int FUNC_1 (int ,int) ;

__attribute__((used)) static int FUNC_2(struct wl1271 *VAR_1, struct sk_buff *VAR_2)
{
 int VAR_3;

 VAR_3 = FUNC_1(VAR_1->tx_frames_map, VAR_1->num_tx_desc);
 if (VAR_3 >= VAR_1->num_tx_desc)
  return -VAR_0;

 FUNC_0(VAR_3, VAR_1->tx_frames_map);
 VAR_1->tx_frames[VAR_3] = VAR_2;
 VAR_1->tx_frames_cnt++;
 return VAR_3;
}
