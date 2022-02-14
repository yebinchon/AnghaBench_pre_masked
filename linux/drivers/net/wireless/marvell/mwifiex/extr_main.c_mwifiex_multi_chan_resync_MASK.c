
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u16 ;
struct usb_card_rec {int mc_resync_flag; TYPE_1__* port; } ;
struct mwifiex_private {int dummy; } ;
struct mwifiex_adapter {struct usb_card_rec* card; } ;
struct TYPE_2__ {int tx_data_urb_pending; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 (struct mwifiex_adapter*,int ,char*) ;
 struct mwifiex_private* FUNC_2 (struct mwifiex_adapter*,int ) ;
 int FUNC_3 (struct mwifiex_private*,int ,int ,int ,int*,int) ;

void FUNC_4(struct mwifiex_adapter *VAR_6)
{
 struct usb_card_rec *VAR_7 = VAR_6->card;
 struct mwifiex_private *VAR_8;
 u16 VAR_9;
 int VAR_10, VAR_11;

 VAR_7->mc_resync_flag = 1;
 for (VAR_10 = 0; VAR_10 < VAR_4; VAR_10++) {
  if (FUNC_0(&VAR_7->port[VAR_10].tx_data_urb_pending)) {
   FUNC_1(VAR_6, VAR_5, "pending data urb in sys\n");
   return;
  }
 }

 VAR_7->mc_resync_flag = 0;
 VAR_9 = 0xffff;
 VAR_8 = FUNC_2(VAR_6, VAR_3);
 VAR_11 = FUNC_3(VAR_8, VAR_2,
          VAR_1, 0, &VAR_9, 0);
 if (VAR_11)
  FUNC_1(VAR_6, VAR_0,
       "send reconfig tx buf size cmd err\n");
}
