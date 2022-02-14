
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef void* u32 ;
struct rzn1_pinctrl {int* mdio_func; void* clk; int pctl; int * dev; void* lev2; void* lev2_protect_phys; void* lev1; void* lev1_protect_phys; } ;
struct resource {scalar_t__ start; } ;
struct platform_device {int dev; } ;
struct TYPE_3__ {int npins; int pins; int name; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_1 (void*) ;
 int FUNC_2 (void*) ;
 int FUNC_3 (void*) ;
 int FUNC_4 (void*) ;
 int FUNC_5 (int *,char*) ;
 int FUNC_6 (int *,char*) ;
 int FUNC_7 (int *) ;
 void* FUNC_8 (int *,int *) ;
 void* FUNC_9 (int *,struct resource*) ;
 struct rzn1_pinctrl* FUNC_10 (int *,int,int ) ;
 int FUNC_11 (int *,TYPE_1__*,struct rzn1_pinctrl*,int *) ;
 int FUNC_12 (int ) ;
 struct resource* FUNC_13 (struct platform_device*,int ,int) ;
 int FUNC_14 (struct platform_device*,struct rzn1_pinctrl*) ;
 TYPE_1__ VAR_3 ;
 int FUNC_15 (struct platform_device*,struct rzn1_pinctrl*) ;
 int VAR_4 ;

__attribute__((used)) static int FUNC_16(struct platform_device *VAR_5)
{
 struct rzn1_pinctrl *VAR_6;
 struct resource *VAR_7;
 int VAR_8;


 VAR_6 = FUNC_10(&VAR_5->dev, sizeof(*VAR_6), VAR_1);
 if (!VAR_6)
  return -VAR_0;

 VAR_6->mdio_func[0] = -1;
 VAR_6->mdio_func[1] = -1;

 VAR_7 = FUNC_13(VAR_5, VAR_2, 0);
 VAR_6->lev1_protect_phys = (u32)VAR_7->start + 0x400;
 VAR_6->lev1 = FUNC_9(&VAR_5->dev, VAR_7);
 if (FUNC_1(VAR_6->lev1))
  return FUNC_2(VAR_6->lev1);

 VAR_7 = FUNC_13(VAR_5, VAR_2, 1);
 VAR_6->lev2_protect_phys = (u32)VAR_7->start + 0x400;
 VAR_6->lev2 = FUNC_9(&VAR_5->dev, VAR_7);
 if (FUNC_1(VAR_6->lev2))
  return FUNC_2(VAR_6->lev2);

 VAR_6->clk = FUNC_8(&VAR_5->dev, ((void*)0));
 if (FUNC_1(VAR_6->clk))
  return FUNC_2(VAR_6->clk);
 VAR_8 = FUNC_4(VAR_6->clk);
 if (VAR_8)
  return VAR_8;

 VAR_6->dev = &VAR_5->dev;
 VAR_3.name = FUNC_7(&VAR_5->dev);
 VAR_3.pins = VAR_4;
 VAR_3.npins = FUNC_0(VAR_4);

 VAR_8 = FUNC_15(VAR_5, VAR_6);
 if (VAR_8) {
  FUNC_5(&VAR_5->dev, "fail to probe dt properties\n");
  goto err_clk;
 }

 FUNC_14(VAR_5, VAR_6);

 VAR_8 = FUNC_11(&VAR_5->dev, &VAR_3,
          VAR_6, &VAR_6->pctl);
 if (VAR_8) {
  FUNC_5(&VAR_5->dev, "could not register rzn1 pinctrl driver\n");
  goto err_clk;
 }

 VAR_8 = FUNC_12(VAR_6->pctl);
 if (VAR_8)
  goto err_clk;

 FUNC_6(&VAR_5->dev, "probed\n");

 return 0;

err_clk:
 FUNC_3(VAR_6->clk);

 return VAR_8;
}
