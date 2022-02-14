
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct seq_buf {int dummy; } ;
struct pci_dev {TYPE_1__* p2pdma; } ;
typedef enum pci_p2pdma_map_type { ____Placeholder_pci_p2pdma_map_type } pci_p2pdma_map_type ;
struct TYPE_2__ {int map_types; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct pci_dev*,struct pci_dev*,int*,int*,struct seq_buf*) ;
 int FUNC_1 (struct pci_dev*,struct pci_dev*) ;
 int FUNC_2 (struct pci_dev*) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int *,int ,int ,int ) ;

__attribute__((used)) static enum pci_p2pdma_map_type
FUNC_5(struct pci_dev *VAR_3, struct pci_dev *VAR_4,
  int *VAR_5, bool *VAR_6, struct seq_buf *VAR_7)
{
 enum pci_p2pdma_map_type VAR_8;

 VAR_8 = FUNC_0(VAR_3, VAR_4, VAR_5,
           VAR_6, VAR_7);

 if (VAR_8 == VAR_2) {
  if (!FUNC_1(VAR_3, VAR_4))
   VAR_8 = VAR_1;
 }

 if (VAR_3->p2pdma)
  FUNC_4(&VAR_3->p2pdma->map_types, FUNC_2(VAR_4),
    FUNC_3(VAR_8), VAR_0);

 return VAR_8;
}
