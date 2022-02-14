
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {struct device* parent; } ;
struct platform_device {TYPE_1__ dev; int * resource; } ;
struct net_device {int dummy; } ;
struct device {int dummy; } ;
struct bigmac {int bblock_dvma; int bmac_block; int tregs; int bregs; int creg; int gregs; struct net_device* dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (TYPE_1__*,int ,int ,int ) ;
 int FUNC_1 (struct net_device*) ;
 int FUNC_2 (int *,int ,int ) ;
 struct bigmac* FUNC_3 (struct platform_device*) ;
 struct platform_device* FUNC_4 (struct device*) ;
 int FUNC_5 (struct net_device*) ;

__attribute__((used)) static int FUNC_6(struct platform_device *VAR_5)
{
 struct bigmac *VAR_6 = FUNC_3(VAR_5);
 struct device *VAR_7 = VAR_5->dev.parent;
 struct net_device *VAR_8 = VAR_6->dev;
 struct platform_device *VAR_9;

 VAR_9 = FUNC_4(VAR_7);

 FUNC_5(VAR_8);

 FUNC_2(&VAR_9->resource[0], VAR_6->gregs, VAR_2);
 FUNC_2(&VAR_5->resource[0], VAR_6->creg, VAR_1);
 FUNC_2(&VAR_5->resource[1], VAR_6->bregs, VAR_0);
 FUNC_2(&VAR_5->resource[2], VAR_6->tregs, VAR_4);
 FUNC_0(&VAR_5->dev,
     VAR_3,
     VAR_6->bmac_block,
     VAR_6->bblock_dvma);

 FUNC_1(VAR_8);

 return 0;
}
