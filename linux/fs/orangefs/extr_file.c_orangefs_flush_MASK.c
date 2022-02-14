
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct inode {int i_state; int i_lock; } ;
struct file {TYPE_1__* f_mapping; int * private_data; } ;
typedef int fl_owner_t ;
struct TYPE_2__ {struct inode* host; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_1__*,int ,int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct inode*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static int FUNC_5(struct file *VAR_2, fl_owner_t VAR_3)
{
 struct inode *VAR_4 = VAR_2->f_mapping->host;
 int VAR_5;

 FUNC_1(VAR_2->private_data);
 VAR_2->private_data = ((void*)0);

 if (VAR_4->i_state & VAR_0) {
  FUNC_3(&VAR_4->i_lock);
  VAR_4->i_state &= ~VAR_0;
  FUNC_4(&VAR_4->i_lock);
  FUNC_2(VAR_4);
 }

 VAR_5 = FUNC_0(VAR_2->f_mapping, 0, VAR_1);
 if (VAR_5 > 0)
  return 0;
 else
  return VAR_5;
}
