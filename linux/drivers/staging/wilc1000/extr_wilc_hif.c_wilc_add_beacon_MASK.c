
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef scalar_t__ u32 ;
struct wilc_vif {int ndev; } ;
struct wid {int * val; scalar_t__ size; int type; int id; } ;
struct cfg80211_beacon_data {scalar_t__ tail_len; int tail; scalar_t__ head_len; int head; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int *) ;
 int * FUNC_1 (scalar_t__,int ) ;
 int FUNC_2 (int *,int ,scalar_t__) ;
 int FUNC_3 (int ,char*) ;
 int FUNC_4 (scalar_t__,int *) ;
 int FUNC_5 (struct wilc_vif*,int ,struct wid*,int) ;

int FUNC_6(struct wilc_vif *VAR_5, u32 VAR_6, u32 VAR_7,
      struct cfg80211_beacon_data *VAR_8)
{
 struct wid VAR_9;
 int VAR_10;
 u8 *VAR_11;

 VAR_9.id = VAR_2;
 VAR_9.type = VAR_3;
 VAR_9.size = VAR_8->head_len + VAR_8->tail_len + 16;
 VAR_9.val = FUNC_1(VAR_9.size, VAR_1);
 if (!VAR_9.val)
  return -VAR_0;

 VAR_11 = VAR_9.val;
 FUNC_4(VAR_6, VAR_11);
 VAR_11 += 4;
 FUNC_4(VAR_7, VAR_11);
 VAR_11 += 4;
 FUNC_4(VAR_8->head_len, VAR_11);
 VAR_11 += 4;

 if (VAR_8->head_len > 0)
  FUNC_2(VAR_11, VAR_8->head, VAR_8->head_len);
 VAR_11 += VAR_8->head_len;

 FUNC_4(VAR_8->tail_len, VAR_11);
 VAR_11 += 4;

 if (VAR_8->tail_len > 0)
  FUNC_2(VAR_11, VAR_8->tail, VAR_8->tail_len);

 VAR_10 = FUNC_5(VAR_5, VAR_4, &VAR_9, 1);
 if (VAR_10)
  FUNC_3(VAR_5->ndev, "Failed to send add beacon\n");

 FUNC_0(VAR_9.val);

 return VAR_10;
}
