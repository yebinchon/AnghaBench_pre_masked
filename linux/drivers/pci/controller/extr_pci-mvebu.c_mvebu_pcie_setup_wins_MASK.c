
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct mvebu_pcie_port {int dummy; } ;
struct mbus_dram_window {int base; int size; int mbus_attr; } ;
struct mbus_dram_target_info {int num_cs; int mbus_dram_target_id; struct mbus_dram_window* cs; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int) ;
 int FUNC_5 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_6 (int) ;
 struct mbus_dram_target_info* FUNC_7 () ;
 int FUNC_8 (struct mvebu_pcie_port*,int,int ) ;

__attribute__((used)) static void FUNC_9(struct mvebu_pcie_port *VAR_3)
{
 const struct mbus_dram_target_info *VAR_4;
 u32 VAR_5;
 int VAR_6;

 VAR_4 = FUNC_7();


 for (VAR_6 = 1; VAR_6 < 3; VAR_6++) {
  FUNC_8(VAR_3, 0, FUNC_0(VAR_6));
  FUNC_8(VAR_3, 0, FUNC_2(VAR_6));
  FUNC_8(VAR_3, 0, FUNC_1(VAR_6));
 }

 for (VAR_6 = 0; VAR_6 < 5; VAR_6++) {
  FUNC_8(VAR_3, 0, FUNC_4(VAR_6));
  FUNC_8(VAR_3, 0, FUNC_3(VAR_6));
  FUNC_8(VAR_3, 0, FUNC_5(VAR_6));
 }

 FUNC_8(VAR_3, 0, VAR_1);
 FUNC_8(VAR_3, 0, VAR_0);
 FUNC_8(VAR_3, 0, VAR_2);


 VAR_5 = 0;
 for (VAR_6 = 0; VAR_6 < VAR_4->num_cs; VAR_6++) {
  const struct mbus_dram_window *VAR_7 = VAR_4->cs + VAR_6;

  FUNC_8(VAR_3, VAR_7->base & 0xffff0000,
        FUNC_3(VAR_6));
  FUNC_8(VAR_3, 0, FUNC_5(VAR_6));
  FUNC_8(VAR_3,
        ((VAR_7->size - 1) & 0xffff0000) |
        (VAR_7->mbus_attr << 8) |
        (VAR_4->mbus_dram_target_id << 4) | 1,
        FUNC_4(VAR_6));

  VAR_5 += VAR_7->size;
 }


 if ((VAR_5 & (VAR_5 - 1)) != 0)
  VAR_5 = 1 << FUNC_6(VAR_5);


 FUNC_8(VAR_3, VAR_4->cs[0].base, FUNC_2(1));
 FUNC_8(VAR_3, 0, FUNC_1(1));
 FUNC_8(VAR_3, ((VAR_5 - 1) & 0xffff0000) | 1,
       FUNC_0(1));
}
