
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct onenand_chip {int writesize; } ;
struct mtd_info {int oobsize; struct onenand_chip* priv; } ;
struct TYPE_2__ {unsigned char* page_buf; unsigned char* oob_buf; } ;


 int FUNC_0 (struct onenand_chip*) ;
 int VAR_0 ;
 TYPE_1__* VAR_1 ;

__attribute__((used)) static unsigned char *FUNC_1(struct mtd_info *VAR_2, int VAR_3)
{
 struct onenand_chip *VAR_4 = VAR_2->priv;
 int VAR_5 = FUNC_0(VAR_4);
 unsigned char *VAR_6;

 if (VAR_3 == VAR_0) {
  VAR_6 = VAR_1->page_buf;
  if (VAR_5 == 1)
   VAR_6 += VAR_4->writesize;
 } else {
  VAR_6 = VAR_1->oob_buf;
  if (VAR_5 == 1)
   VAR_6 += VAR_2->oobsize;
 }

 return VAR_6;
}
