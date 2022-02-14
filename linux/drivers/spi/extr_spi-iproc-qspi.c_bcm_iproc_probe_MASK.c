
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct resource {int dummy; } ;
struct device {int of_node; } ;
struct platform_device {struct device dev; } ;
struct bcm_qspi_soc_intc {int bcm_qspi_get_int_status; int (* bcm_qspi_int_set ) (struct bcm_qspi_soc_intc*,int ,int) ;int (* bcm_qspi_int_ack ) (struct bcm_qspi_soc_intc*,int ) ;} ;
struct bcm_iproc_intc {int big_endian; void* int_status_reg; void* int_reg; int soclock; struct platform_device* pdev; struct bcm_qspi_soc_intc soc_intc; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (void*) ;
 int VAR_3 ;
 int FUNC_1 (void*) ;
 int VAR_4 ;
 int FUNC_2 (struct bcm_qspi_soc_intc*,int ) ;
 int FUNC_3 (struct bcm_qspi_soc_intc*,int ,int) ;
 int FUNC_4 (struct platform_device*,struct bcm_qspi_soc_intc*) ;
 void* FUNC_5 (struct device*,struct resource*) ;
 struct bcm_iproc_intc* FUNC_6 (struct device*,int,int ) ;
 int FUNC_7 (int ) ;
 struct resource* FUNC_8 (struct platform_device*,int ,char*) ;
 int FUNC_9 (int *) ;

__attribute__((used)) static int FUNC_10(struct platform_device *VAR_5)
{
 struct device *VAR_6 = &VAR_5->dev;
 struct bcm_iproc_intc *VAR_7;
 struct bcm_qspi_soc_intc *VAR_8;
 struct resource *VAR_9;

 VAR_7 = FUNC_6(VAR_6, sizeof(*VAR_7), VAR_1);
 if (!VAR_7)
  return -VAR_0;
 VAR_8 = &VAR_7->soc_intc;
 VAR_7->pdev = VAR_5;

 FUNC_9(&VAR_7->soclock);

 VAR_9 = FUNC_8(VAR_5, VAR_2, "intr_regs");
 VAR_7->int_reg = FUNC_5(VAR_6, VAR_9);
 if (FUNC_0(VAR_7->int_reg))
  return FUNC_1(VAR_7->int_reg);

 VAR_9 = FUNC_8(VAR_5, VAR_2,
        "intr_status_reg");
 VAR_7->int_status_reg = FUNC_5(VAR_6, VAR_9);
 if (FUNC_0(VAR_7->int_status_reg))
  return FUNC_1(VAR_7->int_status_reg);

 VAR_7->big_endian = FUNC_7(VAR_6->of_node);

 FUNC_2(VAR_8, VAR_3);
 FUNC_3(VAR_8, VAR_3, 0);

 VAR_8->bcm_qspi_int_ack = FUNC_2;
 VAR_8->bcm_qspi_int_set = FUNC_3;
 VAR_8->bcm_qspi_get_int_status = VAR_4;

 return FUNC_4(VAR_5, VAR_8);
}
