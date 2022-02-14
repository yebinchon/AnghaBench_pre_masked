
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct seq_buf {int dummy; } ;
struct pci_dev {int dummy; } ;
typedef enum pci_p2pdma_map_type { ____Placeholder_pci_p2pdma_map_type } pci_p2pdma_map_type ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (struct pci_dev*) ;
 struct pci_dev* FUNC_1 (struct pci_dev*) ;
 int FUNC_2 (struct seq_buf*,struct pci_dev*) ;

__attribute__((used)) static enum pci_p2pdma_map_type
FUNC_3(struct pci_dev *VAR_2, struct pci_dev *VAR_3,
  int *VAR_4, bool *VAR_5, struct seq_buf *VAR_6)
{
 struct pci_dev *VAR_7 = VAR_2, *VAR_8 = VAR_3, *VAR_9;
 int VAR_10 = 0;
 int VAR_11 = 0;
 int VAR_12 = 0;

 if (VAR_5)
  *VAR_5 = 0;







 while (VAR_7) {
  VAR_11 = 0;

  if (FUNC_0(VAR_7)) {
   FUNC_2(VAR_6, VAR_7);
   VAR_12++;
  }

  VAR_9 = VAR_8;

  while (VAR_9) {
   if (VAR_7 == VAR_9)
    goto check_b_path_acs;

   VAR_9 = FUNC_1(VAR_9);
   VAR_11++;
  }

  VAR_7 = FUNC_1(VAR_7);
  VAR_10++;
 }

 if (VAR_4)
  *VAR_4 = VAR_10 + VAR_11;

 return VAR_1;

check_b_path_acs:
 VAR_9 = VAR_8;

 while (VAR_9) {
  if (VAR_7 == VAR_9)
   break;

  if (FUNC_0(VAR_9)) {
   FUNC_2(VAR_6, VAR_9);
   VAR_12++;
  }

  VAR_9 = FUNC_1(VAR_9);
 }

 if (VAR_4)
  *VAR_4 = VAR_10 + VAR_11;

 if (VAR_12) {
  if (VAR_5)
   *VAR_5 = 1;

  return VAR_1;
 }

 return VAR_0;
}
