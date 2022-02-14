
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct onenand_chip {scalar_t__ state; int chip_lock; int wq; int (* disable ) (struct mtd_info*) ;} ;
struct mtd_info {struct onenand_chip* priv; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct mtd_info*) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static void FUNC_4(struct mtd_info *VAR_2)
{
 struct onenand_chip *VAR_3 = VAR_2->priv;

 if (VAR_3->state != VAR_0 && VAR_3->disable)
  VAR_3->disable(VAR_2);

 FUNC_0(&VAR_3->chip_lock);
 VAR_3->state = VAR_1;
 FUNC_3(&VAR_3->wq);
 FUNC_1(&VAR_3->chip_lock);
}
