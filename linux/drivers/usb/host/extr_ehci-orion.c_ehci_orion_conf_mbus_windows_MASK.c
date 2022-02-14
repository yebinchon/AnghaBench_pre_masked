
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_hcd {int dummy; } ;
struct mbus_dram_window {int size; int mbus_attr; int base; } ;
struct mbus_dram_target_info {int num_cs; int mbus_dram_target_id; struct mbus_dram_window* cs; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int ,int) ;

__attribute__((used)) static void
FUNC_3(struct usb_hcd *VAR_0,
        const struct mbus_dram_target_info *VAR_1)
{
 int VAR_2;

 for (VAR_2 = 0; VAR_2 < 4; VAR_2++) {
  FUNC_2(FUNC_1(VAR_2), 0);
  FUNC_2(FUNC_0(VAR_2), 0);
 }

 for (VAR_2 = 0; VAR_2 < VAR_1->num_cs; VAR_2++) {
  const struct mbus_dram_window *VAR_3 = VAR_1->cs + VAR_2;

  FUNC_2(FUNC_1(VAR_2), ((VAR_3->size - 1) & 0xffff0000) |
     (VAR_3->mbus_attr << 8) |
     (VAR_1->mbus_dram_target_id << 4) | 1);
  FUNC_2(FUNC_0(VAR_2), VAR_3->base);
 }
}
