
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct vf610_ocotp {int nvmem; int timing; struct device* dev; int clk; int base; } ;
struct resource {int dummy; } ;
struct device {int dummy; } ;
struct platform_device {struct device dev; } ;
struct TYPE_3__ {struct device* dev; struct vf610_ocotp* priv; int size; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct device*,char*,int) ;
 int FUNC_4 (struct device*,int *) ;
 int FUNC_5 (struct device*,struct resource*) ;
 struct vf610_ocotp* FUNC_6 (struct device*,int,int ) ;
 int FUNC_7 (struct device*,TYPE_1__*) ;
 TYPE_1__ VAR_3 ;
 struct resource* FUNC_8 (struct platform_device*,int ,int ) ;
 int FUNC_9 (struct resource*) ;
 int FUNC_10 (struct vf610_ocotp*) ;

__attribute__((used)) static int FUNC_11(struct platform_device *VAR_4)
{
 struct device *VAR_5 = &VAR_4->dev;
 struct resource *VAR_6;
 struct vf610_ocotp *VAR_7;

 VAR_7 = FUNC_6(VAR_5, sizeof(struct vf610_ocotp), VAR_1);
 if (!VAR_7)
  return -VAR_0;

 VAR_6 = FUNC_8(VAR_4, VAR_2, 0);
 VAR_7->base = FUNC_5(VAR_5, VAR_6);
 if (FUNC_0(VAR_7->base))
  return FUNC_1(VAR_7->base);

 VAR_7->clk = FUNC_4(VAR_5, ((void*)0));
 if (FUNC_0(VAR_7->clk)) {
  FUNC_3(VAR_5, "failed getting clock, err = %ld\n",
   FUNC_1(VAR_7->clk));
  return FUNC_1(VAR_7->clk);
 }
 VAR_7->dev = VAR_5;
 VAR_7->timing = FUNC_10(VAR_7);

 VAR_3.size = FUNC_9(VAR_6);
 VAR_3.priv = VAR_7;
 VAR_3.dev = VAR_5;

 VAR_7->nvmem = FUNC_7(VAR_5, &VAR_3);

 return FUNC_2(VAR_7->nvmem);
}
