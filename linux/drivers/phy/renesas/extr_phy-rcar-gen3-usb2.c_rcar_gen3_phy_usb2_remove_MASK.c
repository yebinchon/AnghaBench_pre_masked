
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rcar_gen3_chan {scalar_t__ is_otg_channel; } ;
struct platform_device {int dev; } ;


 int VAR_0 ;
 int FUNC_0 (int *,int *) ;
 struct rcar_gen3_chan* FUNC_1 (struct platform_device*) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static int FUNC_3(struct platform_device *VAR_1)
{
 struct rcar_gen3_chan *VAR_2 = FUNC_1(VAR_1);

 if (VAR_2->is_otg_channel)
  FUNC_0(&VAR_1->dev, &VAR_0);

 FUNC_2(&VAR_1->dev);

 return 0;
}
