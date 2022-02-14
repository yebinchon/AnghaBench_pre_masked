
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pci_p2pdma_whitelist_entry {short vendor; unsigned short device; int flags; } ;
struct pci_host_bridge {int bus; } ;
struct pci_dev {unsigned short vendor; unsigned short device; } ;


 int FUNC_0 (int ,int ) ;
 int VAR_0 ;
 int FUNC_1 (struct pci_dev*) ;
 struct pci_dev* FUNC_2 (int ,int ) ;
 struct pci_p2pdma_whitelist_entry* VAR_1 ;

__attribute__((used)) static bool FUNC_3(struct pci_host_bridge *VAR_2,
        bool VAR_3)
{
 struct pci_dev *VAR_4 = FUNC_2(VAR_2->bus, FUNC_0(0, 0));
 const struct pci_p2pdma_whitelist_entry *VAR_5;
 unsigned short VAR_6, VAR_7;

 if (!VAR_4)
  return 0;

 VAR_6 = VAR_4->vendor;
 VAR_7 = VAR_4->device;
 FUNC_1(VAR_4);

 for (VAR_5 = VAR_1; VAR_5->vendor; VAR_5++) {
  if (VAR_6 != VAR_5->vendor || VAR_7 != VAR_5->device)
   continue;
  if (VAR_5->flags & VAR_0 && !VAR_3)
   return 0;

  return 1;
 }

 return 0;
}
