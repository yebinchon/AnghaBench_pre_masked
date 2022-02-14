
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct platform_device {int dummy; } ;
struct kpc_dma_device {TYPE_2__* pldev; } ;
struct TYPE_3__ {int kobj; } ;
struct TYPE_4__ {int id; TYPE_1__ dev; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int ) ;
 int VAR_1 ;
 int FUNC_1 (struct kpc_dma_device*) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (struct kpc_dma_device*) ;
 int VAR_2 ;
 int FUNC_4 (struct kpc_dma_device*) ;
 int FUNC_5 (struct kpc_dma_device*) ;
 int VAR_3 ;
 struct kpc_dma_device* FUNC_6 (struct platform_device*) ;
 int FUNC_7 (int *,int ) ;

__attribute__((used)) static
int FUNC_8(struct platform_device *VAR_4)
{
 struct kpc_dma_device *VAR_5 = FUNC_6(VAR_4);

 if (!VAR_5)
  return -VAR_0;

 FUNC_5(VAR_5);
 FUNC_7(&(VAR_5->pldev->dev.kobj), VAR_3);
 FUNC_1(VAR_5);
 FUNC_4(VAR_5);
 FUNC_2(VAR_2, FUNC_0(VAR_1, VAR_5->pldev->id));
 FUNC_3(VAR_5);

 return 0;
}
