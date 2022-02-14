
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int port; int len; } ;
struct tx_desc {TYPE_1__ header; int data; } ;
struct sk_buff {unsigned int len; } ;
struct net_device {int dummy; } ;
struct ec_bhf_priv {size_t tx_dnext; int tx_dcount; unsigned int stat_tx_bytes; struct tx_desc* tx_descs; } ;
typedef int netdev_tx_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (unsigned int) ;
 int FUNC_1 (struct sk_buff*) ;
 int FUNC_2 (struct tx_desc*) ;
 int FUNC_3 (struct ec_bhf_priv*,struct tx_desc*) ;
 int FUNC_4 (TYPE_1__*,int ,int) ;
 struct ec_bhf_priv* FUNC_5 (struct net_device*) ;
 int FUNC_6 (struct net_device*) ;
 int FUNC_7 (struct sk_buff*,int ) ;
 int FUNC_8 () ;

__attribute__((used)) static netdev_tx_t FUNC_9(struct sk_buff *VAR_2,
         struct net_device *VAR_3)
{
 struct ec_bhf_priv *VAR_4 = FUNC_5(VAR_3);
 struct tx_desc *VAR_5;
 unsigned VAR_6;

 VAR_5 = &VAR_4->tx_descs[VAR_4->tx_dnext];

 FUNC_7(VAR_2, VAR_5->data);
 VAR_6 = VAR_2->len;

 FUNC_4(&VAR_5->header, 0, sizeof(VAR_5->header));
 VAR_5->header.len = FUNC_0(VAR_6);
 VAR_5->header.port = VAR_1;

 FUNC_3(VAR_4, VAR_5);

 VAR_4->tx_dnext = (VAR_4->tx_dnext + 1) % VAR_4->tx_dcount;

 if (!FUNC_2(&VAR_4->tx_descs[VAR_4->tx_dnext])) {



  FUNC_8();

  FUNC_6(VAR_3);
 }

 VAR_4->stat_tx_bytes += VAR_6;

 FUNC_1(VAR_2);

 return VAR_0;
}
