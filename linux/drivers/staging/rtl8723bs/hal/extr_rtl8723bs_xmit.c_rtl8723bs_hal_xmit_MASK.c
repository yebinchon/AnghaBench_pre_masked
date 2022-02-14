
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct xmit_priv {int SdioXmitStart; int tx_drop; int lock; } ;
struct TYPE_4__ {int ether_type; int dhcp_pkt; int priority; int qsel; } ;
struct xmit_frame {scalar_t__ frame_tag; TYPE_1__ attrib; } ;
struct TYPE_5__ {scalar_t__ bBusyTraffic; } ;
struct TYPE_6__ {TYPE_2__ LinkDetectInfo; } ;
struct adapter {TYPE_3__ mlmepriv; struct xmit_priv xmitpriv; } ;
typedef scalar_t__ s32 ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ,int ,char*) ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct xmit_priv*,struct xmit_frame*) ;
 int FUNC_3 (struct adapter*,struct xmit_frame*) ;
 scalar_t__ FUNC_4 (struct adapter*,struct xmit_frame*) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;

s32 FUNC_7(
 struct adapter *VAR_4, struct xmit_frame *VAR_5
)
{
 struct xmit_priv *VAR_6;
 s32 VAR_7;


 VAR_5->attrib.qsel = VAR_5->attrib.priority;
 VAR_6 = &VAR_4->xmitpriv;

 if (
  (VAR_5->frame_tag == VAR_0) &&
  (VAR_5->attrib.ether_type != 0x0806) &&
  (VAR_5->attrib.ether_type != 0x888e) &&
  (VAR_5->attrib.dhcp_pkt != 1)
 ) {
  if (VAR_4->mlmepriv.LinkDetectInfo.bBusyTraffic)
   FUNC_3(VAR_4, VAR_5);
 }

 FUNC_5(&VAR_6->lock);
 VAR_7 = FUNC_4(VAR_4, VAR_5);
 FUNC_6(&VAR_6->lock);
 if (VAR_7 != VAR_1) {
  FUNC_0(VAR_3, VAR_2, ("rtl8723bs_hal_xmit: enqueue xmitframe fail\n"));
  FUNC_2(VAR_6, VAR_5);

  VAR_6->tx_drop++;
  return 1;
 }

 FUNC_1(&VAR_6->SdioXmitStart);

 return 0;
}
