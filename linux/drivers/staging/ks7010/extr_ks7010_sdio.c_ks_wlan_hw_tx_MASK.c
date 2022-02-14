
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct sk_buff {int dummy; } ;
struct TYPE_4__ {int tx_dev_lock; } ;
struct TYPE_3__ {size_t qtail; scalar_t__* buff; } ;
struct ks_wlan_private {int rw_dwork; int wq; TYPE_2__ tx_dev; TYPE_1__ hostt; int net_dev; } ;
struct hostif_hdr {int event; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct ks_wlan_private*,void*,unsigned long,void (*) (struct ks_wlan_private*,struct sk_buff*),struct sk_buff*) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int ,char*,int ) ;
 int FUNC_3 (int ,int *,int ) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 scalar_t__ FUNC_6 (struct ks_wlan_private*) ;

int FUNC_7(struct ks_wlan_private *VAR_3, void *VAR_4, unsigned long VAR_5,
    void (*VAR_6)(struct ks_wlan_private *VAR_7,
        struct sk_buff *VAR_8),
    struct sk_buff *VAR_9)
{
 int VAR_10;
 struct hostif_hdr *VAR_11;

 VAR_11 = (struct hostif_hdr *)VAR_4;

 if (FUNC_1(VAR_11->event) < VAR_0 ||
     FUNC_1(VAR_11->event) > VAR_1) {
  FUNC_2(VAR_3->net_dev, "unknown event=%04X\n", VAR_11->event);
  return 0;
 }


 VAR_3->hostt.buff[VAR_3->hostt.qtail] = FUNC_1(VAR_11->event);
 VAR_3->hostt.qtail = (VAR_3->hostt.qtail + 1) % VAR_2;

 FUNC_4(&VAR_3->tx_dev.tx_dev_lock);
 VAR_10 = FUNC_0(VAR_3, VAR_4, VAR_5, VAR_6, VAR_9);
 FUNC_5(&VAR_3->tx_dev.tx_dev_lock);

 if (FUNC_6(VAR_3))
  FUNC_3(VAR_3->wq, &VAR_3->rw_dwork, 0);

 return VAR_10;
}
