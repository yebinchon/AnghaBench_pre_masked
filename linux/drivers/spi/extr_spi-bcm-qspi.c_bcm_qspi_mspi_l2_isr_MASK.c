
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct bcm_qspi_soc_intc {int (* bcm_qspi_int_ack ) (struct bcm_qspi_soc_intc*,int ) ;} ;
struct bcm_qspi_dev_id {struct bcm_qspi* dev; } ;
struct bcm_qspi {int mspi_done; struct bcm_qspi_soc_intc* soc_intc; } ;
typedef int irqreturn_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct bcm_qspi*,int ,int ) ;
 int FUNC_1 (struct bcm_qspi*,int ,int ,int) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct bcm_qspi_soc_intc*,int ) ;

__attribute__((used)) static irqreturn_t FUNC_4(int VAR_6, void *VAR_7)
{
 struct bcm_qspi_dev_id *VAR_8 = VAR_7;
 struct bcm_qspi *VAR_9 = VAR_8->dev;
 u32 VAR_10 = FUNC_0(VAR_9, VAR_2, VAR_4);

 if (VAR_10 & VAR_5) {
  struct bcm_qspi_soc_intc *VAR_11 = VAR_9->soc_intc;

  VAR_10 &= ~VAR_5;
  FUNC_1(VAR_9, VAR_2, VAR_4, VAR_10);
  if (VAR_9->soc_intc)
   VAR_11->bcm_qspi_int_ack(VAR_11, VAR_3);
  FUNC_2(&VAR_9->mspi_done);
  return VAR_0;
 }

 return VAR_1;
}
