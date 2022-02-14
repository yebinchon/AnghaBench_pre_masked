
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct pci_dev {int dummy; } ;
struct ath5k_hw {scalar_t__ ah_version; struct pci_dev* pdev; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (struct ath5k_hw*,char*) ;
 scalar_t__ VAR_8 ;
 int VAR_9 ;
 scalar_t__ FUNC_1 (struct ath5k_hw*) ;
 int FUNC_2 (struct ath5k_hw*,int) ;
 int FUNC_3 (struct ath5k_hw*,int ,int,int ) ;
 scalar_t__ FUNC_4 (struct pci_dev*) ;
 int FUNC_5 (int,int) ;

int
FUNC_6(struct ath5k_hw *VAR_10)
{
 struct pci_dev *VAR_11 = VAR_10->pdev;
 u32 VAR_12;
 int VAR_13;

 if (FUNC_1(VAR_10) == VAR_8)
  return 0;


 VAR_13 = FUNC_3(VAR_10, VAR_1, 1, 0);
 if (VAR_13) {
  FUNC_0(VAR_10, "failed to wakeup the MAC Chip\n");
  return VAR_13;
 }
 VAR_12 = (VAR_11 && FUNC_4(VAR_11)) ? 0 : VAR_5;

 if (VAR_10->ah_version == VAR_0) {
  VAR_13 = FUNC_2(VAR_10, VAR_6 |
   VAR_4 | VAR_3 |
   VAR_7 | VAR_5);
  FUNC_5(2000, 2500);
 } else {
  VAR_13 = FUNC_2(VAR_10, VAR_6 |
   VAR_2 | VAR_12);
 }

 if (VAR_13) {
  FUNC_0(VAR_10, "failed to put device on warm reset\n");
  return -VAR_9;
 }


 VAR_13 = FUNC_3(VAR_10, VAR_1, 1, 0);
 if (VAR_13) {
  FUNC_0(VAR_10, "failed to put device on hold\n");
  return VAR_13;
 }

 return VAR_13;
}
