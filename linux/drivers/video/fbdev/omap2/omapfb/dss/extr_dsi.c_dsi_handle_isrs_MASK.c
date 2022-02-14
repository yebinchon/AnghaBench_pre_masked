
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct dsi_isr_tables {int isr_table_cio; int * isr_table_vc; int isr_table; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int ,scalar_t__) ;

__attribute__((used)) static void FUNC_2(struct dsi_isr_tables *VAR_0,
  u32 VAR_1, u32 *VAR_2, u32 VAR_3)
{
 int VAR_4;

 FUNC_1(VAR_0->isr_table,
   FUNC_0(VAR_0->isr_table),
   VAR_1);

 for (VAR_4 = 0; VAR_4 < 4; ++VAR_4) {
  if (VAR_2[VAR_4] == 0)
   continue;
  FUNC_1(VAR_0->isr_table_vc[VAR_4],
    FUNC_0(VAR_0->isr_table_vc[VAR_4]),
    VAR_2[VAR_4]);
 }

 if (VAR_3 != 0)
  FUNC_1(VAR_0->isr_table_cio,
    FUNC_0(VAR_0->isr_table_cio),
    VAR_3);
}
