
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct w1_slave {TYPE_1__* master; int flags; } ;
struct TYPE_2__ {int list_mutex; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ,int *) ;
 int FUNC_3 (int ,int *) ;
 int FUNC_4 (struct w1_slave*) ;

int FUNC_5(struct w1_slave *VAR_2)
{

 int VAR_3;
 FUNC_0(&VAR_2->master->list_mutex);
 VAR_3 = !FUNC_3(VAR_1, &VAR_2->flags);
 FUNC_2(VAR_1, &VAR_2->flags);
 FUNC_1(&VAR_2->master->list_mutex);

 if (VAR_3)
  VAR_3 = !FUNC_4(VAR_2);
 return VAR_3 ? 0 : -VAR_0;
}
