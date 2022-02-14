
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sm_ftl {int mutex; int flush_work; int timer; } ;
struct mtd_blktrans_dev {struct sm_ftl* priv; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (struct sm_ftl*) ;

__attribute__((used)) static void FUNC_5(struct mtd_blktrans_dev *VAR_0)
{
 struct sm_ftl *VAR_1 = VAR_0->priv;

 FUNC_2(&VAR_1->mutex);
 FUNC_1(&VAR_1->timer);
 FUNC_0(&VAR_1->flush_work);
 FUNC_4(VAR_1);
 FUNC_3(&VAR_1->mutex);
}
