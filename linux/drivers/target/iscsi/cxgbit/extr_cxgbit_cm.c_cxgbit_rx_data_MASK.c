
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tid_info {int dummy; } ;
struct sk_buff {int dummy; } ;
struct cxgbit_sock {int dummy; } ;
struct cxgb4_lld_info {struct tid_info* tids; } ;
struct cxgbit_device {struct cxgb4_lld_info lldi; } ;
struct cpl_rx_data {int dummy; } ;


 unsigned int FUNC_0 (struct cpl_rx_data*) ;
 int FUNC_1 (struct sk_buff*) ;
 struct cpl_rx_data* FUNC_2 (struct sk_buff*) ;
 int FUNC_3 (struct cxgbit_sock*,struct sk_buff*) ;
 struct cxgbit_sock* FUNC_4 (struct tid_info*,unsigned int) ;
 int FUNC_5 (char*,unsigned int) ;
 scalar_t__ FUNC_6 (int) ;

__attribute__((used)) static void FUNC_7(struct cxgbit_device *VAR_0, struct sk_buff *VAR_1)
{
 struct cxgbit_sock *VAR_2;
 struct cpl_rx_data *VAR_3 = FUNC_2(VAR_1);
 unsigned int VAR_4 = FUNC_0(VAR_3);
 struct cxgb4_lld_info *VAR_5 = &VAR_0->lldi;
 struct tid_info *VAR_6 = VAR_5->tids;

 VAR_2 = FUNC_4(VAR_6, VAR_4);
 if (FUNC_6(!VAR_2)) {
  FUNC_5("can't find conn. for tid %u.\n", VAR_4);
  goto rel_skb;
 }

 FUNC_3(VAR_2, VAR_1);
 return;
rel_skb:
 FUNC_1(VAR_1);
}
