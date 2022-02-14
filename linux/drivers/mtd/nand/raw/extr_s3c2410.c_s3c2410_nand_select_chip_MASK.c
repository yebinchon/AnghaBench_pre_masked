
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct s3c2410_nand_mtd {TYPE_2__* set; struct s3c2410_nand_info* info; } ;
struct s3c2410_nand_info {unsigned long sel_bit; int sel_reg; TYPE_1__* platform; int device; } ;
struct nand_chip {int dummy; } ;
struct TYPE_4__ {int nr_chips; } ;
struct TYPE_3__ {int (* select_chip ) (TYPE_2__*,int) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,char*,int) ;
 struct s3c2410_nand_mtd* FUNC_1 (struct nand_chip*) ;
 unsigned long FUNC_2 (int ) ;
 int FUNC_3 (struct s3c2410_nand_info*,int ) ;
 int FUNC_4 (TYPE_2__*,int) ;
 int FUNC_5 (unsigned long,int ) ;

__attribute__((used)) static void FUNC_6(struct nand_chip *VAR_2, int VAR_3)
{
 struct s3c2410_nand_info *VAR_4;
 struct s3c2410_nand_mtd *VAR_5;
 unsigned long VAR_6;

 VAR_5 = FUNC_1(VAR_2);
 VAR_4 = VAR_5->info;

 if (VAR_3 != -1)
  FUNC_3(VAR_4, VAR_0);

 VAR_6 = FUNC_2(VAR_4->sel_reg);

 if (VAR_3 == -1) {
  VAR_6 |= VAR_4->sel_bit;
 } else {
  if (VAR_5->set != ((void*)0) && VAR_3 > VAR_5->set->nr_chips) {
   FUNC_0(VAR_4->device, "invalid chip %d\n", VAR_3);
   return;
  }

  if (VAR_4->platform != ((void*)0)) {
   if (VAR_4->platform->select_chip != ((void*)0))
    (VAR_4->platform->select_chip) (VAR_5->set, VAR_3);
  }

  VAR_6 &= ~VAR_4->sel_bit;
 }

 FUNC_5(VAR_6, VAR_4->sel_reg);

 if (VAR_3 == -1)
  FUNC_3(VAR_4, VAR_1);
}
