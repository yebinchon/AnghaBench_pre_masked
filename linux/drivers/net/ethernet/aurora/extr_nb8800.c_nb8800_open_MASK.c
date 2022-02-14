
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct phy_device {int dummy; } ;
struct net_device {int irq; int dev; } ;
struct nb8800_priv {int napi; int phy_mode; int phy_node; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int ,struct net_device*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct net_device*) ;
 int FUNC_4 (struct net_device*) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_5 (struct net_device*,int) ;
 int FUNC_6 (struct net_device*,int) ;
 int FUNC_7 (struct net_device*) ;
 int FUNC_8 (struct net_device*) ;
 int FUNC_9 (struct nb8800_priv*,int ,int) ;
 struct nb8800_priv* FUNC_10 (struct net_device*) ;
 int FUNC_11 (struct net_device*) ;
 int FUNC_12 (struct net_device*) ;
 struct phy_device* FUNC_13 (struct net_device*,int ,int ,int ,int ) ;
 int FUNC_14 (struct phy_device*) ;
 int FUNC_15 (int ,int ,int ,int ,struct net_device*) ;

__attribute__((used)) static int FUNC_16(struct net_device *VAR_5)
{
 struct nb8800_priv *VAR_6 = FUNC_10(VAR_5);
 struct phy_device *VAR_7;
 int VAR_8;


 FUNC_9(VAR_6, VAR_1, 0xf);
 FUNC_9(VAR_6, VAR_2, 0xf);

 VAR_8 = FUNC_4(VAR_5);
 if (VAR_8)
  return VAR_8;

 VAR_8 = FUNC_15(VAR_5->irq, VAR_3, 0, FUNC_0(&VAR_5->dev), VAR_5);
 if (VAR_8)
  goto err_free_dma;

 FUNC_5(VAR_5, 1);
 FUNC_6(VAR_5, 1);

 VAR_7 = FUNC_13(VAR_5, VAR_6->phy_node,
    VAR_4, 0,
    VAR_6->phy_mode);
 if (!VAR_7) {
  VAR_8 = -VAR_0;
  goto err_free_irq;
 }

 FUNC_7(VAR_5);

 FUNC_11(VAR_5);
 FUNC_2(&VAR_6->napi);
 FUNC_12(VAR_5);

 FUNC_8(VAR_5);
 FUNC_14(VAR_7);

 return 0;

err_free_irq:
 FUNC_1(VAR_5->irq, VAR_5);
err_free_dma:
 FUNC_3(VAR_5);

 return VAR_8;
}
