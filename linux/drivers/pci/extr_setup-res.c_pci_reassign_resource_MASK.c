
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct resource {int flags; int parent; } ;
struct pci_dev {struct resource* resource; } ;
typedef scalar_t__ resource_size_t ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned long VAR_2 ;
 unsigned long VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct pci_dev*,int,scalar_t__,scalar_t__) ;
 int FUNC_1 (struct pci_dev*,char*,int,struct resource*,...) ;
 int FUNC_2 (struct pci_dev*,int) ;
 scalar_t__ FUNC_3 (struct resource*) ;

int FUNC_4(struct pci_dev *VAR_5, int VAR_6, resource_size_t VAR_7,
   resource_size_t VAR_8)
{
 struct resource *VAR_9 = VAR_5->resource + VAR_6;
 unsigned long VAR_10;
 resource_size_t VAR_11;
 int VAR_12;

 if (VAR_9->flags & VAR_1)
  return 0;

 VAR_10 = VAR_9->flags;
 VAR_9->flags |= VAR_3;
 if (!VAR_9->parent) {
  FUNC_1(VAR_5, "BAR %d: can't reassign an unassigned resource %pR\n",
    VAR_6, VAR_9);
  return -VAR_0;
 }


 VAR_11 = FUNC_3(VAR_9) + VAR_7;
 VAR_12 = FUNC_0(VAR_5, VAR_6, VAR_11, VAR_8);
 if (VAR_12) {
  VAR_9->flags = VAR_10;
  FUNC_1(VAR_5, "BAR %d: %pR (failed to expand by %#llx)\n",
    VAR_6, VAR_9, (unsigned long long) VAR_7);
  return VAR_12;
 }

 VAR_9->flags &= ~VAR_3;
 VAR_9->flags &= ~VAR_2;
 FUNC_1(VAR_5, "BAR %d: reassigned %pR (expanded by %#llx)\n",
   VAR_6, VAR_9, (unsigned long long) VAR_7);
 if (VAR_6 < VAR_4)
  FUNC_2(VAR_5, VAR_6);

 return 0;
}
