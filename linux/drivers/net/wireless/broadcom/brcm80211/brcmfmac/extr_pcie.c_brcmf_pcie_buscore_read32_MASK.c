
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct brcmf_pciedev_info {int pdev; } ;


 int FUNC_0 (int ,int ) ;
 int FUNC_1 (struct brcmf_pciedev_info*,int ) ;

__attribute__((used)) static u32 FUNC_2(void *VAR_0, u32 VAR_1)
{
 struct brcmf_pciedev_info *VAR_2 = (struct brcmf_pciedev_info *)VAR_0;

 VAR_1 = FUNC_0(VAR_2->pdev, VAR_1);
 return FUNC_1(VAR_2, VAR_1);
}
