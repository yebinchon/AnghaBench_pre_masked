
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct onenand_chip {int erase_shift; } ;
typedef int loff_t ;


 int FUNC_0 (struct onenand_chip*) ;
 int FUNC_1 (struct onenand_chip*,int) ;

inline unsigned FUNC_2(struct onenand_chip *VAR_0, loff_t VAR_1)
{
 if (!FUNC_0(VAR_0))
  return VAR_1 >> VAR_0->erase_shift;
 return FUNC_1(VAR_0, VAR_1);
}
