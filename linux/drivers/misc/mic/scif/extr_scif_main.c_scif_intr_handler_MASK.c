
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct scif_hw_dev {TYPE_1__* hw_ops; } ;
struct scif_dev {int intr_bh; int intr_wq; int db; struct scif_hw_dev* sdev; } ;
typedef int irqreturn_t ;
struct TYPE_2__ {int (* ack_interrupt ) (struct scif_hw_dev*,int ) ;} ;


 int VAR_0 ;
 int FUNC_0 (int ,int *) ;
 int FUNC_1 (struct scif_hw_dev*,int ) ;

irqreturn_t FUNC_2(int VAR_1, void *VAR_2)
{
 struct scif_dev *VAR_3 = VAR_2;
 struct scif_hw_dev *VAR_4 = VAR_3->sdev;

 VAR_4->hw_ops->ack_interrupt(VAR_4, VAR_3->db);
 FUNC_0(VAR_3->intr_wq, &VAR_3->intr_bh);
 return VAR_0;
}
