
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct tsi721_device {int flags; TYPE_1__* pdev; } ;
struct TYPE_2__ {int dev; int irq; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,int ,int ,int ,void*) ;
 int VAR_4 ;
 int FUNC_1 (struct tsi721_device*) ;
 int FUNC_2 (int *,char*,int) ;

__attribute__((used)) static int FUNC_3(struct tsi721_device *VAR_5)
{
 int VAR_6;






  VAR_6 = FUNC_0(VAR_5->pdev->irq, VAR_4,
     (VAR_5->flags & VAR_2) ? 0 : VAR_1,
     VAR_0, (void *)VAR_5);

 if (VAR_6)
  FUNC_2(&VAR_5->pdev->dev,
   "Unable to allocate interrupt, err=%d", VAR_6);

 return VAR_6;
}
