
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct platform_device {int dummy; } ;
struct TYPE_2__ {int isr_table_cio; } ;
struct dsi_data {TYPE_1__ isr_tables; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (struct platform_device*,int ,int ,int ,int ,int ) ;
 struct dsi_data* FUNC_2 (struct platform_device*) ;

__attribute__((used)) static void FUNC_3(struct platform_device *VAR_3)
{
 struct dsi_data *VAR_4 = FUNC_2(VAR_3);

 FUNC_1(VAR_3, VAR_4->isr_tables.isr_table_cio,
   FUNC_0(VAR_4->isr_tables.isr_table_cio),
   VAR_0,
   VAR_1, VAR_2);
}
