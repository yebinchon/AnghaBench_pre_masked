
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xhci_hcd_mtk {int uwk; int uwk_vers; int uwk_reg_base; int dev; int uwk_en; } ;
struct of_phandle_args {int np; int * args; } ;
struct device_node {int dummy; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ,char*,int ,int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct device_node*,char*,int,int ,struct of_phandle_args*) ;
 int FUNC_4 (struct device_node*,char*) ;
 int FUNC_5 (int ) ;

__attribute__((used)) static int FUNC_6(struct xhci_hcd_mtk *VAR_0,
    struct device_node *VAR_1)
{
 struct of_phandle_args VAR_2;
 int VAR_3;


 VAR_0->uwk_en = FUNC_4(VAR_1, "wakeup-source");
 if (!VAR_0->uwk_en)
  return 0;

 VAR_3 = FUNC_3(VAR_1,
    "mediatek,syscon-wakeup", 2, 0, &VAR_2);
 if (VAR_3)
  return VAR_3;

 VAR_0->uwk_reg_base = VAR_2.args[0];
 VAR_0->uwk_vers = VAR_2.args[1];
 VAR_0->uwk = FUNC_5(VAR_2.np);
 FUNC_2(VAR_2.np);
 FUNC_1(VAR_0->dev, "uwk - reg:0x%x, version:%d\n",
   VAR_0->uwk_reg_base, VAR_0->uwk_vers);

 return FUNC_0(VAR_0->uwk);

}
