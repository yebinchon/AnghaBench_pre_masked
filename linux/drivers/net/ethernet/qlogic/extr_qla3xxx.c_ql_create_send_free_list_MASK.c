
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ql_tx_buf_cb {int * oal; struct ob_mac_iocb_req* queue_entry; int * skb; } ;
struct ql3_adapter {struct ql_tx_buf_cb* tx_buf; struct ob_mac_iocb_req* req_q_virt_addr; } ;
struct ob_mac_iocb_req {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int * FUNC_0 (int,int ) ;

__attribute__((used)) static int FUNC_1(struct ql3_adapter *VAR_3)
{
 struct ql_tx_buf_cb *VAR_4;
 int VAR_5;
 struct ob_mac_iocb_req *VAR_6 = VAR_3->req_q_virt_addr;


 for (VAR_5 = 0; VAR_5 < VAR_2; VAR_5++) {

  VAR_4 = &VAR_3->tx_buf[VAR_5];
  VAR_4->skb = ((void*)0);
  VAR_4->queue_entry = VAR_6;
  VAR_6++;
  VAR_4->oal = FUNC_0(512, VAR_1);
  if (VAR_4->oal == ((void*)0))
   return -VAR_0;
 }
 return 0;
}
