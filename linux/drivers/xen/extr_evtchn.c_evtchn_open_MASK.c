
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct per_user_data {int restrict_domid; int ring_prod_lock; int ring_cons_mutex; int bind_mutex; int evtchn_wait; int * name; } ;
struct inode {int dummy; } ;
struct file {struct per_user_data* private_data; } ;
struct TYPE_2__ {int comm; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 TYPE_1__* VAR_3 ;
 int FUNC_0 (int *) ;
 int * FUNC_1 (int ,char*,int ) ;
 int FUNC_2 (struct per_user_data*) ;
 struct per_user_data* FUNC_3 (int,int ) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (struct inode*,struct file*) ;

__attribute__((used)) static int FUNC_7(struct inode *VAR_4, struct file *VAR_5)
{
 struct per_user_data *VAR_6;

 VAR_6 = FUNC_3(sizeof(*VAR_6), VAR_1);
 if (VAR_6 == ((void*)0))
  return -VAR_0;

 VAR_6->name = FUNC_1(VAR_1, "evtchn:%s", VAR_3->comm);
 if (VAR_6->name == ((void*)0)) {
  FUNC_2(VAR_6);
  return -VAR_0;
 }

 FUNC_0(&VAR_6->evtchn_wait);

 FUNC_4(&VAR_6->bind_mutex);
 FUNC_4(&VAR_6->ring_cons_mutex);
 FUNC_5(&VAR_6->ring_prod_lock);

 VAR_6->restrict_domid = VAR_2;

 VAR_5->private_data = VAR_6;

 return FUNC_6(VAR_4, VAR_5);
}
