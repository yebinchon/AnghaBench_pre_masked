
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sm_ftl {int mutex; } ;
struct mtd_blktrans_dev {struct sm_ftl* priv; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct sm_ftl*) ;

__attribute__((used)) static int FUNC_3(struct mtd_blktrans_dev *VAR_0)
{
 struct sm_ftl *VAR_1 = VAR_0->priv;
 int VAR_2;

 FUNC_0(&VAR_1->mutex);
 VAR_2 = FUNC_2(VAR_1);
 FUNC_1(&VAR_1->mutex);
 return VAR_2;
}
