
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {scalar_t__ cb; } ;
struct mwifiex_txinfo {int dummy; } ;
struct mwifiex_cb {struct mwifiex_txinfo tx_info; } ;



__attribute__((used)) static inline struct mwifiex_txinfo *FUNC_0(struct sk_buff *VAR_0)
{
 struct mwifiex_cb *VAR_1 = (struct mwifiex_cb *)VAR_0->cb;

 return &VAR_1->tx_info;
}
