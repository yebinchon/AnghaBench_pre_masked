
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wmi_tlv_diag_item {int len; int payload; int code; int timestamp; int type; } ;
struct wmi_tlv_diag_data_ev {int num_items; } ;
struct sk_buff {int len; int data; } ;
struct ath10k {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (void const**) ;
 int FUNC_1 (void const**) ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (struct ath10k*,char*,...) ;
 int FUNC_5 (void const*) ;
 void** FUNC_6 (struct ath10k*,int ,int ,int ) ;
 int FUNC_7 (void const**) ;
 scalar_t__ FUNC_8 (int,int) ;
 int FUNC_9 (struct ath10k*,int ,int,int,int,int ) ;

__attribute__((used)) static int FUNC_10(struct ath10k *VAR_4,
       struct sk_buff *VAR_5)
{
 const void **VAR_6;
 const struct wmi_tlv_diag_data_ev *VAR_7;
 const struct wmi_tlv_diag_item *VAR_8;
 const void *VAR_9;
 int VAR_10, VAR_11, VAR_12;

 VAR_6 = FUNC_6(VAR_4, VAR_5->data, VAR_5->len, VAR_1);
 if (FUNC_0(VAR_6)) {
  VAR_10 = FUNC_1(VAR_6);
  FUNC_4(VAR_4, "failed to parse tlv: %d\n", VAR_10);
  return VAR_10;
 }

 VAR_7 = VAR_6[VAR_3];
 VAR_9 = VAR_6[VAR_2];
 if (!VAR_7 || !VAR_9) {
  FUNC_7(VAR_6);
  return -VAR_0;
 }

 VAR_11 = FUNC_3(VAR_7->num_items);
 VAR_12 = FUNC_5(VAR_9);

 while (VAR_11--) {
  if (VAR_12 == 0)
   break;
  if (VAR_12 < sizeof(*VAR_8)) {
   FUNC_4(VAR_4, "failed to parse diag data: can't fit item header\n");
   break;
  }

  VAR_8 = VAR_9;

  if (VAR_12 < sizeof(*VAR_8) + FUNC_2(VAR_8->len)) {
   FUNC_4(VAR_4, "failed to parse diag data: item is too long\n");
   break;
  }

  FUNC_9(VAR_4,
      VAR_8->type,
      FUNC_3(VAR_8->timestamp),
      FUNC_3(VAR_8->code),
      FUNC_2(VAR_8->len),
      VAR_8->payload);

  VAR_12 -= sizeof(*VAR_8);
  VAR_12 -= FUNC_8(FUNC_2(VAR_8->len), 4);

  VAR_9 += sizeof(*VAR_8);
  VAR_9 += FUNC_8(FUNC_2(VAR_8->len), 4);
 }

 if (VAR_11 != -1 || VAR_12 != 0)
  FUNC_4(VAR_4, "failed to parse diag data event: num_items %d len %d\n",
       VAR_11, VAR_12);

 FUNC_7(VAR_6);
 return 0;
}
