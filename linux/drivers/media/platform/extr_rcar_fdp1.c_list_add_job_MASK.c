
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct list_head {int dummy; } ;
struct fdp1_job {int list; } ;
struct fdp1_dev {int irqlock; } ;


 int FUNC_0 (int *,struct list_head*) ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (int *,unsigned long) ;

__attribute__((used)) static void FUNC_3(struct fdp1_dev *VAR_0,
    struct list_head *VAR_1,
    struct fdp1_job *VAR_2)
{
 unsigned long VAR_3;

 FUNC_1(&VAR_0->irqlock, VAR_3);
 FUNC_0(&VAR_2->list, VAR_1);
 FUNC_2(&VAR_0->irqlock, VAR_3);
}
