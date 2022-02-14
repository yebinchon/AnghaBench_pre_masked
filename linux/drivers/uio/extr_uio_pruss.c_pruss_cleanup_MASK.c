
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct uio_pruss_dev {int pruss_clk; struct uio_pruss_dev* info; scalar_t__ sram_vaddr; int sram_pool; int ddr_paddr; scalar_t__ ddr_vaddr; int prussio_vaddr; struct uio_pruss_dev* name; } ;
struct uio_info {int pruss_clk; struct uio_info* info; scalar_t__ sram_vaddr; int sram_pool; int ddr_paddr; scalar_t__ ddr_vaddr; int prussio_vaddr; struct uio_info* name; } ;
struct device {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct device*,int ,scalar_t__,int ) ;
 int VAR_1 ;
 int FUNC_3 (int ,scalar_t__,int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (struct uio_pruss_dev*) ;
 int VAR_2 ;
 int FUNC_6 (struct uio_pruss_dev*) ;

__attribute__((used)) static void FUNC_7(struct device *VAR_3, struct uio_pruss_dev *VAR_4)
{
 int VAR_5;
 struct uio_info *VAR_6 = VAR_4->info;

 for (VAR_5 = 0; VAR_5 < VAR_0; VAR_5++, VAR_6++) {
  FUNC_6(VAR_6);
  FUNC_5(VAR_6->name);
 }
 FUNC_4(VAR_4->prussio_vaddr);
 if (VAR_4->ddr_vaddr) {
  FUNC_2(VAR_3, VAR_1, VAR_4->ddr_vaddr,
   VAR_4->ddr_paddr);
 }
 if (VAR_4->sram_vaddr)
  FUNC_3(VAR_4->sram_pool,
         VAR_4->sram_vaddr,
         VAR_2);
 FUNC_5(VAR_4->info);
 FUNC_0(VAR_4->pruss_clk);
 FUNC_1(VAR_4->pruss_clk);
 FUNC_5(VAR_4);
}
