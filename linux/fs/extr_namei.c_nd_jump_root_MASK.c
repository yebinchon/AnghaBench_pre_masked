
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {struct dentry* dentry; } ;
struct nameidata {int flags; TYPE_1__ path; int inode; TYPE_1__ root; int seq; int root_seq; } ;
struct dentry {int d_inode; int d_seq; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (int *,int ) ;
 scalar_t__ FUNC_3 (int ) ;

__attribute__((used)) static int FUNC_4(struct nameidata *VAR_3)
{
 if (VAR_3->flags & VAR_2) {
  struct dentry *VAR_4;
  VAR_3->path = VAR_3->root;
  VAR_4 = VAR_3->path.dentry;
  VAR_3->inode = VAR_4->d_inode;
  VAR_3->seq = VAR_3->root_seq;
  if (FUNC_3(FUNC_2(&VAR_4->d_seq, VAR_3->seq)))
   return -VAR_0;
 } else {
  FUNC_1(&VAR_3->path);
  VAR_3->path = VAR_3->root;
  FUNC_0(&VAR_3->path);
  VAR_3->inode = VAR_3->path.dentry->d_inode;
 }
 VAR_3->flags |= VAR_1;
 return 0;
}
