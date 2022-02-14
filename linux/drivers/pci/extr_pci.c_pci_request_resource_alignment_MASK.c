
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct resource {int flags; scalar_t__ start; scalar_t__ end; } ;
struct pci_dev {struct resource* resource; } ;
typedef scalar_t__ resource_size_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct pci_dev*,char*,int,struct resource*,unsigned long long) ;
 scalar_t__ FUNC_1 (struct resource*) ;

__attribute__((used)) static void FUNC_2(struct pci_dev *VAR_5, int VAR_6,
        resource_size_t VAR_7, bool VAR_8)
{
 struct resource *VAR_9 = &VAR_5->resource[VAR_6];
 resource_size_t VAR_10;

 if (!(VAR_9->flags & VAR_0))
  return;

 if (VAR_9->flags & VAR_1) {
  FUNC_0(VAR_5, "BAR%d %pR: ignoring requested alignment %#llx\n",
    VAR_6, VAR_9, (unsigned long long)VAR_7);
  return;
 }

 VAR_10 = FUNC_1(VAR_9);
 if (VAR_10 >= VAR_7)
  return;
 FUNC_0(VAR_5, "BAR%d %pR: requesting alignment to %#llx\n",
   VAR_6, VAR_9, (unsigned long long)VAR_7);

 if (VAR_8) {
  VAR_9->start = 0;
  VAR_9->end = VAR_7 - 1;
 } else {
  VAR_9->flags &= ~VAR_2;
  VAR_9->flags |= VAR_3;
  VAR_9->start = VAR_7;
  VAR_9->end = VAR_9->start + VAR_10 - 1;
 }
 VAR_9->flags |= VAR_4;
}
