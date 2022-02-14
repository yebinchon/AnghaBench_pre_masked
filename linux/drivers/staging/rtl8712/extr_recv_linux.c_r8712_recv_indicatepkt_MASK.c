
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct rx_pkt_attrib {int tcpchk_valid; int tcp_chkrpt; } ;
struct TYPE_7__ {TYPE_3__* pkt; int len; int rx_data; struct rx_pkt_attrib attrib; } ;
struct TYPE_8__ {TYPE_1__ hdr; } ;
union recv_frame {TYPE_2__ u; } ;
struct __queue {int dummy; } ;
struct recv_priv {int rx_drop; struct __queue free_recv_queue; } ;
struct _adapter {int pnetdev; struct recv_priv recvpriv; } ;
struct TYPE_9__ {int protocol; int dev; int ip_summed; int len; int data; } ;
typedef TYPE_3__ _pkt ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_3__*,int ) ;
 int FUNC_1 (TYPE_3__*) ;
 int FUNC_2 (union recv_frame*,struct __queue*) ;
 int FUNC_3 (TYPE_3__*,int ) ;

void FUNC_4(struct _adapter *VAR_2,
       union recv_frame *VAR_3)
{
 struct recv_priv *VAR_4;
 struct __queue *VAR_5;
 _pkt *VAR_6;
 struct rx_pkt_attrib *VAR_7 = &VAR_3->u.hdr.attrib;

 VAR_4 = &VAR_2->recvpriv;
 VAR_5 = &VAR_4->free_recv_queue;
 VAR_6 = VAR_3->u.hdr.pkt;
 if (!VAR_6)
  goto _recv_indicatepkt_drop;
 VAR_6->data = VAR_3->u.hdr.rx_data;
 VAR_6->len = VAR_3->u.hdr.len;
 FUNC_3(VAR_6, VAR_6->len);
 if ((VAR_7->tcpchk_valid == 1) && (VAR_7->tcp_chkrpt == 1))
  VAR_6->ip_summed = VAR_1;
 else
  VAR_6->ip_summed = VAR_0;
 VAR_6->dev = VAR_2->pnetdev;
 VAR_6->protocol = FUNC_0(VAR_6, VAR_2->pnetdev);
 FUNC_1(VAR_6);
 VAR_3->u.hdr.pkt = ((void*)0);


 FUNC_2(VAR_3, VAR_5);
 return;
_recv_indicatepkt_drop:

 if (VAR_3)
  FUNC_2(VAR_3, VAR_5);
 VAR_4->rx_drop++;
}
