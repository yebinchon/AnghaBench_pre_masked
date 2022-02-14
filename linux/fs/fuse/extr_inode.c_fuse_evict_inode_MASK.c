
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct inode {int i_mode; TYPE_1__* i_sb; int i_data; } ;
struct fuse_inode {int queued_writes; int write_files; int * forget; int nlookup; int nodeid; } ;
struct fuse_conn {int dummy; } ;
struct TYPE_2__ {int s_flags; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int) ;
 int FUNC_2 (struct inode*) ;
 int FUNC_3 (struct fuse_conn*,int *,int ,int ) ;
 struct fuse_conn* FUNC_4 (struct inode*) ;
 struct fuse_inode* FUNC_5 (struct inode*) ;
 int FUNC_6 (struct inode*) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;

__attribute__((used)) static void FUNC_9(struct inode *VAR_1)
{
 struct fuse_inode *VAR_2 = FUNC_5(VAR_1);

 FUNC_8(&VAR_1->i_data);
 FUNC_2(VAR_1);
 if (VAR_1->i_sb->s_flags & VAR_0) {
  struct fuse_conn *VAR_3 = FUNC_4(VAR_1);
  FUNC_3(VAR_3, VAR_2->forget, VAR_2->nodeid, VAR_2->nlookup);
  VAR_2->forget = ((void*)0);
 }
 if (FUNC_0(VAR_1->i_mode) && !FUNC_6(VAR_1)) {
  FUNC_1(!FUNC_7(&VAR_2->write_files));
  FUNC_1(!FUNC_7(&VAR_2->queued_writes));
 }
}
