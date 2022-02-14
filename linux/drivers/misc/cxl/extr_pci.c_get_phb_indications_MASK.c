
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct pci_dev {int dummy; } ;
struct device_node {int dummy; } ;
typedef int __be32 ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int const) ;
 int VAR_1 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int * FUNC_3 (struct device_node*,char*,int *) ;
 int FUNC_4 (struct device_node*) ;
 struct device_node* FUNC_5 (struct pci_dev*) ;

__attribute__((used)) static int FUNC_6(struct pci_dev *VAR_2, u64 *VAR_3, u64 *VAR_4,
          u64 *VAR_5)
{
 static u64 VAR_6, VAR_7, VAR_8 = 0;
 struct device_node *VAR_9;
 const __be32 *VAR_10;

 FUNC_1(&VAR_1);
 if (!VAR_8) {
  if (!(VAR_9 = FUNC_5(VAR_2))) {
   FUNC_2(&VAR_1);
   return -VAR_0;
  }

  VAR_10 = FUNC_3(VAR_9, "ibm,phb-indications", ((void*)0));
  if (!VAR_10) {
   VAR_6 = 0x0300UL;
   VAR_7 = 0x0400UL;
   VAR_8 = 0x0200UL;
  } else {
   VAR_6 = (u64)FUNC_0(VAR_10[2]);
   VAR_7 = (u64)FUNC_0(VAR_10[1]);
   VAR_8 = (u64)FUNC_0(VAR_10[0]);
  }
  FUNC_4(VAR_9);
 }
 *VAR_3 = VAR_8;
 *VAR_4 = VAR_7;
 *VAR_5 = VAR_6;
 FUNC_2(&VAR_1);
 return 0;
}
