
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
typedef int u16 ;
struct pci_dev {int aer_cap; } ;
struct aer_rpc {struct pci_dev* rpd; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (struct pci_dev*,scalar_t__,int *) ;
 int FUNC_1 (struct pci_dev*,scalar_t__,int ) ;
 int FUNC_2 (struct pci_dev*,int ,int ) ;
 int FUNC_3 (struct pci_dev*,int ,int *) ;
 int FUNC_4 (struct pci_dev*,int ,int ) ;
 int FUNC_5 (struct pci_dev*,int) ;

__attribute__((used)) static void FUNC_6(struct aer_rpc *VAR_8)
{
 struct pci_dev *VAR_9 = VAR_8->rpd;
 int VAR_10;
 u16 VAR_11;
 u32 VAR_12;


 FUNC_3(VAR_9, VAR_4, &VAR_11);
 FUNC_4(VAR_9, VAR_4, VAR_11);


 FUNC_2(VAR_9, VAR_5,
       VAR_7);

 VAR_10 = VAR_9->aer_cap;

 FUNC_0(VAR_9, VAR_10 + VAR_2, &VAR_12);
 FUNC_1(VAR_9, VAR_10 + VAR_2, VAR_12);
 FUNC_0(VAR_9, VAR_10 + VAR_0, &VAR_12);
 FUNC_1(VAR_9, VAR_10 + VAR_0, VAR_12);
 FUNC_0(VAR_9, VAR_10 + VAR_3, &VAR_12);
 FUNC_1(VAR_9, VAR_10 + VAR_3, VAR_12);





 FUNC_5(VAR_9, 1);


 FUNC_0(VAR_9, VAR_10 + VAR_1, &VAR_12);
 VAR_12 |= VAR_6;
 FUNC_1(VAR_9, VAR_10 + VAR_1, VAR_12);
}
