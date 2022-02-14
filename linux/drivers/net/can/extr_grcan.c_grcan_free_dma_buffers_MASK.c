
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int dev; } ;
struct grcan_dma {int base_handle; int base_buf; int base_size; } ;
struct grcan_priv {struct grcan_dma dma; } ;


 int FUNC_0 (int *,int ,int ,int ) ;
 int FUNC_1 (struct grcan_dma*,int ,int) ;
 struct grcan_priv* FUNC_2 (struct net_device*) ;

__attribute__((used)) static void FUNC_3(struct net_device *VAR_0)
{
 struct grcan_priv *VAR_1 = FUNC_2(VAR_0);
 struct grcan_dma *VAR_2 = &VAR_1->dma;

 FUNC_0(&VAR_0->dev, VAR_2->base_size, VAR_2->base_buf,
     VAR_2->base_handle);
 FUNC_1(VAR_2, 0, sizeof(*VAR_2));
}
