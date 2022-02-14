
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct of_phandle_args {int np; } ;
struct device_node {int dummy; } ;


 struct device_node* FUNC_0 (struct device_node const*) ;
 struct device_node* FUNC_1 (int ) ;
 int FUNC_2 (struct device_node const*,char*,char*,int,struct of_phandle_args*) ;
 int FUNC_3 (struct device_node const*,char*,char*) ;

__attribute__((used)) static struct device_node *FUNC_4(const struct device_node *VAR_0)
{
 struct of_phandle_args VAR_1;
 int VAR_2, VAR_3;

 VAR_3 = FUNC_3(VAR_0, "interconnect-names", "dma-mem");
 if (VAR_3 < 0)
  return FUNC_0(VAR_0);

 VAR_2 = FUNC_2(VAR_0, "interconnects",
      "#interconnect-cells",
      VAR_3, &VAR_1);
 if (VAR_2 < 0)
  return FUNC_0(VAR_0);

 return FUNC_1(VAR_1.np);
}
