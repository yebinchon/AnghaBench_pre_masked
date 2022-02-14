
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct brcmf_pcie_shared_info {scalar_t__ htod_mb_data_addr; } ;
struct brcmf_pciedev_info {int pdev; int ci; struct brcmf_pcie_shared_info shared; } ;
struct brcmf_core {int rev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct brcmf_core* FUNC_0 (int ,int ) ;
 int FUNC_1 (int ,char*,scalar_t__) ;
 scalar_t__ FUNC_2 (struct brcmf_pciedev_info*,scalar_t__) ;
 int FUNC_3 (struct brcmf_pciedev_info*,scalar_t__,scalar_t__) ;
 int FUNC_4 (int) ;
 int FUNC_5 (int ,int ,int) ;

__attribute__((used)) static int
FUNC_6(struct brcmf_pciedev_info *VAR_4, u32 VAR_5)
{
 struct brcmf_pcie_shared_info *VAR_6;
 struct brcmf_core *VAR_7;
 u32 VAR_8;
 u32 VAR_9;
 u32 VAR_10;

 VAR_6 = &VAR_4->shared;
 VAR_8 = VAR_6->htod_mb_data_addr;
 VAR_9 = FUNC_2(VAR_4, VAR_8);

 if (VAR_9 != 0)
  FUNC_1(VAR_3, "MB transaction is already pending 0x%04x\n",
     VAR_9);

 VAR_10 = 0;
 while (VAR_9 != 0) {
  FUNC_4(10);
  VAR_10++;
  if (VAR_10 > 100)
   return -VAR_2;
  VAR_9 = FUNC_2(VAR_4, VAR_8);
 }

 FUNC_3(VAR_4, VAR_8, VAR_5);
 FUNC_5(VAR_4->pdev, VAR_1, 1);


 VAR_7 = FUNC_0(VAR_4->ci, VAR_0);
 if (VAR_7->rev <= 13)
  FUNC_5(VAR_4->pdev, VAR_1, 1);

 return 0;
}
