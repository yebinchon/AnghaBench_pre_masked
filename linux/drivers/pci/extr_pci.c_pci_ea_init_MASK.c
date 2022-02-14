
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct pci_dev {scalar_t__ hdr_type; int devfn; int bus; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 (int ,int ,scalar_t__,int*) ;
 int FUNC_1 (struct pci_dev*,int) ;
 int FUNC_2 (struct pci_dev*,int ) ;

void FUNC_3(struct pci_dev *VAR_5)
{
 int VAR_6;
 u8 VAR_7;
 int VAR_8;
 int VAR_9;


 VAR_6 = FUNC_2(VAR_5, VAR_0);
 if (!VAR_6)
  return;


 FUNC_0(VAR_5->bus, VAR_5->devfn, VAR_6 + VAR_2,
     &VAR_7);
 VAR_7 &= VAR_3;

 VAR_8 = VAR_6 + VAR_1;


 if (VAR_5->hdr_type == VAR_4)
  VAR_8 += 4;


 for (VAR_9 = 0; VAR_9 < VAR_7; ++VAR_9)
  VAR_8 = FUNC_1(VAR_5, VAR_8);
}
