
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {scalar_t__ rx_data; scalar_t__ rx_tail; struct _adapter* adapter; } ;
struct TYPE_7__ {TYPE_2__ hdr; } ;
union recv_frame {TYPE_3__ u; } ;
typedef scalar_t__ uint ;
struct recv_priv {scalar_t__ rx_drop; int rx_bytes; int rx_pkts; } ;
struct TYPE_8__ {scalar_t__ rx_pktloss; } ;
struct TYPE_5__ {int (* LedControlHandler ) (struct _adapter*,int ) ;} ;
struct _adapter {TYPE_4__ mppriv; TYPE_1__ ledpriv; struct recv_priv recvpriv; } ;
typedef scalar_t__ s32 ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_0 (struct _adapter*,union recv_frame*) ;
 int FUNC_1 (struct _adapter*,int ) ;

void FUNC_2(union recv_frame *VAR_3)
{
 struct _adapter *VAR_4;
 struct recv_priv *VAR_5;

 s32 VAR_6 = VAR_2;

 VAR_4 = VAR_3->u.hdr.adapter;
 VAR_5 = &(VAR_4->recvpriv);

 VAR_4->ledpriv.LedControlHandler(VAR_4, VAR_0);

 VAR_6 = FUNC_0(VAR_4, VAR_3);
 if (VAR_6 == VAR_1)
  goto _recv_entry_drop;
 VAR_5->rx_pkts++;
 VAR_5->rx_bytes += (uint)(VAR_3->u.hdr.rx_tail -
    VAR_3->u.hdr.rx_data);
 return;
_recv_entry_drop:
 VAR_5->rx_drop++;
 VAR_4->mppriv.rx_pktloss = VAR_5->rx_drop;
}
