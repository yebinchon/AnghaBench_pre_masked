
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct pnp_dev {TYPE_1__* protocol; int dev; int protocol_list; int global_list; int status; } ;
struct TYPE_2__ {int (* can_wakeup ) (struct pnp_dev*) ;int devices; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (int *,int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (struct pnp_dev*) ;
 int FUNC_6 (struct pnp_dev*) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_7 (struct pnp_dev*) ;

int FUNC_8(struct pnp_dev *VAR_3)
{
 int VAR_4;

 FUNC_6(VAR_3);
 VAR_3->status = VAR_0;

 FUNC_3(&VAR_2);

 FUNC_2(&VAR_3->global_list, &VAR_1);
 FUNC_2(&VAR_3->protocol_list, &VAR_3->protocol->devices);

 FUNC_4(&VAR_2);

 VAR_4 = FUNC_0(&VAR_3->dev);
 if (VAR_4)
  FUNC_5(VAR_3);
 else if (VAR_3->protocol->can_wakeup)
  FUNC_1(&VAR_3->dev,
    VAR_3->protocol->can_wakeup(VAR_3));

 return VAR_4;
}
