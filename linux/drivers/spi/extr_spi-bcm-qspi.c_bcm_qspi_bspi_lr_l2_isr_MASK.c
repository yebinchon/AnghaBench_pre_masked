
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct bcm_qspi_soc_intc {int (* bcm_qspi_int_ack ) (struct bcm_qspi_soc_intc*,int ) ;int (* bcm_qspi_int_set ) (struct bcm_qspi_soc_intc*,int ,int) ;} ;
struct bcm_qspi_dev_id {TYPE_1__* irqp; struct bcm_qspi* dev; } ;
struct bcm_qspi {scalar_t__ bspi_rf_op_len; int bspi_done; scalar_t__ bspi_enabled; struct bcm_qspi_soc_intc* soc_intc; scalar_t__ bspi_rf_op_status; int * bspi_rf_op; } ;
typedef int irqreturn_t ;
struct TYPE_2__ {int mask; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct bcm_qspi*) ;
 int FUNC_1 (struct bcm_qspi*) ;
 int FUNC_2 (struct bcm_qspi*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (struct bcm_qspi_soc_intc*,int ,int) ;
 int FUNC_5 (struct bcm_qspi_soc_intc*,int ) ;

__attribute__((used)) static irqreturn_t FUNC_6(int VAR_3, void *VAR_4)
{
 struct bcm_qspi_dev_id *VAR_5 = VAR_4;
 struct bcm_qspi *VAR_6 = VAR_5->dev;
 struct bcm_qspi_soc_intc *VAR_7 = VAR_6->soc_intc;
 u32 VAR_8 = VAR_5->irqp->mask;

 if (VAR_6->bspi_enabled && VAR_6->bspi_rf_op) {
  FUNC_2(VAR_6);
  if (VAR_6->bspi_rf_op_len == 0) {
   VAR_6->bspi_rf_op = ((void*)0);
   if (VAR_6->soc_intc) {

    VAR_7->bcm_qspi_int_set(VAR_7, VAR_0,
          0);

    VAR_8 = VAR_1;
   }

   if (VAR_6->bspi_rf_op_status)
    FUNC_1(VAR_6);
   else
    FUNC_0(VAR_6);
  }

  if (VAR_6->soc_intc)

   VAR_7->bcm_qspi_int_ack(VAR_7, VAR_0);
 }

 VAR_8 &= VAR_1;
 if (VAR_6->bspi_enabled && VAR_8 && VAR_6->bspi_rf_op_len == 0)
  FUNC_3(&VAR_6->bspi_done);

 return VAR_2;
}
