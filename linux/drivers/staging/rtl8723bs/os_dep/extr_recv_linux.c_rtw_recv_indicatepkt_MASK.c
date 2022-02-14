
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct rx_pkt_attrib {int eth_type; } ;
struct TYPE_9__ {TYPE_4__* pkt; int len; int rx_data; int rx_end; int rx_tail; int rx_head; struct rx_pkt_attrib attrib; } ;
struct TYPE_10__ {TYPE_1__ hdr; } ;
union recv_frame {TYPE_2__ u; } ;
struct __queue {int dummy; } ;
struct recv_priv {struct __queue free_recv_queue; } ;
struct TYPE_11__ {int os_indicate_err; int os_indicate; } ;
struct adapter {TYPE_3__ rx_logs; struct recv_priv recvpriv; } ;
struct TYPE_12__ {int len; int data; int head; } ;
typedef TYPE_4__ _pkt ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int ,char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_2 (union recv_frame*,struct __queue*) ;
 int FUNC_3 (struct adapter*,union recv_frame*) ;
 int FUNC_4 (struct adapter*,TYPE_4__*,struct rx_pkt_attrib*) ;
 int FUNC_5 (TYPE_4__*) ;
 int FUNC_6 (TYPE_4__*,int ) ;
 int FUNC_7 (TYPE_4__*) ;

int FUNC_8(struct adapter *VAR_5, union recv_frame *VAR_6)
{
 struct recv_priv *VAR_7;
 struct __queue *VAR_8;
 _pkt *VAR_9;
 struct rx_pkt_attrib *VAR_10 = &VAR_6->u.hdr.attrib;

 FUNC_0(VAR_5->rx_logs.os_indicate);

 VAR_7 = &(VAR_5->recvpriv);
 VAR_8 = &(VAR_7->free_recv_queue);

 VAR_9 = VAR_6->u.hdr.pkt;
 if (VAR_9 == ((void*)0)) {
  FUNC_1(VAR_4, VAR_2, ("rtw_recv_indicatepkt():skb == NULL something wrong!!!!\n"));
  goto _recv_indicatepkt_drop;
 }

 FUNC_1(VAR_4, VAR_3, ("rtw_recv_indicatepkt():skb != NULL !!!\n"));
 FUNC_1(VAR_4, VAR_3, ("rtw_recv_indicatepkt():precv_frame->u.hdr.rx_head =%p  precv_frame->hdr.rx_data =%p\n", VAR_6->u.hdr.rx_head, VAR_6->u.hdr.rx_data));
 FUNC_1(VAR_4, VAR_3, ("precv_frame->hdr.rx_tail =%p precv_frame->u.hdr.rx_end =%p precv_frame->hdr.len =%d\n", VAR_6->u.hdr.rx_tail, VAR_6->u.hdr.rx_end, VAR_6->u.hdr.len));

 VAR_9->data = VAR_6->u.hdr.rx_data;

 FUNC_6(VAR_9, VAR_6->u.hdr.len);

 VAR_9->len = VAR_6->u.hdr.len;

 FUNC_1(VAR_4, VAR_3, ("\n skb->head =%p skb->data =%p skb->tail =%p skb->end =%p skb->len =%d\n", VAR_9->head, VAR_9->data, FUNC_7(VAR_9), FUNC_5(VAR_9), VAR_9->len));
 FUNC_4(VAR_5, VAR_9, VAR_10);

 VAR_6->u.hdr.pkt = ((void*)0);

 FUNC_2(VAR_6, VAR_8);

 FUNC_1(VAR_4, VAR_3, ("\n rtw_recv_indicatepkt :after rtw_os_recv_indicate_pkt!!!!\n"));

 return VAR_1;

_recv_indicatepkt_drop:


  FUNC_2(VAR_6, VAR_8);

  FUNC_0(VAR_5->rx_logs.os_indicate_err);
  return VAR_0;
}
