
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
typedef int u16 ;
struct pci_host_bridge {scalar_t__ no_ext_tags; } ;
struct pci_dev {int bus; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct pci_host_bridge* FUNC_0 (int ) ;
 int FUNC_1 (struct pci_dev*,char*) ;
 int FUNC_2 (struct pci_dev*) ;
 int FUNC_3 (struct pci_dev*,int ,int) ;
 int FUNC_4 (struct pci_dev*,int ,int*) ;
 int FUNC_5 (struct pci_dev*,int ,int*) ;
 int FUNC_6 (struct pci_dev*,int ,int) ;

int FUNC_7(struct pci_dev *VAR_4, void *VAR_5)
{
 struct pci_host_bridge *VAR_6;
 u32 VAR_7;
 u16 VAR_8;
 int VAR_9;

 if (!FUNC_2(VAR_4))
  return 0;

 VAR_9 = FUNC_4(VAR_4, VAR_0, &VAR_7);
 if (VAR_9)
  return 0;

 if (!(VAR_7 & VAR_1))
  return 0;

 VAR_9 = FUNC_5(VAR_4, VAR_2, &VAR_8);
 if (VAR_9)
  return 0;

 VAR_6 = FUNC_0(VAR_4->bus);
 if (!VAR_6)
  return 0;





 if (VAR_6->no_ext_tags) {
  if (VAR_8 & VAR_3) {
   FUNC_1(VAR_4, "disabling Extended Tags\n");
   FUNC_3(VAR_4, VAR_2,
         VAR_3);
  }
  return 0;
 }

 if (!(VAR_8 & VAR_3)) {
  FUNC_1(VAR_4, "enabling Extended Tags\n");
  FUNC_6(VAR_4, VAR_2,
      VAR_3);
 }
 return 0;
}
