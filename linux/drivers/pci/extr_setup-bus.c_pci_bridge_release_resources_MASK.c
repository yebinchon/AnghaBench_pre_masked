
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct resource {unsigned long flags; scalar_t__ start; scalar_t__ end; int parent; } ;
struct pci_dev {struct resource* resource; } ;
struct pci_bus {struct pci_dev* self; } ;


 unsigned long VAR_0 ;
 unsigned long VAR_1 ;
 unsigned long VAR_2 ;
 size_t VAR_3 ;
 unsigned int VAR_4 ;
 int FUNC_0 (struct pci_bus*,unsigned long) ;
 int FUNC_1 (struct pci_dev*,char*,size_t,struct resource*) ;
 int FUNC_2 (struct resource*) ;
 int FUNC_3 (struct resource*) ;
 scalar_t__ FUNC_4 (struct resource*) ;

__attribute__((used)) static void FUNC_5(struct pci_bus *VAR_5,
      unsigned long VAR_6)
{
 struct pci_dev *VAR_7 = VAR_5->self;
 struct resource *VAR_8;
 unsigned VAR_9 = 0;
 struct resource *VAR_10;
 int VAR_11 = 1;

 VAR_10 = &VAR_7->resource[VAR_3];
 if (VAR_6 & VAR_0)
  VAR_11 = 0;
 else if (!(VAR_6 & VAR_2))
  VAR_11 = 1;
 else if ((VAR_6 & VAR_1) &&
   (VAR_10[2].flags & VAR_1))
  VAR_11 = 2;
 else if (!(VAR_10[2].flags & VAR_1) &&
   (VAR_10[2].flags & VAR_2))
  VAR_11 = 2;
 else
  VAR_11 = 1;

 VAR_8 = &VAR_10[VAR_11];

 if (!VAR_8->parent)
  return;


 FUNC_2(VAR_8);
 if (!FUNC_3(VAR_8)) {
  VAR_6 = VAR_9 = VAR_8->flags & VAR_4;
  FUNC_1(VAR_7, "resource %d %pR released\n",
    VAR_3 + VAR_11, VAR_8);

  VAR_8->end = FUNC_4(VAR_8) - 1;
  VAR_8->start = 0;
  VAR_8->flags = 0;


  if (VAR_6 & VAR_2)
   VAR_6 = VAR_2;
  FUNC_0(VAR_5, VAR_6);

  VAR_8->flags = VAR_9;
 }
}
