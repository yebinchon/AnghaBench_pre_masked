
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct platform_device {int dummy; } ;
struct TYPE_2__ {int * isr_table_vc; } ;
struct dsi_data {TYPE_1__ isr_tables; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int) ;
 int VAR_0 ;
 int FUNC_3 (struct platform_device*,int ,int ,int ,int ,int ) ;
 struct dsi_data* FUNC_4 (struct platform_device*) ;

__attribute__((used)) static void FUNC_5(struct platform_device *VAR_1, int VAR_2)
{
 struct dsi_data *VAR_3 = FUNC_4(VAR_1);

 FUNC_3(VAR_1, VAR_3->isr_tables.isr_table_vc[VAR_2],
   FUNC_0(VAR_3->isr_tables.isr_table_vc[VAR_2]),
   VAR_0,
   FUNC_1(VAR_2), FUNC_2(VAR_2));
}
