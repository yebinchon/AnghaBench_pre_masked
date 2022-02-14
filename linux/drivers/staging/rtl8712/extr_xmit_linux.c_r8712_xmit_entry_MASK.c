
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct xmit_priv {int tx_drop; int tx_bytes; int tx_pkts; } ;
struct TYPE_4__ {scalar_t__ last_txcmdsz; } ;
struct xmit_frame {TYPE_2__ attrib; int * pkt; } ;
struct net_device {int dummy; } ;
struct TYPE_3__ {int (* LedControlHandler ) (struct _adapter*,int ) ;} ;
struct _adapter {TYPE_1__ ledpriv; struct xmit_priv xmitpriv; } ;
typedef int _pkt ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 struct _adapter* FUNC_1 (struct net_device*) ;
 struct xmit_frame* FUNC_2 (struct xmit_priv*) ;
 int FUNC_3 (struct xmit_priv*,struct xmit_frame*) ;
 int FUNC_4 (struct _adapter*) ;
 scalar_t__ FUNC_5 (struct _adapter*,struct xmit_frame*) ;
 scalar_t__ FUNC_6 (struct _adapter*,int *,TYPE_2__*) ;
 int FUNC_7 (struct _adapter*,int ) ;

int FUNC_8(_pkt *VAR_1, struct net_device *VAR_2)
{
 struct xmit_frame *VAR_3 = ((void*)0);
 struct _adapter *VAR_4 = FUNC_1(VAR_2);
 struct xmit_priv *VAR_5 = &(VAR_4->xmitpriv);

 if (!FUNC_4(VAR_4))
  goto _xmit_entry_drop;

 VAR_3 = FUNC_2(VAR_5);
 if (!VAR_3)
  goto _xmit_entry_drop;

 if (FUNC_6(VAR_4, VAR_1, &VAR_3->attrib))
  goto _xmit_entry_drop;

 VAR_4->ledpriv.LedControlHandler(VAR_4, VAR_0);
 VAR_3->pkt = VAR_1;
 if (FUNC_5(VAR_4, VAR_3)) {

  FUNC_0(VAR_1);
  VAR_3->pkt = ((void*)0);
 }
 VAR_5->tx_pkts++;
 VAR_5->tx_bytes += VAR_3->attrib.last_txcmdsz;
 return 0;
_xmit_entry_drop:
 if (VAR_3)
  FUNC_3(VAR_5, VAR_3);
 VAR_5->tx_drop++;
 FUNC_0(VAR_1);
 return 0;
}
