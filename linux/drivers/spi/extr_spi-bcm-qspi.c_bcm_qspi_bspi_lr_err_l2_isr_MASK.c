
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct bcm_qspi_soc_intc {int (* bcm_qspi_int_ack ) (struct bcm_qspi_soc_intc*,int ) ;} ;
struct bcm_qspi_dev_id {struct bcm_qspi* dev; } ;
struct bcm_qspi {int bspi_done; struct bcm_qspi_soc_intc* soc_intc; int bspi_rf_op_status; TYPE_1__* pdev; } ;
typedef int irqreturn_t ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *,char*) ;
 int FUNC_2 (struct bcm_qspi_soc_intc*,int ) ;

__attribute__((used)) static irqreturn_t FUNC_3(int VAR_3, void *VAR_4)
{
 struct bcm_qspi_dev_id *VAR_5 = VAR_4;
 struct bcm_qspi *VAR_6 = VAR_5->dev;
 struct bcm_qspi_soc_intc *VAR_7 = VAR_6->soc_intc;

 FUNC_1(&VAR_6->pdev->dev, "BSPI INT error\n");
 VAR_6->bspi_rf_op_status = -VAR_1;
 if (VAR_6->soc_intc)

  VAR_7->bcm_qspi_int_ack(VAR_7, VAR_0);

 FUNC_0(&VAR_6->bspi_done);
 return VAR_2;
}
