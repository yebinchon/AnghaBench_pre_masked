
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct sk_buff {int len; struct net_device* dev; } ;
struct net_device {int dummy; } ;
struct macsec_tx_sa {int dummy; } ;
struct TYPE_3__ {int tx_sc; } ;
struct macsec_dev {TYPE_1__ secy; } ;
struct crypto_async_request {struct sk_buff* data; } ;
struct TYPE_4__ {struct macsec_tx_sa* tx_sa; int req; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (struct net_device*,int,int) ;
 int FUNC_2 (struct net_device*) ;
 int FUNC_3 (struct sk_buff*) ;
 int FUNC_4 (struct sk_buff*,int *,struct macsec_tx_sa*) ;
 int FUNC_5 (struct sk_buff*,struct net_device*) ;
 struct macsec_dev* FUNC_6 (struct net_device*) ;
 TYPE_2__* FUNC_7 (struct sk_buff*) ;
 int FUNC_8 (struct macsec_tx_sa*) ;
 int FUNC_9 () ;
 int FUNC_10 () ;

__attribute__((used)) static void FUNC_11(struct crypto_async_request *VAR_0, int VAR_1)
{
 struct sk_buff *VAR_2 = VAR_0->data;
 struct net_device *VAR_3 = VAR_2->dev;
 struct macsec_dev *VAR_4 = FUNC_6(VAR_3);
 struct macsec_tx_sa *VAR_5 = FUNC_7(VAR_2)->tx_sa;
 int VAR_6, VAR_7;

 FUNC_0(FUNC_7(VAR_2)->req);

 FUNC_9();
 FUNC_5(VAR_2, VAR_3);
 FUNC_4(VAR_2, &VAR_4->secy.tx_sc, FUNC_7(VAR_2)->tx_sa);
 VAR_6 = VAR_2->len;
 VAR_7 = FUNC_3(VAR_2);
 FUNC_1(VAR_3, VAR_7, VAR_6);
 FUNC_10();

 FUNC_8(VAR_5);
 FUNC_2(VAR_3);
}
