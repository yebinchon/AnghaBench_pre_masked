
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct of_phandle_args {int args_count; unsigned int* args; int np; } ;
struct mux_control {int dummy; } ;
struct mux_chip {int controllers; struct mux_control* mux; int dev; } ;
struct device_node {int dummy; } ;
struct device {struct device_node* of_node; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct mux_control* FUNC_0 (int) ;
 int FUNC_1 (struct device*,char*,char const*,...) ;
 struct mux_chip* FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (struct device_node*,char*,char*,int,struct of_phandle_args*) ;
 int FUNC_5 (struct device_node*,char*,char const*) ;
 int FUNC_6 (int *) ;

struct mux_control *FUNC_7(struct device *VAR_2, const char *VAR_3)
{
 struct device_node *VAR_4 = VAR_2->of_node;
 struct of_phandle_args VAR_5;
 struct mux_chip *VAR_6;
 unsigned int VAR_7;
 int VAR_8 = 0;
 int VAR_9;

 if (VAR_3) {
  VAR_8 = FUNC_5(VAR_4, "mux-control-names",
       VAR_3);
  if (VAR_8 < 0) {
   FUNC_1(VAR_2, "mux controller '%s' not found\n",
    VAR_3);
   return FUNC_0(VAR_8);
  }
 }

 VAR_9 = FUNC_4(VAR_4,
      "mux-controls", "#mux-control-cells",
      VAR_8, &VAR_5);
 if (VAR_9) {
  FUNC_1(VAR_2, "%pOF: failed to get mux-control %s(%i)\n",
   VAR_4, VAR_3 ?: "", VAR_8);
  return FUNC_0(VAR_9);
 }

 VAR_6 = FUNC_2(VAR_5.np);
 FUNC_3(VAR_5.np);
 if (!VAR_6)
  return FUNC_0(-VAR_1);

 if (VAR_5.args_count > 1 ||
     (!VAR_5.args_count && (VAR_6->controllers > 1))) {
  FUNC_1(VAR_2, "%pOF: wrong #mux-control-cells for %pOF\n",
   VAR_4, VAR_5.np);
  FUNC_6(&VAR_6->dev);
  return FUNC_0(-VAR_0);
 }

 VAR_7 = 0;
 if (VAR_5.args_count)
  VAR_7 = VAR_5.args[0];

 if (VAR_7 >= VAR_6->controllers) {
  FUNC_1(VAR_2, "%pOF: bad mux controller %u specified in %pOF\n",
   VAR_4, VAR_7, VAR_5.np);
  FUNC_6(&VAR_6->dev);
  return FUNC_0(-VAR_0);
 }

 return &VAR_6->mux[VAR_7];
}
