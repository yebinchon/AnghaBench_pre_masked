
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct slic_upr_list {int pending; int lock; int list; } ;
struct slic_upr {int list; } ;
struct slic_device {struct slic_upr_list upr_list; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *,int *) ;
 int FUNC_2 (struct slic_device*,struct slic_upr*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static void FUNC_5(struct slic_device *VAR_0, struct slic_upr *VAR_1)
{
 struct slic_upr_list *VAR_2 = &VAR_0->upr_list;
 bool VAR_3;

 FUNC_3(&VAR_2->lock);
 VAR_3 = VAR_2->pending;
 FUNC_0(&VAR_1->list);
 FUNC_1(&VAR_1->list, &VAR_2->list);
 VAR_2->pending = 1;
 FUNC_4(&VAR_2->lock);

 if (!VAR_3)
  FUNC_2(VAR_0, VAR_1);
}
