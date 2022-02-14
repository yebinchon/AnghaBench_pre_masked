
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct brcmf_pciedev_info {TYPE_1__* pdev; } ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct brcmf_pciedev_info*,int ) ;
 int FUNC_1 (struct brcmf_pciedev_info*,int ) ;
 int FUNC_2 (struct brcmf_pciedev_info*,int ,int) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static void FUNC_4(struct brcmf_pciedev_info *VAR_3)
{
 u32 VAR_4;


 FUNC_1(VAR_3, VAR_0);
 FUNC_2(VAR_3, VAR_1, 0x4e0);
 VAR_4 = FUNC_0(VAR_3, VAR_2);
 FUNC_2(VAR_3, VAR_2, VAR_4);

 FUNC_3(&VAR_3->pdev->dev);
}
