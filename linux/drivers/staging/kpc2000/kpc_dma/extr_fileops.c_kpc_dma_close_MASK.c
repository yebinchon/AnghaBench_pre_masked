
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct kpc_dma_device {int open_count; struct kpc_dma_descriptor* desc_completed; TYPE_1__* pldev; struct kpc_dma_descriptor* desc_next; } ;
struct kpc_dma_descriptor {int DescControlFlags; struct kpc_dma_descriptor* Next; scalar_t__ acd; } ;
struct inode {int dummy; } ;
struct file {scalar_t__ private_data; } ;
struct dev_private_data {struct kpc_dma_device* ldev; } ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (struct kpc_dma_descriptor*) ;
 int FUNC_2 (int *,char*,struct kpc_dma_descriptor*,scalar_t__) ;
 int FUNC_3 (struct dev_private_data*) ;
 int FUNC_4 (struct kpc_dma_device*) ;
 int FUNC_5 (struct kpc_dma_device*) ;
 int FUNC_6 (struct kpc_dma_device*) ;
 int FUNC_7 (scalar_t__,int ,int ) ;
 int FUNC_8 (struct kpc_dma_device*) ;

__attribute__((used)) static
int FUNC_9(struct inode *VAR_2, struct file *VAR_3)
{
 struct kpc_dma_descriptor *VAR_4;
 struct dev_private_data *VAR_5 = (struct dev_private_data *)VAR_3->private_data;
 struct kpc_dma_device *VAR_6 = VAR_5->ldev;

 FUNC_4(VAR_6);

 FUNC_6(VAR_6);

 VAR_4 = VAR_6->desc_completed->Next;
 while (VAR_4 != VAR_6->desc_next) {
  FUNC_2(&VAR_6->pldev->dev, "Aborting descriptor %p (acd = %p)\n", VAR_4, VAR_4->acd);
  if (VAR_4->DescControlFlags & VAR_1) {
   if (VAR_4->acd)
    FUNC_7(VAR_4->acd, 0, VAR_0);
  }

  FUNC_1(VAR_4);
  VAR_6->desc_completed = VAR_4;

  VAR_4 = VAR_4->Next;
 }

 FUNC_5(VAR_6);

 FUNC_8(VAR_6);

 FUNC_0(&VAR_5->ldev->open_count);
 FUNC_3(VAR_5);
 return 0;
}
