
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct of_phandle_args {int args_count; int * args; struct device_node* np; } ;
struct device_node {int dummy; } ;
typedef int __be32 ;


 int VAR_0 ;
 int VAR_1 ;
 int * FUNC_0 (struct device_node*,char*,int *) ;
 struct device_node* FUNC_1 (struct device_node*) ;
 int FUNC_2 (struct device_node*,int,struct of_phandle_args*) ;
 int FUNC_3 (int const*,struct of_phandle_args*) ;
 int VAR_2 ;
 int FUNC_4 (struct device_node*) ;
 int FUNC_5 (struct device_node*,char*,char*,int,struct of_phandle_args*) ;
 scalar_t__ FUNC_6 (struct device_node*,char*,int*) ;
 int FUNC_7 (struct device_node*,char*,int,int *) ;
 int FUNC_8 (char*,int ,...) ;

int FUNC_9(struct device_node *VAR_3, int VAR_4, struct of_phandle_args *VAR_5)
{
 struct device_node *VAR_6;
 const __be32 *VAR_7;
 u32 VAR_8;
 int VAR_9, VAR_10;

 FUNC_8("of_irq_parse_one: dev=%pOF, index=%d\n", VAR_3, VAR_4);


 if (VAR_2 & VAR_1)
  return FUNC_2(VAR_3, VAR_4, VAR_5);


 VAR_7 = FUNC_0(VAR_3, "reg", ((void*)0));


 VAR_10 = FUNC_5(VAR_3, "interrupts-extended",
     "#interrupt-cells", VAR_4, VAR_5);
 if (!VAR_10)
  return FUNC_3(VAR_7, VAR_5);


 VAR_6 = FUNC_1(VAR_3);
 if (VAR_6 == ((void*)0))
  return -VAR_0;


 if (FUNC_6(VAR_6, "#interrupt-cells", &VAR_8)) {
  VAR_10 = -VAR_0;
  goto out;
 }

 FUNC_8(" parent=%pOF, intsize=%d\n", VAR_6, VAR_8);


 VAR_5->np = VAR_6;
 VAR_5->args_count = VAR_8;
 for (VAR_9 = 0; VAR_9 < VAR_8; VAR_9++) {
  VAR_10 = FUNC_7(VAR_3, "interrupts",
       (VAR_4 * VAR_8) + VAR_9,
       VAR_5->args + VAR_9);
  if (VAR_10)
   goto out;
 }

 FUNC_8(" intspec=%d\n", *VAR_5->args);



 VAR_10 = FUNC_3(VAR_7, VAR_5);
 out:
 FUNC_4(VAR_6);
 return VAR_10;
}
