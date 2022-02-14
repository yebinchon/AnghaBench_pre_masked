
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct key {int dummy; } ;
struct file_lock {int fl_type; scalar_t__ fl_pid; int fl_end; scalar_t__ fl_start; } ;
struct file {int dummy; } ;
struct TYPE_2__ {int lock_count; } ;
struct afs_vnode {scalar_t__ lock_state; TYPE_1__ status; } ;


 struct afs_vnode* FUNC_0 (int ) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (char*,int,int ) ;
 int FUNC_4 (struct afs_vnode*,struct key*,int,int *) ;
 struct key* FUNC_5 (struct file*) ;
 int FUNC_6 (struct file*) ;
 int FUNC_7 (struct file*,struct file_lock*) ;

__attribute__((used)) static int FUNC_8(struct file *VAR_6, struct file_lock *VAR_7)
{
 struct afs_vnode *VAR_8 = FUNC_0(FUNC_6(VAR_6));
 struct key *VAR_9 = FUNC_5(VAR_6);
 int VAR_10, VAR_11;

 FUNC_2("");

 if (VAR_8->lock_state == VAR_0)
  return -VAR_1;

 VAR_7->fl_type = VAR_3;


 FUNC_7(VAR_6, VAR_7);
 if (VAR_7->fl_type == VAR_3) {

  VAR_10 = FUNC_4(VAR_8, VAR_9, 0, ((void*)0));
  if (VAR_10 < 0)
   goto error;

  VAR_11 = FUNC_1(VAR_8->status.lock_count);
  if (VAR_11 != 0) {
   if (VAR_11 > 0)
    VAR_7->fl_type = VAR_2;
   else
    VAR_7->fl_type = VAR_4;
   VAR_7->fl_start = 0;
   VAR_7->fl_end = VAR_5;
   VAR_7->fl_pid = 0;
  }
 }

 VAR_10 = 0;
error:
 FUNC_3(" = %d [%hd]", VAR_10, VAR_7->fl_type);
 return VAR_10;
}
