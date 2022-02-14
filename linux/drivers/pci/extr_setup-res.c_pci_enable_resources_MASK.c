
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct resource {int flags; int parent; } ;
struct pci_dev {struct resource* resource; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_0 (struct pci_dev*,char*,int,struct resource*) ;
 int FUNC_1 (struct pci_dev*,char*,int ,int ) ;
 int FUNC_2 (struct pci_dev*,int ,int *) ;
 int FUNC_3 (struct pci_dev*,int ,int ) ;

int FUNC_4(struct pci_dev *VAR_10, int VAR_11)
{
 u16 VAR_12, VAR_13;
 int VAR_14;
 struct resource *VAR_15;

 FUNC_2(VAR_10, VAR_5, &VAR_12);
 VAR_13 = VAR_12;

 for (VAR_14 = 0; VAR_14 < VAR_8; VAR_14++) {
  if (!(VAR_11 & (1 << VAR_14)))
   continue;

  VAR_15 = &VAR_10->resource[VAR_14];

  if (!(VAR_15->flags & (VAR_1 | VAR_2)))
   continue;
  if ((VAR_14 == VAR_9) &&
    (!(VAR_15->flags & VAR_3)))
   continue;

  if (VAR_15->flags & VAR_4) {
   FUNC_0(VAR_10, "can't enable device: BAR %d %pR not assigned\n",
    VAR_14, VAR_15);
   return -VAR_0;
  }

  if (!VAR_15->parent) {
   FUNC_0(VAR_10, "can't enable device: BAR %d %pR not claimed\n",
    VAR_14, VAR_15);
   return -VAR_0;
  }

  if (VAR_15->flags & VAR_1)
   VAR_12 |= VAR_6;
  if (VAR_15->flags & VAR_2)
   VAR_12 |= VAR_7;
 }

 if (VAR_12 != VAR_13) {
  FUNC_1(VAR_10, "enabling device (%04x -> %04x)\n", VAR_13, VAR_12);
  FUNC_3(VAR_10, VAR_5, VAR_12);
 }
 return 0;
}
