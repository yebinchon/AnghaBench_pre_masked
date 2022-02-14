
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int kobj; } ;
struct tb_switch {int authorized; TYPE_2__* tb; TYPE_1__ dev; int key; } ;
struct TYPE_6__ {int lock; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 () ;
 int FUNC_4 (TYPE_2__*,struct tb_switch*) ;
 int FUNC_5 (TYPE_2__*,struct tb_switch*) ;
 int FUNC_6 (TYPE_2__*,struct tb_switch*) ;

__attribute__((used)) static int FUNC_7(struct tb_switch *VAR_2, unsigned int VAR_3)
{
 int VAR_4 = -VAR_0;

 if (!FUNC_1(&VAR_2->tb->lock))
  return FUNC_3();

 if (VAR_2->authorized)
  goto unlock;

 switch (VAR_3) {

 case 1:
  if (VAR_2->key)
   VAR_4 = FUNC_5(VAR_2->tb, VAR_2);
  else
   VAR_4 = FUNC_4(VAR_2->tb, VAR_2);
  break;


 case 2:
  if (VAR_2->key)
   VAR_4 = FUNC_6(VAR_2->tb, VAR_2);
  break;

 default:
  break;
 }

 if (!VAR_4) {
  VAR_2->authorized = VAR_3;

  FUNC_0(&VAR_2->dev.kobj, VAR_1);
 }

unlock:
 FUNC_2(&VAR_2->tb->lock);
 return VAR_4;
}
