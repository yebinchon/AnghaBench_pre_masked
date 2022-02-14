
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sk_buff {scalar_t__ len; } ;
struct mwifiex_private {struct mwifiex_adapter* adapter; } ;
struct mwifiex_fw_dump_header {scalar_t__ type; } ;
struct mwifiex_adapter {scalar_t__ iface_type; scalar_t__ devdump_data; scalar_t__ devdump_len; int devdump_timer; TYPE_1__* event_skb; scalar_t__ event_body; } ;
struct TYPE_2__ {int data; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_0 (int *) ;
 scalar_t__ VAR_6 ;
 scalar_t__ FUNC_1 (int) ;
 int FUNC_2 (scalar_t__,int ,scalar_t__) ;
 int FUNC_3 (int *,scalar_t__) ;
 scalar_t__ FUNC_4 (int ) ;
 int FUNC_5 (struct mwifiex_adapter*,int ,char*) ;
 int FUNC_6 (struct mwifiex_adapter*) ;
 int FUNC_7 (struct mwifiex_adapter*) ;
 scalar_t__ FUNC_8 (scalar_t__) ;

__attribute__((used)) static void
FUNC_9(struct mwifiex_private *VAR_7,
      struct sk_buff *VAR_8)
{
 struct mwifiex_adapter *VAR_9 = VAR_7->adapter;
 struct mwifiex_fw_dump_header *VAR_10 =
    (void *)VAR_9->event_body;

 if (VAR_9->iface_type != VAR_5) {
  FUNC_5(VAR_9, VAR_2,
       "event is not on usb interface, ignore it\n");
  return;
 }

 if (!VAR_9->devdump_data) {



  VAR_9->devdump_data = FUNC_8(VAR_3);
  if (!VAR_9->devdump_data) {
   FUNC_5(VAR_9, VAR_0,
        "vzalloc devdump data failure!\n");
   return;
  }

  FUNC_6(VAR_9);






  FUNC_3(&VAR_9->devdump_timer,
     VAR_6 + FUNC_4(VAR_4));
 }


 if (VAR_9->devdump_len + VAR_8->len >= VAR_3)
  goto upload_dump;

 FUNC_2(VAR_9->devdump_data + VAR_9->devdump_len,
  VAR_9->event_skb->data, VAR_8->len);
 VAR_9->devdump_len += VAR_8->len;

 if (FUNC_1(VAR_10->type == VAR_1)) {
  FUNC_5(VAR_9, VAR_2,
       "receive end of transmission flag event!\n");
  goto upload_dump;
 }
 return;

upload_dump:
 FUNC_0(&VAR_9->devdump_timer);
 FUNC_7(VAR_9);
}
