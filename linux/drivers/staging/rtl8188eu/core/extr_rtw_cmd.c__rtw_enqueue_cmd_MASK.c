
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cmd_obj {int list; } ;
struct __queue {int lock; int queue; } ;


 int VAR_0 ;
 int FUNC_0 (int *,int *) ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (int *,unsigned long) ;

__attribute__((used)) static int FUNC_3(struct __queue *VAR_1, struct cmd_obj *VAR_2)
{
 unsigned long VAR_3;

 if (!VAR_2)
  goto exit;

 FUNC_1(&VAR_1->lock, VAR_3);

 FUNC_0(&VAR_2->list, &VAR_1->queue);

 FUNC_2(&VAR_1->lock, VAR_3);

exit:

 return VAR_0;
}
