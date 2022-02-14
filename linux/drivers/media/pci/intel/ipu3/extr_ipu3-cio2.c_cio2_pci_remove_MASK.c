
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pci_dev {int dummy; } ;
struct cio2_device {int lock; int media_dev; int v4l2_dev; int notifier; } ;


 int FUNC_0 (struct cio2_device*) ;
 int FUNC_1 (struct cio2_device*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 struct cio2_device* FUNC_5 (struct pci_dev*) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;

__attribute__((used)) static void FUNC_9(struct pci_dev *VAR_0)
{
 struct cio2_device *VAR_1 = FUNC_5(VAR_0);

 FUNC_3(&VAR_1->media_dev);
 FUNC_7(&VAR_1->notifier);
 FUNC_6(&VAR_1->notifier);
 FUNC_1(VAR_1);
 FUNC_0(VAR_1);
 FUNC_8(&VAR_1->v4l2_dev);
 FUNC_2(&VAR_1->media_dev);
 FUNC_4(&VAR_1->lock);
}
