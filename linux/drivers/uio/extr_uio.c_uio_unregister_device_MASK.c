
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct uio_info {scalar_t__ irq; struct uio_device* uio_dev; } ;
struct uio_device {int dev; int async_queue; int wait; int info_lock; int * info; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (scalar_t__,struct uio_device*) ;
 int FUNC_2 (int *,int ,int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (struct uio_device*) ;
 int FUNC_6 (struct uio_device*) ;
 int FUNC_7 (int *) ;

void FUNC_8(struct uio_info *VAR_3)
{
 struct uio_device *VAR_4;

 if (!VAR_3 || !VAR_3->uio_dev)
  return;

 VAR_4 = VAR_3->uio_dev;

 FUNC_6(VAR_4);

 FUNC_3(&VAR_4->info_lock);
 FUNC_5(VAR_4);

 if (VAR_3->irq && VAR_3->irq != VAR_2)
  FUNC_1(VAR_3->irq, VAR_4);

 VAR_4->info = ((void*)0);
 FUNC_4(&VAR_4->info_lock);

 FUNC_7(&VAR_4->wait);
 FUNC_2(&VAR_4->async_queue, VAR_1, VAR_0);

 FUNC_0(&VAR_4->dev);

 return;
}
