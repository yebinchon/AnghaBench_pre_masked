
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u8 ;
typedef int u16 ;
struct wmi_delete_pstream_cmd {size_t traffic_class; size_t tsid; } ;
struct wmi {int* stream_exist_for_ac; int fat_pipe_exist; int parent_dev; int lock; } ;
struct sk_buff {scalar_t__ data; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 size_t VAR_6 ;
 int FUNC_0 (int ,char*,size_t,size_t) ;
 int FUNC_1 (char*,size_t) ;
 int FUNC_2 (int ,size_t,int) ;
 int FUNC_3 (struct wmi*,size_t,struct sk_buff*,int ,int ) ;
 struct sk_buff* FUNC_4 (int) ;
 int FUNC_5 (struct sk_buff*) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;

int FUNC_8(struct wmi *VAR_7, u8 VAR_8, u8 VAR_9,
      u8 VAR_10)
{
 struct sk_buff *VAR_11;
 struct wmi_delete_pstream_cmd *VAR_12;
 u16 VAR_13 = 0;
 int VAR_14;

 if (VAR_9 >= VAR_6) {
  FUNC_1("invalid traffic class: %d\n", VAR_9);
  return -VAR_1;
 }

 VAR_11 = FUNC_4(sizeof(*VAR_12));
 if (!VAR_11)
  return -VAR_3;

 VAR_12 = (struct wmi_delete_pstream_cmd *) VAR_11->data;
 VAR_12->traffic_class = VAR_9;
 VAR_12->tsid = VAR_10;

 FUNC_6(&VAR_7->lock);
 VAR_13 = VAR_7->stream_exist_for_ac[VAR_9];
 FUNC_7(&VAR_7->lock);

 if (!(VAR_13 & (1 << VAR_10))) {
  FUNC_5(VAR_11);
  FUNC_0(VAR_0,
      "TSID %d doesn't exist for traffic class: %d\n",
      VAR_10, VAR_9);
  return -VAR_2;
 }

 FUNC_0(VAR_0,
     "sending delete_pstream_cmd: traffic class: %d tsid=%d\n",
     VAR_9, VAR_10);

 VAR_14 = FUNC_3(VAR_7, VAR_8, VAR_11, VAR_5,
      VAR_4);

 FUNC_6(&VAR_7->lock);
 VAR_7->stream_exist_for_ac[VAR_9] &= ~(1 << VAR_10);
 VAR_13 = VAR_7->stream_exist_for_ac[VAR_9];
 FUNC_7(&VAR_7->lock);





 if (!VAR_13) {
  FUNC_2(VAR_7->parent_dev,
         VAR_9, 0);
  VAR_7->fat_pipe_exist &= ~(1 << VAR_9);
 }

 return VAR_14;
}
