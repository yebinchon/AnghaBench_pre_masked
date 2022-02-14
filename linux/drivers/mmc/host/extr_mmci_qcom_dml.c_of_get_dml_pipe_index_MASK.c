
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct of_phandle_args {int* args; scalar_t__ args_count; } ;
struct device_node {int dummy; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct device_node*,char*,char*,int,struct of_phandle_args*) ;
 int FUNC_1 (struct device_node*,char*,char const*) ;

__attribute__((used)) static int FUNC_2(struct device_node *VAR_1, const char *VAR_2)
{
 int VAR_3;
 struct of_phandle_args VAR_4;

 VAR_3 = FUNC_1(VAR_1, "dma-names", VAR_2);

 if (VAR_3 < 0)
  return -VAR_0;

 if (FUNC_0(VAR_1, "dmas", "#dma-cells", VAR_3,
           &VAR_4))
  return -VAR_0;

 if (VAR_4.args_count)
  return VAR_4.args[0];

 return -VAR_0;
}
