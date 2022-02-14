
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct sk_buff {int dummy; } ;
struct rtw_tx_pkt_info {int dummy; } ;
struct TYPE_4__ {TYPE_1__* ops; } ;
struct rtw_dev {TYPE_2__ hci; } ;
struct TYPE_3__ {int (* tx ) (struct rtw_dev*,struct rtw_tx_pkt_info*,struct sk_buff*) ;} ;


 int FUNC_0 (struct rtw_dev*,struct rtw_tx_pkt_info*,struct sk_buff*) ;

__attribute__((used)) static inline int FUNC_1(struct rtw_dev *VAR_0,
        struct rtw_tx_pkt_info *VAR_1,
        struct sk_buff *VAR_2)
{
 return VAR_0->hci.ops->tx(VAR_0, VAR_1, VAR_2);
}
