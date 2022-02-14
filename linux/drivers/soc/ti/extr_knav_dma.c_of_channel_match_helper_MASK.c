
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct of_phandle_args {scalar_t__* args; } ;
struct device_node {char* name; } ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 int FUNC_0 (int ,char*,...) ;
 TYPE_1__* VAR_1 ;
 struct device_node* FUNC_1 (struct device_node*,char*,int ) ;
 scalar_t__ FUNC_2 (struct device_node*,char*,int,int,struct of_phandle_args*) ;
 int FUNC_3 (struct device_node*,char*,char const*) ;

__attribute__((used)) static int FUNC_4(struct device_node *VAR_2, const char *VAR_3,
     const char **VAR_4)
{
 struct of_phandle_args VAR_5;
 struct device_node *VAR_6;
 int VAR_7;

 VAR_6 = FUNC_1(VAR_2, "ti,navigator-dmas", 0);
 if (!VAR_6)
  return -VAR_0;

 *VAR_4 = VAR_6->name;
 VAR_7 = FUNC_3(VAR_2, "ti,navigator-dma-names", VAR_3);
 if (VAR_7 < 0) {
  FUNC_0(VAR_1->dev, "No 'ti,navigator-dma-names' property\n");
  return -VAR_0;
 }

 if (FUNC_2(VAR_2, "ti,navigator-dmas",
     1, VAR_7, &VAR_5)) {
  FUNC_0(VAR_1->dev, "Missing the phandle args name %s\n", VAR_3);
  return -VAR_0;
 }

 if (VAR_5.args[0] < 0) {
  FUNC_0(VAR_1->dev, "Missing args for %s\n", VAR_3);
  return -VAR_0;
 }

 return VAR_5.args[0];
}
