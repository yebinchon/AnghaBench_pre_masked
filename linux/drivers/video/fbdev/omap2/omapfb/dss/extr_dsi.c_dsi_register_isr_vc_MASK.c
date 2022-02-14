
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct platform_device {int dummy; } ;
struct TYPE_2__ {int * isr_table_vc; } ;
struct dsi_data {int irq_lock; TYPE_1__ isr_tables; } ;
typedef int omap_dsi_isr_t ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ,void*,int ,int ,int ) ;
 int FUNC_2 (struct platform_device*,int) ;
 struct dsi_data* FUNC_3 (struct platform_device*) ;
 int FUNC_4 (int *,unsigned long) ;
 int FUNC_5 (int *,unsigned long) ;

__attribute__((used)) static int FUNC_6(struct platform_device *VAR_0, int VAR_1,
  omap_dsi_isr_t VAR_2, void *VAR_3, u32 VAR_4)
{
 struct dsi_data *VAR_5 = FUNC_3(VAR_0);
 unsigned long VAR_6;
 int VAR_7;

 FUNC_4(&VAR_5->irq_lock, VAR_6);

 VAR_7 = FUNC_1(VAR_2, VAR_3, VAR_4,
   VAR_5->isr_tables.isr_table_vc[VAR_1],
   FUNC_0(VAR_5->isr_tables.isr_table_vc[VAR_1]));

 if (VAR_7 == 0)
  FUNC_2(VAR_0, VAR_1);

 FUNC_5(&VAR_5->irq_lock, VAR_6);

 return VAR_7;
}
