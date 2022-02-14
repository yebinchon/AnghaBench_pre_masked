
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cmd_obj {int list; } ;
struct __queue {int lock; int queue; } ;
typedef int _irqL ;


 int VAR_0 ;
 int FUNC_0 (int *,int *) ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (int *,int ) ;

int FUNC_3(struct __queue *VAR_1, struct cmd_obj *VAR_2)
{
 _irqL VAR_3;

 if (VAR_2 == ((void*)0))
  goto exit;


 FUNC_1(&VAR_1->lock, VAR_3);

 FUNC_0(&VAR_2->list, &VAR_1->queue);


 FUNC_2(&VAR_1->lock, VAR_3);

exit:
 return VAR_0;
}
