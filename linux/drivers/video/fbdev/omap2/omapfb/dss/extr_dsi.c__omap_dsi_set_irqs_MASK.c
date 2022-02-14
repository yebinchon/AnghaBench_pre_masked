
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct platform_device {int dummy; } ;
struct TYPE_2__ {int isr_table; } ;
struct dsi_data {TYPE_1__ isr_tables; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (struct platform_device*,int ,int ,int ,int ,int ) ;
 struct dsi_data* FUNC_2 (struct platform_device*) ;

__attribute__((used)) static void FUNC_3(struct platform_device *VAR_4)
{
 struct dsi_data *VAR_5 = FUNC_2(VAR_4);
 u32 VAR_6 = VAR_2;



 FUNC_1(VAR_4, VAR_5->isr_tables.isr_table,
   FUNC_0(VAR_5->isr_tables.isr_table), VAR_6,
   VAR_0, VAR_1);
}
