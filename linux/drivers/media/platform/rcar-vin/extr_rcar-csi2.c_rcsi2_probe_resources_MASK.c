
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct resource {int dummy; } ;
struct rcar_csi2 {int rstc; int base; } ;
struct platform_device {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ) ;
 int VAR_2 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int *,struct resource*) ;
 int FUNC_4 (int *,int,int ,int ,int ,int ,struct rcar_csi2*) ;
 int FUNC_5 (int *,int *) ;
 int FUNC_6 (struct platform_device*,int ) ;
 struct resource* FUNC_7 (struct platform_device*,int ,int ) ;
 int VAR_3 ;
 int VAR_4 ;

__attribute__((used)) static int FUNC_8(struct rcar_csi2 *VAR_5,
     struct platform_device *VAR_6)
{
 struct resource *VAR_7;
 int VAR_8, VAR_9;

 VAR_7 = FUNC_7(VAR_6, VAR_0, 0);
 VAR_5->base = FUNC_3(&VAR_6->dev, VAR_7);
 if (FUNC_0(VAR_5->base))
  return FUNC_1(VAR_5->base);

 VAR_8 = FUNC_6(VAR_6, 0);
 if (VAR_8 < 0)
  return VAR_8;

 VAR_9 = FUNC_4(&VAR_6->dev, VAR_8, VAR_3,
     VAR_4, VAR_1,
     VAR_2, VAR_5);
 if (VAR_9)
  return VAR_9;

 VAR_5->rstc = FUNC_5(&VAR_6->dev, ((void*)0));

 return FUNC_2(VAR_5->rstc);
}
