
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
typedef int u32 ;
struct pci_dev {int dummy; } ;
struct device_node {int dummy; } ;
typedef int __be32 ;


 int VAR_0 ;
 int FUNC_0 (int const*) ;
 int FUNC_1 (struct device_node*,int ) ;
 int FUNC_2 (struct device_node*,int *) ;
 struct device_node* FUNC_3 (struct device_node*) ;
 int * FUNC_4 (struct device_node*,char*,int *) ;
 int FUNC_5 (struct device_node*) ;
 struct device_node* FUNC_6 (struct pci_dev*) ;
 int FUNC_7 (char*,...) ;

int FUNC_8(struct pci_dev *VAR_1, u64 *VAR_2,
        u32 *VAR_3, u64 *VAR_4)
{
 int VAR_5;
 struct device_node *VAR_6;
 const __be32 *VAR_7;

 if (!(VAR_6 = FUNC_6(VAR_1)))
  return -VAR_0;

 while (VAR_6 && !(VAR_7 = FUNC_4(VAR_6, "ibm,chip-id", ((void*)0))))
  VAR_6 = FUNC_3(VAR_6);
 if (!VAR_6)
  return -VAR_0;

 *VAR_2 = FUNC_0(VAR_7);

 VAR_5 = FUNC_2(VAR_6, VAR_3);
 if (VAR_5) {
  FUNC_7("cxl: invalid phb index\n");
  return VAR_5;
 }

 *VAR_4 = FUNC_1(VAR_6, *VAR_3);
 FUNC_5(VAR_6);
 if (!*VAR_4) {
  FUNC_7("cxl: invalid capp unit id (phb_index: %d)\n",
         *VAR_3);
  return -VAR_0;
 }

 return 0;
}
