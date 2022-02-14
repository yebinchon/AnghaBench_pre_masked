
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct skge_element {int dummy; } ;
struct pci_dev {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct skge_element*,int ) ;
 int FUNC_1 (struct skge_element*,int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (struct pci_dev*,int ,int ,int ) ;
 int FUNC_3 (struct pci_dev*,int ,int ,int ) ;

__attribute__((used)) static inline void FUNC_4(struct pci_dev *VAR_4, struct skge_element *VAR_5,
     u32 VAR_6)
{

 if (VAR_6 & VAR_0)
  FUNC_3(VAR_4, FUNC_0(VAR_5, VAR_2),
     FUNC_1(VAR_5, VAR_3),
     VAR_1);
 else
  FUNC_2(VAR_4, FUNC_0(VAR_5, VAR_2),
          FUNC_1(VAR_5, VAR_3),
          VAR_1);
}
