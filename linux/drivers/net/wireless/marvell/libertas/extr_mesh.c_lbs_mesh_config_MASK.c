
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint16_t ;
struct wireless_dev {scalar_t__ mesh_id_up_len; int ssid; } ;
struct mrvl_meshie_val {int dummy; } ;
struct TYPE_4__ {int* oui; int mesh_id; scalar_t__ mesh_id_len; int mesh_capability; int active_metric_id; int active_protocol_id; int version; int subtype; int type; } ;
struct mrvl_meshie {TYPE_2__ val; scalar_t__ len; int id; } ;
struct lbs_private {int mesh_tlv; TYPE_1__* mesh_dev; } ;
struct cmd_ds_mesh_config {void* length; scalar_t__ data; void* channel; } ;
typedef int cmd ;
struct TYPE_3__ {struct wireless_dev* ieee80211_ptr; } ;




 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (struct lbs_private*,struct cmd_ds_mesh_config*,int,int ) ;
 void* FUNC_1 (int) ;
 int FUNC_2 (char*,int,int ,int,scalar_t__,int ) ;
 int FUNC_3 (int ,int ,scalar_t__) ;
 int FUNC_4 (struct cmd_ds_mesh_config*,int ,int) ;

__attribute__((used)) static int FUNC_5(struct lbs_private *VAR_8, uint16_t VAR_9,
  uint16_t VAR_10)
{
 struct wireless_dev *VAR_11;
 struct cmd_ds_mesh_config VAR_12;
 struct mrvl_meshie *VAR_13;

 FUNC_4(&VAR_12, 0, sizeof(VAR_12));
 VAR_12.channel = FUNC_1(VAR_10);
 VAR_13 = (struct mrvl_meshie *)VAR_12.data;

 switch (VAR_9) {
 case 129:
  VAR_13->id = VAR_7;
  VAR_13->val.oui[0] = 0x00;
  VAR_13->val.oui[1] = 0x50;
  VAR_13->val.oui[2] = 0x43;
  VAR_13->val.type = VAR_3;
  VAR_13->val.subtype = VAR_2;
  VAR_13->val.version = VAR_4;
  VAR_13->val.active_protocol_id = VAR_6;
  VAR_13->val.active_metric_id = VAR_5;
  VAR_13->val.mesh_capability = VAR_1;

  if (VAR_8->mesh_dev) {
   VAR_11 = VAR_8->mesh_dev->ieee80211_ptr;
   VAR_13->val.mesh_id_len = VAR_11->mesh_id_up_len;
   FUNC_3(VAR_13->val.mesh_id, VAR_11->ssid,
      VAR_11->mesh_id_up_len);
  }

  VAR_13->len = sizeof(struct mrvl_meshie_val) -
   VAR_0 + VAR_13->val.mesh_id_len;

  VAR_12.length = FUNC_1(sizeof(struct mrvl_meshie_val));
  break;
 case 128:
  break;
 default:
  return -1;
 }
 FUNC_2("mesh config action %d type %x channel %d SSID %*pE\n",
      VAR_9, VAR_8->mesh_tlv, VAR_10, VAR_13->val.mesh_id_len,
      VAR_13->val.mesh_id);

 return FUNC_0(VAR_8, &VAR_12, VAR_9, VAR_8->mesh_tlv);
}
