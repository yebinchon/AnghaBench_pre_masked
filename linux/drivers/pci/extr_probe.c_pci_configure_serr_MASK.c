
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct pci_dev {scalar_t__ hdr_type; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (struct pci_dev*,int ,int*) ;
 int FUNC_1 (struct pci_dev*,int ,int) ;

__attribute__((used)) static void FUNC_2(struct pci_dev *VAR_3)
{
 u16 VAR_4;

 if (VAR_3->hdr_type == VAR_2) {





  FUNC_0(VAR_3, VAR_0, &VAR_4);
  if (!(VAR_4 & VAR_1)) {
   VAR_4 |= VAR_1;
   FUNC_1(VAR_3, VAR_0, VAR_4);
  }
 }
}
