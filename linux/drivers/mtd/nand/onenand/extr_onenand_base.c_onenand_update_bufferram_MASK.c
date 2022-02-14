
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct onenand_chip {int page_shift; TYPE_1__* bufferram; } ;
struct mtd_info {struct onenand_chip* priv; } ;
typedef int loff_t ;
struct TYPE_2__ {int blockpage; } ;


 unsigned int FUNC_0 (struct onenand_chip*) ;
 scalar_t__ FUNC_1 (struct onenand_chip*) ;
 unsigned int FUNC_2 (struct onenand_chip*) ;
 int FUNC_3 (struct mtd_info*,int) ;

__attribute__((used)) static void FUNC_4(struct mtd_info *VAR_0, loff_t VAR_1,
  int VAR_2)
{
 struct onenand_chip *VAR_3 = VAR_0->priv;
 int VAR_4;
 unsigned int VAR_5;

 if (FUNC_1(VAR_3))
  VAR_4 = FUNC_3(VAR_0, VAR_1);
 else
  VAR_4 = (int) (VAR_1 >> VAR_3->page_shift);


 VAR_5 = FUNC_2(VAR_3);
 if (VAR_3->bufferram[VAR_5].blockpage == VAR_4)
  VAR_3->bufferram[VAR_5].blockpage = -1;


 VAR_5 = FUNC_0(VAR_3);
 if (VAR_2)
  VAR_3->bufferram[VAR_5].blockpage = VAR_4;
 else
  VAR_3->bufferram[VAR_5].blockpage = -1;
}
