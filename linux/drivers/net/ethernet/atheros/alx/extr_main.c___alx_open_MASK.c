
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_2__ {int pdev; } ;
struct alx_priv {TYPE_1__ hw; int dev; int num_rxq; int num_txq; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (struct alx_priv*) ;
 int FUNC_1 (struct alx_priv*) ;
 int FUNC_2 (struct alx_priv*) ;
 int FUNC_3 (struct alx_priv*) ;
 int FUNC_4 (struct alx_priv*) ;
 int FUNC_5 (struct alx_priv*) ;
 int FUNC_6 (struct alx_priv*) ;
 int FUNC_7 (struct alx_priv*) ;
 int FUNC_8 (struct alx_priv*) ;
 int FUNC_9 (struct alx_priv*) ;
 int FUNC_10 (struct alx_priv*) ;
 int FUNC_11 (TYPE_1__*,int ,int ) ;
 int FUNC_12 (int ) ;
 int FUNC_13 (int ,int ) ;
 int FUNC_14 (int ,int ) ;
 int FUNC_15 (int ) ;
 int FUNC_16 (int ) ;

__attribute__((used)) static int FUNC_17(struct alx_priv *VAR_2, bool VAR_3)
{
 int VAR_4;

 VAR_4 = FUNC_3(VAR_2);
 if (VAR_4 < 0) {
  VAR_4 = FUNC_6(VAR_2);
  if (VAR_4)
   return VAR_4;
 }

 if (!VAR_3)
  FUNC_12(VAR_2->dev);

 VAR_4 = FUNC_0(VAR_2);
 if (VAR_4)
  goto out_disable_adv_intr;

 VAR_4 = FUNC_1(VAR_2);
 if (VAR_4)
  goto out_free_rings;

 FUNC_2(VAR_2);

 VAR_4 = FUNC_9(VAR_2);
 if (VAR_4)
  goto out_free_rings;





 FUNC_8(VAR_2);

 FUNC_14(VAR_2->dev, VAR_2->num_txq);
 FUNC_13(VAR_2->dev, VAR_2->num_rxq);


 FUNC_11(&VAR_2->hw, VAR_0, ~(u32)VAR_1);

 FUNC_7(VAR_2);

 if (!VAR_3)
  FUNC_15(VAR_2->dev);

 FUNC_10(VAR_2);
 return 0;

out_free_rings:
 FUNC_5(VAR_2);
 FUNC_4(VAR_2);
out_disable_adv_intr:
 FUNC_16(VAR_2->hw.pdev);
 return VAR_4;
}
