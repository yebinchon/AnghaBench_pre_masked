
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pci_dev {scalar_t__ hdr_type; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (struct pci_dev*,int,int,int,int) ;

__attribute__((used)) static void FUNC_1(struct pci_dev *VAR_2)
{
 if (VAR_2->hdr_type == VAR_1) {
  FUNC_0(VAR_2, 10, 15, 0, 0);

  FUNC_0(VAR_2, 4, 9, 10, 0);
  FUNC_0(VAR_2, 0, 3, 0, 0);
 } else if (VAR_2->hdr_type == VAR_0) {
  FUNC_0(VAR_2, 12, 15, 0, 0);






  FUNC_0(VAR_2, 9, 11, 0, 1);
  FUNC_0(VAR_2, 0, 8, 0, 0);
 } else {
  FUNC_0(VAR_2, 0, 15, 0, 0);
 }
}
