
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct nand_chip {int options; int controller; } ;
struct mtd_info {int writesize; } ;
struct TYPE_2__ {int* addrs; int naddrs; } ;
struct atmel_hsmc_nand_controller {TYPE_1__ op; } ;


 int VAR_0 ;
 struct mtd_info* FUNC_0 (struct nand_chip*) ;
 struct atmel_hsmc_nand_controller* FUNC_1 (int ) ;

__attribute__((used)) static void FUNC_2(struct nand_chip *VAR_1, int VAR_2, int VAR_3)
{
 struct mtd_info *VAR_4 = FUNC_0(VAR_1);
 struct atmel_hsmc_nand_controller *VAR_5;

 VAR_5 = FUNC_1(VAR_1->controller);

 if (VAR_3 >= 0) {
  VAR_5->op.addrs[VAR_5->op.naddrs++] = VAR_3;




  if (VAR_4->writesize > 512)
   VAR_5->op.addrs[VAR_5->op.naddrs++] = VAR_3 >> 8;
 }

 if (VAR_2 >= 0) {
  VAR_5->op.addrs[VAR_5->op.naddrs++] = VAR_2;
  VAR_5->op.addrs[VAR_5->op.naddrs++] = VAR_2 >> 8;

  if (VAR_1->options & VAR_0)
   VAR_5->op.addrs[VAR_5->op.naddrs++] = VAR_2 >> 16;
 }
}
