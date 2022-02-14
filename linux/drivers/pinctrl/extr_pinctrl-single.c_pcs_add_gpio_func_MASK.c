
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pcs_gpiofunc_range {int node; int gpiofunc; int npins; int offset; } ;
struct pcs_device {int mutex; int gpiofuncs; int dev; } ;
struct of_phandle_args {int * args; } ;
struct device_node {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct pcs_gpiofunc_range* FUNC_0 (int ,int,int ) ;
 int FUNC_1 (int *,int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (struct device_node*,char const*,char const*,int,struct of_phandle_args*) ;

__attribute__((used)) static int FUNC_5(struct device_node *VAR_2, struct pcs_device *VAR_3)
{
 const char *VAR_4 = "pinctrl-single,gpio-range";
 const char *VAR_5 = "#pinctrl-single,gpio-range-cells";
 struct of_phandle_args VAR_6;
 struct pcs_gpiofunc_range *VAR_7;
 int VAR_8, VAR_9;

 for (VAR_9 = 0; ; VAR_9++) {
  VAR_8 = FUNC_4(VAR_2, VAR_4, VAR_5,
       VAR_9, &VAR_6);

  if (VAR_8) {
   VAR_8 = 0;
   break;
  }
  VAR_7 = FUNC_0(VAR_3->dev, sizeof(*VAR_7), VAR_1);
  if (!VAR_7) {
   VAR_8 = -VAR_0;
   break;
  }
  VAR_7->offset = VAR_6.args[0];
  VAR_7->npins = VAR_6.args[1];
  VAR_7->gpiofunc = VAR_6.args[2];
  FUNC_2(&VAR_3->mutex);
  FUNC_1(&VAR_7->node, &VAR_3->gpiofuncs);
  FUNC_3(&VAR_3->mutex);
 }
 return VAR_8;
}
