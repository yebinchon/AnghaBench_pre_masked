
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {scalar_t__ cb; } ;
struct mwifiex_rxinfo {int dummy; } ;
struct mwifiex_cb {struct mwifiex_rxinfo rx_info; } ;


 int FUNC_0 (int) ;

__attribute__((used)) static inline struct mwifiex_rxinfo *FUNC_1(struct sk_buff *VAR_0)
{
 struct mwifiex_cb *VAR_1 = (struct mwifiex_cb *)VAR_0->cb;

 FUNC_0(sizeof(struct mwifiex_cb) > sizeof(VAR_0->cb));
 return &VAR_1->rx_info;
}
