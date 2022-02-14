
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct resource {int dummy; } ;
struct device {int dummy; } ;
struct platform_device {struct device dev; } ;
struct geni_wrapper {TYPE_1__* ahb_clks; int base; struct device* dev; } ;
struct TYPE_2__ {char* id; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int ) ;
 int VAR_3 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct device*,char*) ;
 int FUNC_3 (struct device*,char*,int) ;
 int FUNC_4 (struct device*,struct geni_wrapper*) ;
 int FUNC_5 (struct device*,int ,TYPE_1__*) ;
 int FUNC_6 (struct device*,struct resource*) ;
 struct geni_wrapper* FUNC_7 (struct device*,int,int ) ;
 int FUNC_8 (struct device*) ;
 int FUNC_9 (struct device*) ;
 struct resource* FUNC_10 (struct platform_device*,int ,int ) ;

__attribute__((used)) static int FUNC_11(struct platform_device *VAR_4)
{
 struct device *VAR_5 = &VAR_4->dev;
 struct resource *VAR_6;
 struct geni_wrapper *VAR_7;
 int VAR_8;

 VAR_7 = FUNC_7(VAR_5, sizeof(*VAR_7), VAR_1);
 if (!VAR_7)
  return -VAR_0;

 VAR_7->dev = VAR_5;
 VAR_6 = FUNC_10(VAR_4, VAR_2, 0);
 VAR_7->base = FUNC_6(VAR_5, VAR_6);
 if (FUNC_0(VAR_7->base))
  return FUNC_1(VAR_7->base);

 if (!FUNC_9(&VAR_4->dev)) {
  VAR_7->ahb_clks[0].id = "m-ahb";
  VAR_7->ahb_clks[1].id = "s-ahb";
  VAR_8 = FUNC_5(VAR_5, VAR_3, VAR_7->ahb_clks);
  if (VAR_8) {
   FUNC_3(VAR_5, "Err getting AHB clks %d\n", VAR_8);
   return VAR_8;
  }
 }

 FUNC_4(VAR_5, VAR_7);
 FUNC_2(VAR_5, "GENI SE Driver probed\n");
 return FUNC_8(VAR_5);
}
