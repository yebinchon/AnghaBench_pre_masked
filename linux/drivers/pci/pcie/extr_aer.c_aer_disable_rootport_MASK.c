
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct pci_dev {int aer_cap; } ;
struct aer_rpc {struct pci_dev* rpd; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct pci_dev*,scalar_t__,int *) ;
 int FUNC_1 (struct pci_dev*,scalar_t__,int ) ;
 int FUNC_2 (struct pci_dev*,int) ;

__attribute__((used)) static void FUNC_3(struct aer_rpc *VAR_3)
{
 struct pci_dev *VAR_4 = VAR_3->rpd;
 u32 VAR_5;
 int VAR_6;





 FUNC_2(VAR_4, 0);

 VAR_6 = VAR_4->aer_cap;

 FUNC_0(VAR_4, VAR_6 + VAR_0, &VAR_5);
 VAR_5 &= ~VAR_2;
 FUNC_1(VAR_4, VAR_6 + VAR_0, VAR_5);


 FUNC_0(VAR_4, VAR_6 + VAR_1, &VAR_5);
 FUNC_1(VAR_4, VAR_6 + VAR_1, VAR_5);
}
