
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct platform_device {int dev; } ;
struct mtk_mdp_comp {int id; scalar_t__ type; int * larb_dev; int * clk; int regs; int dev_node; } ;
struct device_node {int dummy; } ;
struct device {int dummy; } ;
typedef enum mtk_mdp_comp_id { ____Placeholder_mtk_mdp_comp_id } mtk_mdp_comp_id ;
struct TYPE_2__ {scalar_t__ type; } ;


 int FUNC_0 (int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_1 (struct device*,char*,int) ;
 int FUNC_2 (struct device*,char*,struct device_node*) ;
 TYPE_1__* VAR_6 ;
 int FUNC_3 (struct device_node*,int) ;
 struct platform_device* FUNC_4 (struct device_node*) ;
 int FUNC_5 (struct device_node*,int ) ;
 int FUNC_6 (struct device_node*) ;
 int FUNC_7 (struct device_node*) ;
 struct device_node* FUNC_8 (struct device_node*,char*,int ) ;

int FUNC_9(struct device *VAR_7, struct device_node *VAR_8,
        struct mtk_mdp_comp *VAR_9, enum mtk_mdp_comp_id VAR_10)
{
 struct device_node *VAR_11;
 struct platform_device *VAR_12;
 int VAR_13;

 if (VAR_10 < 0 || VAR_10 >= VAR_2) {
  FUNC_1(VAR_7, "Invalid comp_id %d\n", VAR_10);
  return -VAR_0;
 }

 VAR_9->dev_node = FUNC_6(VAR_8);
 VAR_9->id = VAR_10;
 VAR_9->type = VAR_6[VAR_10].type;
 VAR_9->regs = FUNC_5(VAR_8, 0);

 for (VAR_13 = 0; VAR_13 < FUNC_0(VAR_9->clk); VAR_13++) {
  VAR_9->clk[VAR_13] = FUNC_3(VAR_8, VAR_13);


  if (VAR_9->type != VAR_3)
   break;
 }


 VAR_9->larb_dev = ((void*)0);
 if (VAR_9->type != VAR_3 &&
     VAR_9->type != VAR_4 &&
     VAR_9->type != VAR_5)
  return 0;

 VAR_11 = FUNC_8(VAR_8, "mediatek,larb", 0);
 if (!VAR_11) {
  FUNC_1(VAR_7,
   "Missing mediadek,larb phandle in %pOF node\n", VAR_8);
  return -VAR_0;
 }

 VAR_12 = FUNC_4(VAR_11);
 if (!VAR_12) {
  FUNC_2(VAR_7, "Waiting for larb device %pOF\n", VAR_11);
  FUNC_7(VAR_11);
  return -VAR_1;
 }
 FUNC_7(VAR_11);

 VAR_9->larb_dev = &VAR_12->dev;

 return 0;
}
