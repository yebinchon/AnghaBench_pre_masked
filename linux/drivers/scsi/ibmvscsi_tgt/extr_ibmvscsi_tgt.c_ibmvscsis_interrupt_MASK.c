
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct scsi_info {int work_task; int dma_dev; } ;
typedef int irqreturn_t ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static irqreturn_t FUNC_2(int VAR_1, void *VAR_2)
{
 struct scsi_info *VAR_3 = VAR_2;

 FUNC_1(VAR_3->dma_dev);
 FUNC_0(&VAR_3->work_task);

 return VAR_0;
}
