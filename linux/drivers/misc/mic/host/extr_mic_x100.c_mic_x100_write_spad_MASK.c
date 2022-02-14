
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct mic_device {int mmio; TYPE_1__* pdev; } ;
struct TYPE_2__ {int dev; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int *,char*,int ,unsigned int) ;
 int FUNC_1 (int *,int ,scalar_t__) ;

__attribute__((used)) static void
FUNC_2(struct mic_device *VAR_2, unsigned int VAR_3, u32 VAR_4)
{
 FUNC_0(&VAR_2->pdev->dev, "Writing 0x%x to scratch pad index %d\n",
  VAR_4, VAR_3);
 FUNC_1(&VAR_2->mmio, VAR_4,
         VAR_0 +
         VAR_1 + VAR_3 * 4);
}
