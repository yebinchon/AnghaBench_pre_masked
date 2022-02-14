
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct device {int of_node; } ;
struct platform_device {struct device dev; } ;
struct g12a_mdio_mux {int pclk; int mux_handle; int regs; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (struct device*,char*,...) ;
 int FUNC_5 (struct device*,char*) ;
 struct g12a_mdio_mux* FUNC_6 (struct device*,int,int ) ;
 int FUNC_7 (struct platform_device*,int ) ;
 int FUNC_8 (struct device*) ;
 int VAR_3 ;
 int FUNC_9 (struct device*,int ,int ,int *,struct device*,int *) ;
 int FUNC_10 (struct platform_device*,struct g12a_mdio_mux*) ;

__attribute__((used)) static int FUNC_11(struct platform_device *VAR_4)
{
 struct device *VAR_5 = &VAR_4->dev;
 struct g12a_mdio_mux *VAR_6;
 int VAR_7;

 VAR_6 = FUNC_6(VAR_5, sizeof(*VAR_6), VAR_2);
 if (!VAR_6)
  return -VAR_0;

 FUNC_10(VAR_4, VAR_6);

 VAR_6->regs = FUNC_7(VAR_4, 0);
 if (FUNC_0(VAR_6->regs))
  return FUNC_1(VAR_6->regs);

 VAR_6->pclk = FUNC_5(VAR_5, "pclk");
 if (FUNC_0(VAR_6->pclk)) {
  VAR_7 = FUNC_1(VAR_6->pclk);
  if (VAR_7 != -VAR_1)
   FUNC_4(VAR_5, "failed to get peripheral clock\n");
  return VAR_7;
 }


 VAR_7 = FUNC_3(VAR_6->pclk);
 if (VAR_7) {
  FUNC_4(VAR_5, "failed to enable peripheral clock");
  return VAR_7;
 }


 VAR_7 = FUNC_8(VAR_5);
 if (VAR_7)
  goto err;

 VAR_7 = FUNC_9(VAR_5, VAR_5->of_node, VAR_3,
       &VAR_6->mux_handle, VAR_5, ((void*)0));
 if (VAR_7) {
  if (VAR_7 != -VAR_1)
   FUNC_4(VAR_5, "mdio multiplexer init failed: %d", VAR_7);
  goto err;
 }

 return 0;

err:
 FUNC_2(VAR_6->pclk);
 return VAR_7;
}
