
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct onenand_chip {int writesize; } ;
struct mtd_info {int oobsize; struct onenand_chip* priv; } ;


 scalar_t__ FUNC_0 (struct onenand_chip*) ;
 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static inline int FUNC_1(struct mtd_info *VAR_2, int VAR_3)
{
 struct onenand_chip *VAR_4 = VAR_2->priv;

 if (FUNC_0(VAR_4)) {
  if (VAR_3 == VAR_0)
   return VAR_4->writesize;
  if (VAR_3 == VAR_1)
   return VAR_2->oobsize;
 }

 return 0;
}
