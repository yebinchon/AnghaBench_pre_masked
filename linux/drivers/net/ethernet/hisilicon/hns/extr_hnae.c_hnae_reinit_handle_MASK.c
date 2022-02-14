
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct hnae_handle {int q_num; int * qs; TYPE_2__* dev; } ;
struct TYPE_4__ {TYPE_1__* ops; } ;
struct TYPE_3__ {int (* reset ) (struct hnae_handle*) ;} ;


 int FUNC_0 (int ) ;
 int FUNC_1 (struct hnae_handle*,int ,TYPE_2__*) ;
 int FUNC_2 (struct hnae_handle*) ;

int FUNC_3(struct hnae_handle *VAR_0)
{
 int VAR_1, VAR_2;
 int VAR_3;

 for (VAR_1 = 0; VAR_1 < VAR_0->q_num; VAR_1++)
  FUNC_0(VAR_0->qs[VAR_1]);

 if (VAR_0->dev->ops->reset)
  VAR_0->dev->ops->reset(VAR_0);

 for (VAR_1 = 0; VAR_1 < VAR_0->q_num; VAR_1++) {
  VAR_3 = FUNC_1(VAR_0, VAR_0->qs[VAR_1], VAR_0->dev);
  if (VAR_3)
   goto out_when_init_queue;
 }
 return 0;
out_when_init_queue:
 for (VAR_2 = VAR_1 - 1; VAR_2 >= 0; VAR_2--)
  FUNC_0(VAR_0->qs[VAR_2]);
 return VAR_3;
}
