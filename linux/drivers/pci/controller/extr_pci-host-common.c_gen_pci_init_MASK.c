
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct resource {int dummy; } ;
struct pci_ecam_ops {int dummy; } ;
struct pci_config_window {int dummy; } ;
struct list_head {int dummy; } ;
struct device {int of_node; } ;


 struct pci_config_window* FUNC_0 (int) ;
 scalar_t__ FUNC_1 (struct pci_config_window*) ;
 int FUNC_2 (struct pci_config_window*) ;
 int FUNC_3 (struct device*,char*) ;
 int FUNC_4 (struct device*,int ,struct pci_config_window*) ;
 int VAR_0 ;
 int FUNC_5 (int ,int ,struct resource*) ;
 struct pci_config_window* FUNC_6 (struct device*,struct resource*,struct resource*,struct pci_ecam_ops*) ;
 int FUNC_7 (struct list_head*) ;
 int FUNC_8 (struct device*,struct list_head*,struct resource**) ;

__attribute__((used)) static struct pci_config_window *FUNC_9(struct device *VAR_1,
  struct list_head *VAR_2, struct pci_ecam_ops *VAR_3)
{
 int VAR_4;
 struct resource VAR_5;
 struct resource *VAR_6 = ((void*)0);
 struct pci_config_window *VAR_7;


 VAR_4 = FUNC_8(VAR_1, VAR_2, &VAR_6);
 if (VAR_4)
  return FUNC_0(VAR_4);

 VAR_4 = FUNC_5(VAR_1->of_node, 0, &VAR_5);
 if (VAR_4) {
  FUNC_3(VAR_1, "missing \"reg\" property\n");
  goto err_out;
 }

 VAR_7 = FUNC_6(VAR_1, &VAR_5, VAR_6, VAR_3);
 if (FUNC_1(VAR_7)) {
  VAR_4 = FUNC_2(VAR_7);
  goto err_out;
 }

 VAR_4 = FUNC_4(VAR_1, VAR_0, VAR_7);
 if (VAR_4) {
  goto err_out;
 }
 return VAR_7;

err_out:
 FUNC_7(VAR_2);
 return FUNC_0(VAR_4);
}
