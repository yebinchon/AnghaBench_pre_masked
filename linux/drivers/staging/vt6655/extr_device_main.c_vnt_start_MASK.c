
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct vnt_private {TYPE_1__* pcid; int PortOffset; int rx_buf_sz; } ;
struct ieee80211_hw {struct vnt_private* priv; } ;
struct TYPE_2__ {int irq; int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int ) ;
 int VAR_3 ;
 int FUNC_1 (int *,char*) ;
 int FUNC_2 (struct vnt_private*) ;
 int FUNC_3 (struct vnt_private*) ;
 int FUNC_4 (struct vnt_private*) ;
 int FUNC_5 (struct vnt_private*) ;
 int FUNC_6 (struct vnt_private*) ;
 int FUNC_7 (struct vnt_private*) ;
 int FUNC_8 (struct vnt_private*) ;
 int FUNC_9 (struct vnt_private*) ;
 int FUNC_10 (struct vnt_private*) ;
 int FUNC_11 (struct vnt_private*) ;
 int FUNC_12 (int ,struct vnt_private*) ;
 int FUNC_13 (struct ieee80211_hw*) ;
 int FUNC_14 (int ,int ,int ,char*,struct vnt_private*) ;
 int VAR_4 ;

__attribute__((used)) static int FUNC_15(struct ieee80211_hw *VAR_5)
{
 struct vnt_private *VAR_6 = VAR_5->priv;
 int VAR_7;

 VAR_6->rx_buf_sz = VAR_3;
 if (!FUNC_9(VAR_6))
  return -VAR_0;

 VAR_7 = FUNC_14(VAR_6->pcid->irq, VAR_4,
     VAR_2, "vt6655", VAR_6);
 if (VAR_7) {
  FUNC_1(&VAR_6->pcid->dev, "failed to start irq\n");
  goto err_free_rings;
 }

 FUNC_1(&VAR_6->pcid->dev, "call device init rd0 ring\n");
 VAR_7 = FUNC_6(VAR_6);
 if (VAR_7)
  goto err_free_irq;
 VAR_7 = FUNC_7(VAR_6);
 if (VAR_7)
  goto err_free_rd0_ring;
 VAR_7 = FUNC_10(VAR_6);
 if (VAR_7)
  goto err_free_rd1_ring;
 VAR_7 = FUNC_11(VAR_6);
 if (VAR_7)
  goto err_free_td0_ring;

 FUNC_8(VAR_6);

 FUNC_1(&VAR_6->pcid->dev, "call MACvIntEnable\n");
 FUNC_0(VAR_6->PortOffset, VAR_1);

 FUNC_13(VAR_5);

 return 0;

err_free_td0_ring:
 FUNC_5(VAR_6);
err_free_rd1_ring:
 FUNC_3(VAR_6);
err_free_rd0_ring:
 FUNC_2(VAR_6);
err_free_irq:
 FUNC_12(VAR_6->pcid->irq, VAR_6);
err_free_rings:
 FUNC_4(VAR_6);
 return VAR_7;
}
