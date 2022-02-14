
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct pci_dev {int dummy; } ;
struct et131x_adapter {struct pci_dev* pdev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct pci_dev*,int*) ;
 scalar_t__ FUNC_1 (struct pci_dev*,int ,int ) ;
 scalar_t__ FUNC_2 (struct pci_dev*,int ,int) ;

__attribute__((used)) static int FUNC_3(struct et131x_adapter *VAR_5, u32 VAR_6, u8 *VAR_7)
{
 struct pci_dev *VAR_8 = VAR_5->pdev;
 int VAR_9;
 u32 VAR_10;




 VAR_9 = FUNC_0(VAR_8, ((void*)0));
 if (VAR_9 < 0)
  return VAR_9;





 if (FUNC_1(VAR_8, VAR_3,
      VAR_2))
  return -VAR_0;



 if (FUNC_2(VAR_8, VAR_1, VAR_6))
  return -VAR_0;




 VAR_9 = FUNC_0(VAR_8, &VAR_10);
 if (VAR_9 < 0)
  return VAR_9;



 *VAR_7 = VAR_9;

 return (VAR_10 & VAR_4) ? -VAR_0 : 0;
}
