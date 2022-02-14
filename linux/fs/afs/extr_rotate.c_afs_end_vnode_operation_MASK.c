
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct afs_net {int dummy; } ;
struct TYPE_4__ {int abort_code; } ;
struct afs_fs_cursor {int error; TYPE_2__ ac; int server_list; int cbi; TYPE_1__* vnode; } ;
struct TYPE_3__ {int io_lock; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct afs_fs_cursor*) ;
 int FUNC_2 (TYPE_2__*) ;
 int FUNC_3 (struct afs_net*,int ) ;
 int FUNC_4 (struct afs_net*,int ) ;
 struct afs_net* FUNC_5 (TYPE_1__*) ;
 int FUNC_6 (int *) ;

int FUNC_7(struct afs_fs_cursor *VAR_5)
{
 struct afs_net *VAR_6 = FUNC_5(VAR_5->vnode);

 if (VAR_5->error == -VAR_2 ||
     VAR_5->error == -VAR_0 ||
     VAR_5->error == -VAR_4 ||
     VAR_5->error == -VAR_3)
  FUNC_1(VAR_5);

 FUNC_6(&VAR_5->vnode->io_lock);

 FUNC_2(&VAR_5->ac);
 FUNC_3(VAR_6, VAR_5->cbi);
 FUNC_4(VAR_6, VAR_5->server_list);

 if (VAR_5->error == -VAR_1)
  VAR_5->error = FUNC_0(VAR_5->ac.abort_code);

 return VAR_5->error;
}
