
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u8 ;
typedef int u16 ;
struct wmi_cmd_hdr {size_t mid; int command_id; } ;
struct wil6210_vif {int dummy; } ;
struct wil6210_priv {int reply_id; size_t reply_mid; int wmi_call; scalar_t__ reply_buf; struct wil6210_vif** vifs; } ;
struct wil6210_mbox_hdr {scalar_t__ type; int len; } ;


 int VAR_0 ;
 size_t FUNC_0 (struct wil6210_priv*) ;
 int VAR_1 ;
 size_t VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ,char*,int ,int,int,struct wil6210_mbox_hdr*,int,int) ;
 int FUNC_5 (struct wil6210_priv*,char*,int,...) ;
 int FUNC_6 (struct wil6210_priv*,char*,...) ;
 int FUNC_7 (struct wil6210_priv*,char*,int) ;
 int FUNC_8 (struct wil6210_vif*,int,void*,int) ;

__attribute__((used)) static void FUNC_9(struct wil6210_priv *VAR_4,
        struct wil6210_mbox_hdr *VAR_5)
{
 u16 VAR_6 = FUNC_3(VAR_5->len);
 struct wil6210_vif *VAR_7;

 if ((VAR_5->type == VAR_3) &&
     (VAR_6 >= sizeof(struct wmi_cmd_hdr))) {
  struct wmi_cmd_hdr *VAR_8 = (void *)(&VAR_5[1]);
  void *VAR_9 = (void *)(&VAR_8[1]);
  u16 VAR_10 = FUNC_3(VAR_8->command_id);
  u8 VAR_11 = VAR_8->mid;

  FUNC_5(VAR_4, "Handle %s (0x%04x) (reply_id 0x%04x,%d)\n",
       FUNC_2(VAR_10), VAR_10, VAR_4->reply_id,
       VAR_4->reply_mid);

  if (VAR_11 == VAR_2)
   VAR_11 = 0;
  if (VAR_11 >= FUNC_0(VAR_4)) {
   FUNC_5(VAR_4, "invalid mid %d, event skipped\n",
        VAR_11);
   return;
  }
  VAR_7 = VAR_4->vifs[VAR_11];
  if (!VAR_7) {
   FUNC_5(VAR_4, "event for empty VIF(%d), skipped\n",
        VAR_11);
   return;
  }


  if (VAR_4->reply_id && VAR_4->reply_id == VAR_10 &&
      VAR_4->reply_mid == VAR_11) {
   if (VAR_4->reply_buf) {






    FUNC_6(VAR_4,
     "Old event (%d, %s) while wmi_call is waiting. Drop it and Continue waiting\n",
     VAR_10, FUNC_2(VAR_10));
    return;
   }

   FUNC_8(VAR_7, VAR_10, VAR_9,
          VAR_6 - sizeof(*VAR_8));
   FUNC_5(VAR_4, "event_handle: Complete WMI 0x%04x\n",
        VAR_10);
   FUNC_1(&VAR_4->wmi_call);
   return;
  }


  if (!FUNC_8(VAR_7, VAR_10, VAR_9,
       VAR_6 - sizeof(*VAR_8))) {
   FUNC_7(VAR_4, "Unhandled event 0x%04x\n", VAR_10);
  }
 } else {
  FUNC_6(VAR_4, "Unknown event type\n");
  FUNC_4(VAR_1, "evt?? ", VAR_0, 16, 1,
          VAR_5, sizeof(*VAR_5) + VAR_6, 1);
 }
}
