
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct resource {int flags; scalar_t__ start; scalar_t__ end; } ;
struct pci_dev {scalar_t__ hdr_type; int class; struct resource* resource; scalar_t__ is_virtfn; } ;
typedef int resource_size_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_0 (struct pci_dev*) ;
 int FUNC_1 (struct pci_dev*,int ,int *) ;
 int FUNC_2 (struct pci_dev*,int,int ,int) ;
 int FUNC_3 (struct pci_dev*,int*) ;
 int FUNC_4 (struct pci_dev*,char*) ;
 int FUNC_5 (struct pci_dev*,int ,int ) ;
 scalar_t__ FUNC_6 (struct resource*) ;

void FUNC_7(struct pci_dev *VAR_10)
{
 int VAR_11;
 struct resource *VAR_12;
 resource_size_t VAR_13;
 u16 VAR_14;
 bool VAR_15 = 0;







 if (VAR_10->is_virtfn)
  return;


 VAR_13 = FUNC_3(VAR_10, &VAR_15);
 if (!VAR_13)
  return;

 if (VAR_10->hdr_type == VAR_7 &&
     (VAR_10->class >> 8) == VAR_3) {
  FUNC_4(VAR_10, "Can't reassign resources to host bridge\n");
  return;
 }

 FUNC_1(VAR_10, VAR_4, &VAR_14);
 VAR_14 &= ~VAR_5;
 FUNC_5(VAR_10, VAR_4, VAR_14);

 for (VAR_11 = 0; VAR_11 <= VAR_9; VAR_11++)
  FUNC_2(VAR_10, VAR_11, VAR_13, VAR_15);






 if (VAR_10->hdr_type == VAR_6) {
  for (VAR_11 = VAR_2; VAR_11 < VAR_8; VAR_11++) {
   VAR_12 = &VAR_10->resource[VAR_11];
   if (!(VAR_12->flags & VAR_0))
    continue;
   VAR_12->flags |= VAR_1;
   VAR_12->end = FUNC_6(VAR_12) - 1;
   VAR_12->start = 0;
  }
  FUNC_0(VAR_10);
 }
}
