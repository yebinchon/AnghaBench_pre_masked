
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct pci_dev {int dev; } ;
struct csio_lnode {int portid; } ;
struct csio_hw {int num_pports; int lock; TYPE_1__* pport; } ;
struct TYPE_2__ {int portid; } ;


 int VAR_0 ;
 int FUNC_0 (struct csio_hw*) ;
 int FUNC_1 (struct csio_hw*) ;
 int FUNC_2 (struct csio_lnode*) ;
 scalar_t__ FUNC_3 (struct csio_lnode*) ;
 int FUNC_4 (struct csio_hw*) ;
 int FUNC_5 (struct csio_hw*,int ) ;
 int FUNC_6 (struct csio_hw*) ;
 struct csio_lnode* FUNC_7 (struct csio_hw*,int *,int,int *) ;
 int FUNC_8 (int *,char*,int) ;
 struct csio_hw* FUNC_9 (struct pci_dev*) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int *) ;

__attribute__((used)) static void
FUNC_12(struct pci_dev *VAR_1)
{
 struct csio_hw *VAR_2 = FUNC_9(VAR_1);
 struct csio_lnode *VAR_3;
 int VAR_4 = 0;
 int VAR_5;



 for (VAR_5 = 0; VAR_5 < VAR_2->num_pports; VAR_5++) {
  VAR_3 = FUNC_7(VAR_2, &VAR_1->dev, 1, ((void*)0));
  if (!VAR_3) {
   VAR_4 = -VAR_0;
   break;
  }

  VAR_3->portid = VAR_2->pport[VAR_5].portid;

  FUNC_10(&VAR_2->lock);
  if (FUNC_3(VAR_3) != 0)
   VAR_4 = -VAR_0;
  FUNC_11(&VAR_2->lock);

  if (VAR_4)
   break;

  FUNC_2(VAR_3);
 }

 if (VAR_4)
  goto err_resume_exit;

 return;

err_resume_exit:
 FUNC_4(VAR_2);
 FUNC_10(&VAR_2->lock);
 FUNC_1(VAR_2);
 FUNC_11(&VAR_2->lock);
 FUNC_6(VAR_2);
 FUNC_5(VAR_2, 0);
 FUNC_0(VAR_2);
 FUNC_8(&VAR_1->dev, "resume of device failed: %d\n", VAR_4);
}
