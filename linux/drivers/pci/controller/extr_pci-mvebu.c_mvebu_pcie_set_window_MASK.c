
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mvebu_pcie_window {scalar_t__ base; scalar_t__ remap; scalar_t__ size; } ;
struct mvebu_pcie_port {int dummy; } ;


 int FUNC_0 (struct mvebu_pcie_port*,unsigned int,unsigned int,scalar_t__,scalar_t__,scalar_t__) ;
 int FUNC_1 (struct mvebu_pcie_port*,scalar_t__,scalar_t__) ;

__attribute__((used)) static void FUNC_2(struct mvebu_pcie_port *VAR_0,
      unsigned int VAR_1, unsigned int VAR_2,
      const struct mvebu_pcie_window *VAR_3,
      struct mvebu_pcie_window *VAR_4)
{
 if (VAR_3->base == VAR_4->base && VAR_3->remap == VAR_4->remap &&
     VAR_3->size == VAR_4->size)
  return;

 if (VAR_4->size != 0) {
  FUNC_1(VAR_0, VAR_4->base, VAR_4->size);
  VAR_4->size = 0;
  VAR_4->base = 0;






 }

 if (VAR_3->size == 0)
  return;

 FUNC_0(VAR_0, VAR_1, VAR_2, VAR_3->base,
          VAR_3->size, VAR_3->remap);
 *VAR_4 = *VAR_3;
}
