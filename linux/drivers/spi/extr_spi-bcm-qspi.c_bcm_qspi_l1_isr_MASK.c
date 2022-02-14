
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct bcm_qspi_soc_intc {int (* bcm_qspi_get_int_status ) (struct bcm_qspi_soc_intc*) ;} ;
struct bcm_qspi_dev_id {struct bcm_qspi* dev; } ;
struct bcm_qspi {struct bcm_qspi_soc_intc* soc_intc; } ;
typedef int irqreturn_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int,void*) ;
 int FUNC_1 (int,void*) ;
 int FUNC_2 (int,void*) ;
 int FUNC_3 (struct bcm_qspi_soc_intc*) ;

__attribute__((used)) static irqreturn_t FUNC_4(int VAR_4, void *VAR_5)
{
 struct bcm_qspi_dev_id *VAR_6 = VAR_5;
 struct bcm_qspi *VAR_7 = VAR_6->dev;
 struct bcm_qspi_soc_intc *VAR_8 = VAR_7->soc_intc;
 irqreturn_t VAR_9 = VAR_2;

 if (VAR_8) {
  u32 VAR_10 = VAR_8->bcm_qspi_get_int_status(VAR_8);

  if (VAR_10 & VAR_3)
   VAR_9 = FUNC_2(VAR_4, VAR_5);
  else if (VAR_10 & VAR_0)
   VAR_9 = FUNC_1(VAR_4, VAR_5);
  else if (VAR_10 & VAR_1)
   VAR_9 = FUNC_0(VAR_4, VAR_5);
 }

 return VAR_9;
}
