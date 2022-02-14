
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int wait_queue_head_t ;
struct kernfs_node {int flags; int rb; int active; } ;
struct TYPE_2__ {int deactivate_waitq; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_1 (int *) ;
 int VAR_3 ;
 int FUNC_2 (int) ;
 int FUNC_3 (struct kernfs_node*) ;
 scalar_t__ FUNC_4 (int *) ;
 int FUNC_5 (int *,int *) ;
 int FUNC_6 (struct kernfs_node*) ;
 int VAR_4 ;
 TYPE_1__* FUNC_7 (struct kernfs_node*) ;
 int FUNC_8 (struct kernfs_node*) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int *,int *,int ) ;
 int FUNC_12 () ;
 int VAR_5 ;

bool FUNC_13(struct kernfs_node *VAR_6)
{
 bool VAR_7;

 FUNC_9(&VAR_4);
 FUNC_6(VAR_6);
 if (!(VAR_6->flags & VAR_0)) {
  VAR_6->flags |= VAR_0;
  FUNC_3(VAR_6);
  VAR_6->flags |= VAR_1;
  VAR_7 = 1;
 } else {
  wait_queue_head_t *VAR_8 = &FUNC_7(VAR_6)->deactivate_waitq;
  FUNC_0(VAR_5);

  while (1) {
   FUNC_11(VAR_8, &VAR_5, VAR_3);

   if ((VAR_6->flags & VAR_1) &&
       FUNC_4(&VAR_6->active) == VAR_2)
    break;

   FUNC_10(&VAR_4);
   FUNC_12();
   FUNC_9(&VAR_4);
  }
  FUNC_5(VAR_8, &VAR_5);
  FUNC_2(!FUNC_1(&VAR_6->rb));
  VAR_7 = 0;
 }





 FUNC_8(VAR_6);

 FUNC_10(&VAR_4);
 return VAR_7;
}
