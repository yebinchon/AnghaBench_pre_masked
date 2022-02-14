
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
typedef int u16 ;
struct wmi_cmd_hdr {void* info1; void* cmd_id; } ;
struct wmi {int ep_id; TYPE_1__* parent_dev; } ;
struct sk_buff {scalar_t__ data; int len; } ;
typedef enum wmi_sync_flag { ____Placeholder_wmi_sync_flag } wmi_sync_flag ;
typedef enum wmi_cmd_id { ____Placeholder_wmi_cmd_id } wmi_cmd_id ;
typedef enum htc_endpoint_id { ____Placeholder_htc_endpoint_id } htc_endpoint_id ;
struct TYPE_3__ {int vif_max; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ FUNC_0 (int) ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_1 (TYPE_1__*,int ) ;
 int FUNC_2 (TYPE_1__*,struct sk_buff*,int) ;
 int FUNC_3 (int ,char*,int,int ,int) ;
 int FUNC_4 (int ,int *,char*,scalar_t__,int ) ;
 int FUNC_5 (struct wmi*,struct sk_buff*,int ,int,int,int ,int *,int) ;
 int FUNC_6 (struct wmi*,int) ;
 void* FUNC_7 (int) ;
 int FUNC_8 (struct sk_buff*) ;
 int FUNC_9 (struct sk_buff*,int) ;

int FUNC_10(struct wmi *VAR_11, u8 VAR_12, struct sk_buff *VAR_13,
   enum wmi_cmd_id VAR_14, enum wmi_sync_flag VAR_15)
{
 struct wmi_cmd_hdr *VAR_16;
 enum htc_endpoint_id VAR_17 = VAR_11->ep_id;
 int VAR_18;
 u16 VAR_19;

 if (FUNC_0(VAR_13 == ((void*)0) ||
      (VAR_12 > (VAR_11->parent_dev->vif_max - 1)))) {
  FUNC_8(VAR_13);
  return -VAR_2;
 }

 FUNC_3(VAR_0, "wmi tx id %d len %d flag %d\n",
     VAR_14, VAR_13->len, VAR_15);
 FUNC_4(VAR_1, ((void*)0), "wmi tx ",
   VAR_13->data, VAR_13->len);

 if (VAR_15 >= VAR_3) {
  FUNC_8(VAR_13);
  return -VAR_2;
 }

 if ((VAR_15 == VAR_6) ||
     (VAR_15 == VAR_7)) {




  FUNC_6(VAR_11, VAR_12);
 }

 FUNC_9(VAR_13, sizeof(struct wmi_cmd_hdr));

 VAR_16 = (struct wmi_cmd_hdr *) VAR_13->data;
 VAR_16->cmd_id = FUNC_7(VAR_14);
 VAR_19 = VAR_12 & VAR_8;
 VAR_16->info1 = FUNC_7(VAR_19);


 if (VAR_14 == VAR_9) {
  VAR_18 = FUNC_5(VAR_11, VAR_13, VAR_4,
           0, 0, 0, ((void*)0), VAR_12);
  if (VAR_18) {
   FUNC_8(VAR_13);
   return VAR_18;
  }
  VAR_17 = FUNC_1(VAR_11->parent_dev, VAR_10);
 }

 FUNC_2(VAR_11->parent_dev, VAR_13, VAR_17);

 if ((VAR_15 == VAR_5) ||
     (VAR_15 == VAR_7)) {




  FUNC_6(VAR_11, VAR_12);
 }

 return 0;
}
