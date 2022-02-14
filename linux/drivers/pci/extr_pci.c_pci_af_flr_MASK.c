
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct pci_dev {int dev_flags; scalar_t__ imm_ready; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_0 (int) ;
 int FUNC_1 (struct pci_dev*,char*,int ) ;
 int FUNC_2 (struct pci_dev*,char*) ;
 int FUNC_3 (struct pci_dev*,int ) ;
 int FUNC_4 (struct pci_dev*,scalar_t__,int*) ;
 int FUNC_5 (struct pci_dev*,scalar_t__,int) ;
 int FUNC_6 (struct pci_dev*,scalar_t__,int ) ;

__attribute__((used)) static int FUNC_7(struct pci_dev *VAR_10, int VAR_11)
{
 int VAR_12;
 u8 VAR_13;

 VAR_12 = FUNC_3(VAR_10, VAR_8);
 if (!VAR_12)
  return -VAR_0;

 if (VAR_10->dev_flags & VAR_9)
  return -VAR_0;

 FUNC_4(VAR_10, VAR_12 + VAR_2, &VAR_13);
 if (!(VAR_13 & VAR_4) || !(VAR_13 & VAR_3))
  return -VAR_0;

 if (VAR_11)
  return 0;






 if (!FUNC_5(VAR_10, VAR_12 + VAR_5,
     VAR_7 << 8))
  FUNC_2(VAR_10, "timed out waiting for pending transaction; performing AF function level reset anyway\n");

 FUNC_6(VAR_10, VAR_12 + VAR_5, VAR_6);

 if (VAR_10->imm_ready)
  return 0;







 FUNC_0(100);

 return FUNC_1(VAR_10, "AF_FLR", VAR_1);
}
