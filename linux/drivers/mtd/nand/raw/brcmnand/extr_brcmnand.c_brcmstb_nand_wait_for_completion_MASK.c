
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nand_chip {int dummy; } ;
struct mtd_info {scalar_t__ oops_panic_write; } ;
struct brcmnand_host {struct brcmnand_controller* ctrl; } ;
struct brcmnand_controller {int done; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct brcmnand_controller*,int ,int ,int ) ;
 int FUNC_1 (struct brcmnand_controller*) ;
 unsigned long FUNC_2 (int ) ;
 struct brcmnand_host* FUNC_3 (struct nand_chip*) ;
 struct mtd_info* FUNC_4 (struct nand_chip*) ;
 int FUNC_5 (int *,unsigned long) ;

__attribute__((used)) static bool FUNC_6(struct nand_chip *VAR_2)
{
 struct brcmnand_host *VAR_3 = FUNC_3(VAR_2);
 struct brcmnand_controller *VAR_4 = VAR_3->ctrl;
 struct mtd_info *VAR_5 = FUNC_4(VAR_2);
 bool VAR_6 = 0;
 int VAR_7;

 if (VAR_5->oops_panic_write) {

  FUNC_1(VAR_4);
  VAR_7 = FUNC_0(VAR_4, VAR_0,
            VAR_0, 0);
  VAR_6 = (VAR_7 < 0) ? 1 : 0;
 } else {
  unsigned long VAR_8 = FUNC_2(
      VAR_1);

  VAR_7 = FUNC_5(&VAR_4->done, VAR_8);
  VAR_6 = (VAR_7 <= 0) ? 1 : 0;
 }

 return VAR_6;
}
