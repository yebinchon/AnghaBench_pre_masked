
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct onenand_chip {unsigned int chipsize; unsigned int erase_shift; } ;
struct mtd_info {struct onenand_chip* priv; } ;
struct device {int dummy; } ;
struct TYPE_5__ {unsigned int (* mem_addr ) (unsigned int,int ,int ) ;TYPE_1__* pdev; } ;
struct TYPE_4__ {struct device dev; } ;


 int FUNC_0 (TYPE_2__*,unsigned int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (struct device*,char*,unsigned int) ;
 TYPE_2__* VAR_3 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int,int ) ;
 unsigned int FUNC_5 (unsigned int,int ,int ) ;

__attribute__((used)) static void FUNC_6(struct mtd_info *VAR_4)
{
 struct onenand_chip *VAR_5 = VAR_4->priv;
 struct device *VAR_6 = &VAR_3->pdev->dev;
 unsigned int VAR_7, VAR_8;
 int VAR_9;

 VAR_8 = VAR_5->chipsize >> VAR_5->erase_shift;

 for (VAR_7 = 0; VAR_7 < VAR_8; VAR_7++) {
  unsigned int VAR_10 = VAR_3->mem_addr(VAR_7, 0, 0);
  VAR_9 = FUNC_2(FUNC_0(VAR_3, VAR_10));

  if (FUNC_3(VAR_1) & VAR_2) {
   FUNC_1(VAR_6, "block %d is write-protected!\n", VAR_7);
   FUNC_4(VAR_2, VAR_0);
  }
 }
}
