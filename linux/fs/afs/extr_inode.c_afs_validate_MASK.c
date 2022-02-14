
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct key {int dummy; } ;
struct TYPE_2__ {int vnode; int vid; } ;
struct afs_vnode {int validate_lock; int flags; int vfs_inode; TYPE_1__ fid; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (char*,...) ;
 int FUNC_1 (char*,int ,int ,int ,int ) ;
 int FUNC_2 (char*,...) ;
 int FUNC_3 (struct afs_vnode*) ;
 int FUNC_4 (struct afs_vnode*,struct key*,int,int *) ;
 int FUNC_5 (struct afs_vnode*) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (struct key*) ;
 int FUNC_9 () ;
 int FUNC_10 () ;
 int FUNC_11 (int ,int *) ;
 scalar_t__ FUNC_12 (int ,int *) ;
 scalar_t__ FUNC_13 (int ,int *) ;
 int FUNC_14 (int *) ;

int FUNC_15(struct afs_vnode *VAR_5, struct key *VAR_6)
{
 bool VAR_7;
 int VAR_8;

 FUNC_1("{v={%llx:%llu} fl=%lx},%x",
        VAR_5->fid.vid, VAR_5->fid.vnode, VAR_5->flags,
        FUNC_8(VAR_6));

 FUNC_9();
 VAR_7 = FUNC_3(VAR_5);
 FUNC_10();

 if (FUNC_13(VAR_1, &VAR_5->flags))
  FUNC_6(&VAR_5->vfs_inode);

 if (VAR_7)
  goto valid;

 FUNC_7(&VAR_5->validate_lock);





 if (!FUNC_13(VAR_0, &VAR_5->flags)) {
  FUNC_0("not promised");
  VAR_8 = FUNC_4(VAR_5, VAR_6, 0, ((void*)0));
  if (VAR_8 < 0) {
   if (VAR_8 == -VAR_3) {
    FUNC_11(VAR_1, &VAR_5->flags);
    VAR_8 = -VAR_4;
   }
   goto error_unlock;
  }
  FUNC_0("new promise [fl=%lx]", VAR_5->flags);
 }

 if (FUNC_13(VAR_1, &VAR_5->flags)) {
  FUNC_0("file already deleted");
  VAR_8 = -VAR_4;
  goto error_unlock;
 }



 if (FUNC_12(VAR_2, &VAR_5->flags))
  FUNC_5(VAR_5);
 FUNC_14(&VAR_5->validate_lock);
valid:
 FUNC_2(" = 0");
 return 0;

error_unlock:
 FUNC_14(&VAR_5->validate_lock);
 FUNC_2(" = %d", VAR_8);
 return VAR_8;
}
