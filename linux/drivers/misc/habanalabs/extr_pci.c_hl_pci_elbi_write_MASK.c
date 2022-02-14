
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u64 ;
typedef int u32 ;
struct pci_dev {int dummy; } ;
struct hl_device {int dev; scalar_t__ pldm; struct pci_dev* pdev; } ;
typedef int ktime_t ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (int ,scalar_t__) ;
 scalar_t__ FUNC_2 (int ,int ) ;
 int FUNC_3 () ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_4 (struct pci_dev*,int ,int*) ;
 int FUNC_5 (struct pci_dev*,int ,int) ;
 int FUNC_6 (int,int) ;

__attribute__((used)) static int FUNC_7(struct hl_device *VAR_11, u64 VAR_12, u32 VAR_13)
{
 struct pci_dev *VAR_14 = VAR_11->pdev;
 ktime_t VAR_15;
 u64 VAR_16;
 u32 VAR_17;

 if (VAR_11->pldm)
  VAR_16 = VAR_2;
 else
  VAR_16 = VAR_1;


 FUNC_5(VAR_14, VAR_10, 0);

 FUNC_5(VAR_14, VAR_7, (u32) VAR_12);
 FUNC_5(VAR_14, VAR_9, VAR_13);
 FUNC_5(VAR_14, VAR_8,
    VAR_3);

 VAR_15 = FUNC_1(FUNC_3(), VAR_16);
 for (;;) {
  FUNC_4(VAR_14, VAR_10, &VAR_17);
  if (VAR_17 & VAR_6)
   break;
  if (FUNC_2(FUNC_3(), VAR_15) > 0) {
   FUNC_4(VAR_14, VAR_10,
      &VAR_17);
   break;
  }

  FUNC_6(300, 500);
 }

 if ((VAR_17 & VAR_6) == VAR_4)
  return 0;

 if (VAR_17 & VAR_5) {
  FUNC_0(VAR_11->dev, "Error writing to ELBI\n");
  return -VAR_0;
 }

 if (!(VAR_17 & VAR_6)) {
  FUNC_0(VAR_11->dev, "ELBI write didn't finish in time\n");
  return -VAR_0;
 }

 FUNC_0(VAR_11->dev, "ELBI write has undefined bits in status\n");
 return -VAR_0;
}
