
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct onenand_chip {int page_shift; scalar_t__ base; int (* write_word ) (int,scalar_t__) ;TYPE_1__* bufferram; } ;
struct mtd_info {struct onenand_chip* priv; } ;
typedef int loff_t ;
struct TYPE_2__ {int blockpage; } ;


 unsigned int FUNC_0 (struct onenand_chip*) ;
 scalar_t__ FUNC_1 (struct onenand_chip*) ;
 scalar_t__ FUNC_2 (struct onenand_chip*) ;
 unsigned int FUNC_3 (struct onenand_chip*) ;
 scalar_t__ VAR_0 ;
 int FUNC_4 (struct onenand_chip*) ;
 int FUNC_5 (struct onenand_chip*,int) ;
 int FUNC_6 (struct onenand_chip*,int) ;
 int FUNC_7 (struct mtd_info*,int) ;
 int FUNC_8 (int,scalar_t__) ;

__attribute__((used)) static int FUNC_9(struct mtd_info *VAR_1, loff_t VAR_2)
{
 struct onenand_chip *VAR_3 = VAR_1->priv;
 int VAR_4, VAR_5 = 0;
 unsigned int VAR_6;

 if (FUNC_1(VAR_3))
  VAR_4 = FUNC_7(VAR_1, VAR_2);
 else
  VAR_4 = (int) (VAR_2 >> VAR_3->page_shift);


 VAR_6 = FUNC_0(VAR_3);
 if (VAR_3->bufferram[VAR_6].blockpage == VAR_4)
  VAR_5 = 1;
 else {

  VAR_6 = FUNC_3(VAR_3);
  if (VAR_3->bufferram[VAR_6].blockpage == VAR_4) {
   FUNC_4(VAR_3);
   VAR_5 = 1;
  }
 }

 if (VAR_5 && FUNC_2(VAR_3)) {

  int VAR_7 = FUNC_5(VAR_3, VAR_2);
  int VAR_8 = FUNC_6(VAR_3, VAR_7);
  VAR_3->write_word(VAR_8, VAR_3->base + VAR_0);
 }

 return VAR_5;
}
