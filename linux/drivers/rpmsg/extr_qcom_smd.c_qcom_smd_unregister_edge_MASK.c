
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct qcom_smd_edge {int dev; int mbox_chan; int state_work; int scan_work; int irq; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *,char*,int) ;
 int FUNC_2 (int *,int *,int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 int VAR_0 ;

int FUNC_6(struct qcom_smd_edge *VAR_1)
{
 int VAR_2;

 FUNC_4(VAR_1->irq);
 FUNC_0(&VAR_1->scan_work);
 FUNC_0(&VAR_1->state_work);

 VAR_2 = FUNC_2(&VAR_1->dev, ((void*)0), VAR_0);
 if (VAR_2)
  FUNC_1(&VAR_1->dev, "can't remove smd device: %d\n", VAR_2);

 FUNC_5(VAR_1->mbox_chan);
 FUNC_3(&VAR_1->dev);

 return 0;
}
