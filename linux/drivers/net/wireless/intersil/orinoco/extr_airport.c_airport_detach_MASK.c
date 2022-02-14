
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct orinoco_private {struct airport* card; } ;
struct TYPE_2__ {int dev; } ;
struct macio_dev {TYPE_1__ ofdev; } ;
struct airport {int * vaddr; scalar_t__ irq_requested; int irq; scalar_t__ ndev_registered; } ;


 int VAR_0 ;
 struct orinoco_private* FUNC_0 (int *) ;
 int FUNC_1 (int ,struct orinoco_private*) ;
 int FUNC_2 (struct orinoco_private*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (struct macio_dev*) ;
 int FUNC_5 (struct macio_dev*,int ) ;
 int FUNC_6 (struct macio_dev*,int *) ;
 int FUNC_7 (struct orinoco_private*) ;
 int FUNC_8 (int ,int ,int ,int ) ;
 int FUNC_9 (int) ;

__attribute__((used)) static int
FUNC_10(struct macio_dev *VAR_1)
{
 struct orinoco_private *VAR_2 = FUNC_0(&VAR_1->ofdev.dev);
 struct airport *VAR_3 = VAR_2->card;

 if (VAR_3->ndev_registered)
  FUNC_7(VAR_2);
 VAR_3->ndev_registered = 0;

 if (VAR_3->irq_requested)
  FUNC_1(VAR_3->irq, VAR_2);
 VAR_3->irq_requested = 0;

 if (VAR_3->vaddr)
  FUNC_3(VAR_3->vaddr);
 VAR_3->vaddr = ((void*)0);

 FUNC_5(VAR_1, 0);

 FUNC_8(VAR_0,
     FUNC_4(VAR_1), 0, 0);
 FUNC_9(1);

 FUNC_6(VAR_1, ((void*)0));
 FUNC_2(VAR_2);

 return 0;
}
