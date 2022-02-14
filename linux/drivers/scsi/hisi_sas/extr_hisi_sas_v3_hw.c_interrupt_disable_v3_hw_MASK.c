
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pci_dev {int dummy; } ;
struct hisi_hba {int queue_count; int n_phy; struct pci_dev* pci_dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 int VAR_9 ;
 int FUNC_0 (struct hisi_hba*,int,int ,int) ;
 int FUNC_1 (struct hisi_hba*,scalar_t__,int) ;
 int FUNC_2 (struct pci_dev*,int) ;
 int FUNC_3 (int ) ;

__attribute__((used)) static void FUNC_4(struct hisi_hba *VAR_10)
{
 struct pci_dev *VAR_11 = VAR_10->pci_dev;
 int VAR_12;

 FUNC_3(FUNC_2(VAR_11, 1));
 FUNC_3(FUNC_2(VAR_11, 2));
 FUNC_3(FUNC_2(VAR_11, 11));
 for (VAR_12 = 0; VAR_12 < VAR_10->queue_count; VAR_12++) {
  FUNC_1(VAR_10, VAR_5 + 0x4 * VAR_12, 0x1);
  FUNC_3(FUNC_2(VAR_11, VAR_12 + 16));
 }

 FUNC_1(VAR_10, VAR_2, 0xffffffff);
 FUNC_1(VAR_10, VAR_3, 0xffffffff);
 FUNC_1(VAR_10, VAR_4, 0xffffffff);
 FUNC_1(VAR_10, VAR_8, 0xffffffff);

 for (VAR_12 = 0; VAR_12 < VAR_10->n_phy; VAR_12++) {
  FUNC_0(VAR_10, VAR_12, VAR_0, 0xffffffff);
  FUNC_0(VAR_10, VAR_12, VAR_1, 0xffffffff);
  FUNC_0(VAR_10, VAR_12, VAR_6, 0x1);
  FUNC_0(VAR_10, VAR_12, VAR_7, 0x1);
  FUNC_0(VAR_10, VAR_12, VAR_9, 0x1);
 }
}
