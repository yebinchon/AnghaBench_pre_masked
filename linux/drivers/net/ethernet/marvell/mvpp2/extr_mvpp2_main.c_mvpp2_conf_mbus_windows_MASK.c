
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct mvpp2 {int dummy; } ;
struct mbus_dram_window {int base; int mbus_attr; int size; } ;
struct mbus_dram_target_info {int num_cs; int mbus_dram_target_id; struct mbus_dram_window* cs; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int) ;
 int FUNC_3 (struct mvpp2*,int ,int) ;

__attribute__((used)) static void FUNC_4(const struct mbus_dram_target_info *VAR_1,
        struct mvpp2 *VAR_2)
{
 u32 VAR_3;
 int VAR_4;

 for (VAR_4 = 0; VAR_4 < 6; VAR_4++) {
  FUNC_3(VAR_2, FUNC_0(VAR_4), 0);
  FUNC_3(VAR_2, FUNC_2(VAR_4), 0);

  if (VAR_4 < 4)
   FUNC_3(VAR_2, FUNC_1(VAR_4), 0);
 }

 VAR_3 = 0;

 for (VAR_4 = 0; VAR_4 < VAR_1->num_cs; VAR_4++) {
  const struct mbus_dram_window *VAR_5 = VAR_1->cs + VAR_4;

  FUNC_3(VAR_2, FUNC_0(VAR_4),
       (VAR_5->base & 0xffff0000) | (VAR_5->mbus_attr << 8) |
       VAR_1->mbus_dram_target_id);

  FUNC_3(VAR_2, FUNC_2(VAR_4),
       (VAR_5->size - 1) & 0xffff0000);

  VAR_3 |= (1 << VAR_4);
 }

 FUNC_3(VAR_2, VAR_0, VAR_3);
}
