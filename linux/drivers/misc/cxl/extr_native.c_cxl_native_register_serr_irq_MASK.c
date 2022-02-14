
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct cxl_afu {int serr_hwirq; int * err_irq_name; int serr_virq; int adapter; int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 () ;
 scalar_t__ FUNC_1 () ;
 int FUNC_2 (struct cxl_afu*,int ) ;
 int FUNC_3 (struct cxl_afu*,int ,int) ;
 int FUNC_4 (int ,int ,struct cxl_afu*,int*,int *,int *) ;
 int FUNC_5 (int *) ;
 int * FUNC_6 (int ,char*,int ) ;
 int FUNC_7 (int *) ;
 int VAR_3 ;

int FUNC_8(struct cxl_afu *VAR_4)
{
 u64 VAR_5;
 int VAR_6;

 VAR_4->err_irq_name = FUNC_6(VAR_2, "cxl-%s-err",
          FUNC_5(&VAR_4->dev));
 if (!VAR_4->err_irq_name)
  return -VAR_1;

 if ((VAR_6 = FUNC_4(VAR_4->adapter, VAR_3, VAR_4,
           &VAR_4->serr_hwirq,
           &VAR_4->serr_virq, VAR_4->err_irq_name))) {
  FUNC_7(VAR_4->err_irq_name);
  VAR_4->err_irq_name = ((void*)0);
  return VAR_6;
 }

 VAR_5 = FUNC_2(VAR_4, VAR_0);
 if (FUNC_0())
  VAR_5 = (VAR_5 & 0x00ffffffffff0000ULL) | (VAR_4->serr_hwirq & 0xffff);
 if (FUNC_1()) {




  VAR_5 = (VAR_5 & ~0xff0000007fffffffULL) | (VAR_4->serr_hwirq & 0xffff);
 }
 FUNC_3(VAR_4, VAR_0, VAR_5);

 return 0;
}
