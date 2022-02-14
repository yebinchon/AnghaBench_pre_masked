
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct device {int dummy; } ;
struct bcm_sysport_tx_ring {struct bcm_sysport_priv* priv; } ;
struct bcm_sysport_priv {TYPE_2__* pdev; } ;
struct bcm_sysport_cb {TYPE_1__* skb; } ;
struct TYPE_4__ {struct device dev; } ;
struct TYPE_3__ {scalar_t__ len; } ;


 int VAR_0 ;
 int FUNC_0 (struct bcm_sysport_cb*) ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_1 (struct bcm_sysport_cb*,int ) ;
 int FUNC_2 (struct bcm_sysport_cb*,int ,int ) ;
 scalar_t__ FUNC_3 (struct bcm_sysport_cb*,int ) ;
 int FUNC_4 (struct device*,scalar_t__,scalar_t__,int ) ;
 int FUNC_5 (struct device*,scalar_t__,scalar_t__,int ) ;

__attribute__((used)) static void FUNC_6(struct bcm_sysport_tx_ring *VAR_3,
           struct bcm_sysport_cb *VAR_4,
           unsigned int *VAR_5,
           unsigned int *VAR_6)
{
 struct bcm_sysport_priv *VAR_7 = VAR_3->priv;
 struct device *VAR_8 = &VAR_7->pdev->dev;

 if (VAR_4->skb) {
  *VAR_5 += VAR_4->skb->len;
  FUNC_5(VAR_8, FUNC_1(VAR_4, VAR_1),
     FUNC_3(VAR_4, VAR_2),
     VAR_0);
  (*VAR_6)++;
  FUNC_0(VAR_4);

 } else if (FUNC_1(VAR_4, VAR_1)) {
  *VAR_5 += FUNC_3(VAR_4, VAR_2);
  FUNC_4(VAR_8, FUNC_1(VAR_4, VAR_1),
          FUNC_3(VAR_4, VAR_2), VAR_0);
  FUNC_2(VAR_4, VAR_1, 0);
 }
}
