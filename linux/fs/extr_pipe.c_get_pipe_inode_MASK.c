
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct pipe_inode_info {int files; int readers; int writers; } ;
struct inode {int i_mode; int i_ctime; int i_mtime; int i_atime; int i_gid; int i_uid; int i_state; int * i_fop; struct pipe_inode_info* i_pipe; int i_ino; } ;
struct TYPE_2__ {int mnt_sb; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct pipe_inode_info* FUNC_0 () ;
 int FUNC_1 () ;
 int FUNC_2 () ;
 int FUNC_3 (struct inode*) ;
 int FUNC_4 () ;
 int FUNC_5 (struct inode*) ;
 struct inode* FUNC_6 (int ) ;
 TYPE_1__* VAR_4 ;
 int VAR_5 ;

__attribute__((used)) static struct inode * FUNC_7(void)
{
 struct inode *VAR_6 = FUNC_6(VAR_4->mnt_sb);
 struct pipe_inode_info *VAR_7;

 if (!VAR_6)
  goto fail_inode;

 VAR_6->i_ino = FUNC_4();

 VAR_7 = FUNC_0();
 if (!VAR_7)
  goto fail_iput;

 VAR_6->i_pipe = VAR_7;
 VAR_7->files = 2;
 VAR_7->readers = VAR_7->writers = 1;
 VAR_6->i_fop = &VAR_5;







 VAR_6->i_state = VAR_0;
 VAR_6->i_mode = VAR_1 | VAR_2 | VAR_3;
 VAR_6->i_uid = FUNC_2();
 VAR_6->i_gid = FUNC_1();
 VAR_6->i_atime = VAR_6->i_mtime = VAR_6->i_ctime = FUNC_3(VAR_6);

 return VAR_6;

fail_iput:
 FUNC_5(VAR_6);

fail_inode:
 return ((void*)0);
}
