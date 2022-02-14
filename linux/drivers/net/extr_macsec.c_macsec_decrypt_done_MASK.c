
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u32 ;
struct sk_buff {int len; struct net_device* dev; } ;
struct net_device {int dummy; } ;
struct macsec_rx_sc {int dummy; } ;
struct macsec_rx_sa {struct macsec_rx_sc* sc; } ;
struct TYPE_5__ {int netdev; int icv_len; } ;
struct macsec_dev {int gro_cells; TYPE_2__ secy; } ;
struct crypto_async_request {struct sk_buff* data; } ;
struct TYPE_6__ {int packet_number; } ;
struct TYPE_4__ {int valid; int has_sci; int req; struct macsec_rx_sa* rx_sa; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct net_device*,int) ;
 int FUNC_2 (struct net_device*) ;
 scalar_t__ FUNC_3 (int *,struct sk_buff*) ;
 int FUNC_4 (struct sk_buff*) ;
 TYPE_3__* FUNC_5 (struct sk_buff*) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (struct sk_buff*,int ,int ) ;
 int FUNC_8 (struct sk_buff*,TYPE_2__*,int ) ;
 struct macsec_dev* FUNC_9 (struct net_device*) ;
 int FUNC_10 (struct sk_buff*,int ) ;
 int FUNC_11 (struct macsec_rx_sa*) ;
 int FUNC_12 (struct macsec_rx_sc*) ;
 TYPE_1__* FUNC_13 (struct sk_buff*) ;
 int FUNC_14 (int ) ;
 int FUNC_15 () ;
 int FUNC_16 () ;

__attribute__((used)) static void FUNC_17(struct crypto_async_request *VAR_1, int VAR_2)
{
 struct sk_buff *VAR_3 = VAR_1->data;
 struct net_device *VAR_4 = VAR_3->dev;
 struct macsec_dev *VAR_5 = FUNC_9(VAR_4);
 struct macsec_rx_sa *VAR_6 = FUNC_13(VAR_3)->rx_sa;
 struct macsec_rx_sc *VAR_7 = VAR_6->sc;
 int VAR_8;
 u32 VAR_9;

 FUNC_0(FUNC_13(VAR_3)->req);

 if (!VAR_2)
  FUNC_13(VAR_3)->valid = 1;

 FUNC_15();
 VAR_9 = FUNC_14(FUNC_5(VAR_3)->packet_number);
 if (!FUNC_8(VAR_3, &VAR_5->secy, VAR_9)) {
  FUNC_16();
  FUNC_4(VAR_3);
  goto out;
 }

 FUNC_7(VAR_3, VAR_5->secy.icv_len,
       FUNC_6(FUNC_13(VAR_3)->has_sci));
 FUNC_10(VAR_3, VAR_5->secy.netdev);

 VAR_8 = VAR_3->len;
 if (FUNC_3(&VAR_5->gro_cells, VAR_3) == VAR_0)
  FUNC_1(VAR_4, VAR_8);

 FUNC_16();

out:
 FUNC_11(VAR_6);
 FUNC_12(VAR_7);
 FUNC_2(VAR_4);
}
