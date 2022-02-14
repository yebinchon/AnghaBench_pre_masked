
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct wmi_sync_cmd {int data_sync_map; } ;
struct wmi_data_sync_bufs {int traffic_class; int * skb; } ;
struct wmi {int fat_pipe_exist; int parent_dev; int lock; } ;
struct sk_buff {scalar_t__ data; } ;
typedef enum htc_endpoint_id { ____Placeholder_htc_endpoint_id } htc_endpoint_id ;
typedef int data_sync_bufs ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int ,int) ;
 int * FUNC_2 (int ) ;
 int FUNC_3 (struct wmi*,int,struct sk_buff*,int ,int ) ;
 int FUNC_4 (struct wmi*,int *,int,int) ;
 struct sk_buff* FUNC_5 (int) ;
 int FUNC_6 (struct sk_buff*) ;
 int FUNC_7 (struct wmi_data_sync_bufs*,int ,int) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *) ;

__attribute__((used)) static int FUNC_10(struct wmi *VAR_4, u8 VAR_5)
{
 struct sk_buff *VAR_6;
 struct wmi_sync_cmd *VAR_7;
 struct wmi_data_sync_bufs VAR_8[VAR_3];
 enum htc_endpoint_id VAR_9;
 u8 VAR_10, VAR_11 = 0;
 int VAR_12 = 0;

 FUNC_7(VAR_8, 0, sizeof(VAR_8));

 FUNC_8(&VAR_4->lock);

 for (VAR_10 = 0; VAR_10 < VAR_3; VAR_10++) {
  if (VAR_4->fat_pipe_exist & (1 << VAR_10)) {
   VAR_11++;
   VAR_8[VAR_11 - 1].traffic_class =
       VAR_10;
  }
 }

 FUNC_9(&VAR_4->lock);

 VAR_6 = FUNC_5(sizeof(*VAR_7));
 if (!VAR_6)
  return -VAR_0;

 VAR_7 = (struct wmi_sync_cmd *) VAR_6->data;





 VAR_7->data_sync_map = VAR_4->fat_pipe_exist;

 for (VAR_10 = 0; VAR_10 < VAR_11; VAR_10++) {
  VAR_8[VAR_10].skb = FUNC_2(0);
  if (VAR_8[VAR_10].skb == ((void*)0)) {
   VAR_12 = -VAR_0;
   break;
  }
 }





 if (VAR_12)
  goto free_cmd_skb;





 VAR_12 = FUNC_3(VAR_4, VAR_5, VAR_6, VAR_2,
      VAR_1);

 if (VAR_12)
  goto free_data_skb;

 for (VAR_10 = 0; VAR_10 < VAR_11; VAR_10++) {
  if (FUNC_0(!VAR_8[VAR_10].skb))
   goto free_data_skb;

  VAR_9 = FUNC_1(VAR_4->parent_dev,
            VAR_8[VAR_10].
            traffic_class);
  VAR_12 =
      FUNC_4(VAR_4, VAR_8[VAR_10].skb,
           VAR_9, VAR_5);

  VAR_8[VAR_10].skb = ((void*)0);

  if (VAR_12)
   goto free_data_skb;
 }

 return 0;

free_cmd_skb:

 FUNC_6(VAR_6);

free_data_skb:
 for (VAR_10 = 0; VAR_10 < VAR_11; VAR_10++)
  FUNC_6((struct sk_buff *)VAR_8[VAR_10].skb);

 return VAR_12;
}
