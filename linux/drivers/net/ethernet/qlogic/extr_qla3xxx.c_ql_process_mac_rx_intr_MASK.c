
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ u16 ;
struct sk_buff {int protocol; int data; } ;
struct ql_rcv_buf_cb {struct sk_buff* skb; } ;
struct ql3_adapter {scalar_t__ device_id; int napi; TYPE_2__* ndev; int pdev; } ;
struct ib_mac_iocb_rsp {int length; } ;
struct TYPE_3__ {int rx_bytes; int rx_packets; } ;
struct TYPE_4__ {TYPE_1__ stats; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (struct ql_rcv_buf_cb*,int ) ;
 int FUNC_1 (struct ql_rcv_buf_cb*,int ) ;
 int FUNC_2 (struct sk_buff*,TYPE_2__*) ;
 scalar_t__ FUNC_3 (int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_4 (int *,struct sk_buff*) ;
 int FUNC_5 (int ,int ,int ,int ) ;
 int FUNC_6 (int ) ;
 struct ql_rcv_buf_cb* FUNC_7 (struct ql3_adapter*) ;
 int FUNC_8 (struct ql3_adapter*) ;
 int FUNC_9 (struct ql3_adapter*,struct ql_rcv_buf_cb*) ;
 int FUNC_10 (struct sk_buff*) ;
 int FUNC_11 (struct sk_buff*,scalar_t__) ;

__attribute__((used)) static void FUNC_12(struct ql3_adapter *VAR_4,
       struct ib_mac_iocb_rsp *VAR_5)
{
 struct ql_rcv_buf_cb *VAR_6 = ((void*)0);
 struct ql_rcv_buf_cb *VAR_7 = ((void*)0);
 struct sk_buff *VAR_8;
 u16 VAR_9 = FUNC_3(VAR_5->length);




 FUNC_8(VAR_4);

 if (VAR_4->device_id == VAR_1)
  VAR_6 = FUNC_7(VAR_4);


 VAR_7 = FUNC_7(VAR_4);
 VAR_8 = VAR_7->skb;

 VAR_4->ndev->stats.rx_packets++;
 VAR_4->ndev->stats.rx_bytes += VAR_9;

 FUNC_11(VAR_8, VAR_9);
 FUNC_5(VAR_4->pdev,
    FUNC_0(VAR_7, VAR_2),
    FUNC_1(VAR_7, VAR_3),
    VAR_0);
 FUNC_6(VAR_8->data);
 FUNC_10(VAR_8);
 VAR_8->protocol = FUNC_2(VAR_8, VAR_4->ndev);

 FUNC_4(&VAR_4->napi, VAR_8);
 VAR_7->skb = ((void*)0);

 if (VAR_4->device_id == VAR_1)
  FUNC_9(VAR_4, VAR_6);
 FUNC_9(VAR_4, VAR_7);
}
