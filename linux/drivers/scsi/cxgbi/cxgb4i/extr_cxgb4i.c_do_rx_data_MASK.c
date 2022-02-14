
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tid_info {int dummy; } ;
struct sk_buff {scalar_t__ data; } ;
struct cxgbi_sock {int lock; } ;
struct cxgbi_device {int dummy; } ;
struct cxgb4_lld_info {struct tid_info* tids; } ;
struct cpl_rx_data {int dummy; } ;


 unsigned int FUNC_0 (struct cpl_rx_data*) ;
 int FUNC_1 (struct sk_buff*) ;
 struct cxgb4_lld_info* FUNC_2 (struct cxgbi_device*) ;
 struct cxgbi_sock* FUNC_3 (struct tid_info*,unsigned int) ;
 int FUNC_4 (char*,...) ;
 int FUNC_5 (struct cxgbi_sock*) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;

__attribute__((used)) static void FUNC_8(struct cxgbi_device *VAR_0, struct sk_buff *VAR_1)
{
 struct cxgbi_sock *VAR_2;
 struct cpl_rx_data *VAR_3 = (struct cpl_rx_data *)VAR_1->data;
 unsigned int VAR_4 = FUNC_0(VAR_3);
 struct cxgb4_lld_info *VAR_5 = FUNC_2(VAR_0);
 struct tid_info *VAR_6 = VAR_5->tids;

 VAR_2 = FUNC_3(VAR_6, VAR_4);
 if (!VAR_2) {
  FUNC_4("can't find connection for tid %u.\n", VAR_4);
 } else {

  FUNC_4("csk 0x%p, tid %u, rcv cpl_rx_data.\n", VAR_2, VAR_4);
  FUNC_6(&VAR_2->lock);
  FUNC_5(VAR_2);
  FUNC_7(&VAR_2->lock);
 }
 FUNC_1(VAR_1);
}
