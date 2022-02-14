
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ravb_private {scalar_t__ chip_id; int * napi; int desc_bat_dma; int desc_bat; int desc_bat_size; } ;
struct platform_device {int dev; } ;
struct TYPE_2__ {int parent; } ;
struct net_device {TYPE_1__ dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 (int ,int ,int ,int ) ;
 int FUNC_1 (struct net_device*) ;
 struct ravb_private* FUNC_2 (struct net_device*) ;
 int FUNC_3 (int *) ;
 struct net_device* FUNC_4 (struct platform_device*) ;
 int FUNC_5 (struct platform_device*,int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (struct ravb_private*) ;
 int FUNC_9 (struct net_device*) ;
 int FUNC_10 (struct net_device*,int ,int ) ;
 int FUNC_11 (struct net_device*) ;

__attribute__((used)) static int FUNC_12(struct platform_device *VAR_5)
{
 struct net_device *VAR_6 = FUNC_4(VAR_5);
 struct ravb_private *VAR_7 = FUNC_2(VAR_6);


 if (VAR_7->chip_id != VAR_4)
  FUNC_9(VAR_6);

 FUNC_0(VAR_6->dev.parent, VAR_7->desc_bat_size, VAR_7->desc_bat,
     VAR_7->desc_bat_dma);

 FUNC_10(VAR_6, VAR_1, VAR_0);
 FUNC_7(&VAR_5->dev);
 FUNC_11(VAR_6);
 FUNC_3(&VAR_7->napi[VAR_3]);
 FUNC_3(&VAR_7->napi[VAR_2]);
 FUNC_8(VAR_7);
 FUNC_6(&VAR_5->dev);
 FUNC_1(VAR_6);
 FUNC_5(VAR_5, ((void*)0));

 return 0;
}
