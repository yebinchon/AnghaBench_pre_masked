
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_4__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct vchiq_state {int dummy; } ;
struct inode {int dummy; } ;
struct file {TYPE_1__* private_data; } ;
typedef TYPE_1__* VCHIQ_INSTANCE_T ;
struct TYPE_6__ {int tgid; } ;
struct TYPE_5__ {int bulk_waiter_list; int bulk_waiter_list_mutex; int completion_mutex; int remove_event; int insert_event; int pid; struct vchiq_state* state; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *) ;
 TYPE_4__* VAR_3 ;
 int FUNC_1 (int *) ;
 TYPE_1__* FUNC_2 (int,int ) ;
 int FUNC_3 (int *) ;
 int VAR_4 ;
 int FUNC_4 (TYPE_1__*) ;
 struct vchiq_state* FUNC_5 () ;
 int FUNC_6 (int ,char*) ;
 int FUNC_7 (int ,char*) ;

__attribute__((used)) static int FUNC_8(struct inode *VAR_5, struct file *VAR_6)
{
 struct vchiq_state *VAR_7 = FUNC_5();
 VCHIQ_INSTANCE_T VAR_8;

 FUNC_7(VAR_4, "vchiq_open");

 if (!VAR_7) {
  FUNC_6(VAR_4,
    "vchiq has no connection to VideoCore");
  return -VAR_1;
 }

 VAR_8 = FUNC_2(sizeof(*VAR_8), VAR_2);
 if (!VAR_8)
  return -VAR_0;

 VAR_8->state = VAR_7;
 VAR_8->pid = VAR_3->tgid;

 FUNC_4(VAR_8);

 FUNC_1(&VAR_8->insert_event);
 FUNC_1(&VAR_8->remove_event);
 FUNC_3(&VAR_8->completion_mutex);
 FUNC_3(&VAR_8->bulk_waiter_list_mutex);
 FUNC_0(&VAR_8->bulk_waiter_list);

 VAR_6->private_data = VAR_8;

 return 0;
}
