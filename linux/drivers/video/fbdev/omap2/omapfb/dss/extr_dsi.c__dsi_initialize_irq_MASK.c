
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct platform_device {int dummy; } ;
struct dsi_data {int irq_lock; int isr_tables; } ;


 int FUNC_0 (struct platform_device*) ;
 int FUNC_1 (struct platform_device*) ;
 int FUNC_2 (struct platform_device*,int) ;
 struct dsi_data* FUNC_3 (struct platform_device*) ;
 int FUNC_4 (int *,int ,int) ;
 int FUNC_5 (int *,unsigned long) ;
 int FUNC_6 (int *,unsigned long) ;

__attribute__((used)) static void FUNC_7(struct platform_device *VAR_0)
{
 struct dsi_data *VAR_1 = FUNC_3(VAR_0);
 unsigned long VAR_2;
 int VAR_3;

 FUNC_5(&VAR_1->irq_lock, VAR_2);

 FUNC_4(&VAR_1->isr_tables, 0, sizeof(VAR_1->isr_tables));

 FUNC_0(VAR_0);
 for (VAR_3 = 0; VAR_3 < 4; ++VAR_3)
  FUNC_2(VAR_0, VAR_3);
 FUNC_1(VAR_0);

 FUNC_6(&VAR_1->irq_lock, VAR_2);
}
