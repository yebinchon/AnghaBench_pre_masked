
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pciserial_board {int flags; int num_ports; } ;
struct pci_dev {int class; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct pci_dev*,int) ;
 int FUNC_1 (struct pci_dev*,int) ;
 int FUNC_2 (struct pci_dev*) ;

__attribute__((used)) static int
FUNC_3(struct pci_dev *VAR_6, struct pciserial_board *VAR_7)
{
 int VAR_8, VAR_9, VAR_10 = -1, VAR_11;
 int VAR_12;

 VAR_12 = FUNC_2(VAR_6);
 if (VAR_12)
  return VAR_12;




 if ((VAR_6->class >> 8) == VAR_4)
  return -VAR_0;

 VAR_8 = VAR_9 = 0;
 for (VAR_11 = 0; VAR_11 < VAR_5; VAR_11++) {
  if (FUNC_0(VAR_6, VAR_11) & VAR_2) {
   VAR_9++;
   if (VAR_10 == -1)
    VAR_10 = VAR_11;
  }
  if (FUNC_0(VAR_6, VAR_11) & VAR_3)
   VAR_8++;
 }






 if (VAR_8 <= 1 && VAR_9 == 1) {
  VAR_7->flags = VAR_10;
  VAR_7->num_ports = FUNC_1(VAR_6, VAR_10) / 8;
  return 0;
 }






 VAR_10 = -1;
 VAR_9 = 0;
 for (VAR_11 = 0; VAR_11 < VAR_5; VAR_11++) {
  if (FUNC_0(VAR_6, VAR_11) & VAR_2 &&
      FUNC_1(VAR_6, VAR_11) == 8 &&
      (VAR_10 == -1 || (VAR_10 + VAR_9) == VAR_11)) {
   VAR_9++;
   if (VAR_10 == -1)
    VAR_10 = VAR_11;
  }
 }

 if (VAR_9 > 1) {
  VAR_7->flags = VAR_10 | VAR_1;
  VAR_7->num_ports = VAR_9;
  return 0;
 }

 return -VAR_0;
}
