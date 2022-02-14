
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct path {TYPE_1__* dentry; } ;
struct nameidata {int flags; unsigned int seq; struct inode* inode; scalar_t__ depth; } ;
struct inode {int dummy; } ;
struct TYPE_2__ {int d_seq; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (TYPE_1__*) ;
 scalar_t__ FUNC_1 (int) ;
 int FUNC_2 (struct path*,struct nameidata*) ;
 int FUNC_3 (struct nameidata*,struct path*,struct inode*,unsigned int) ;
 int FUNC_4 (struct nameidata*) ;
 scalar_t__ FUNC_5 (int *,unsigned int) ;

__attribute__((used)) static inline int FUNC_6(struct nameidata *VAR_5, struct path *VAR_6,
       int VAR_7, struct inode *VAR_8, unsigned VAR_9)
{
 if (!(VAR_7 & VAR_4) && VAR_5->depth)
  FUNC_4(VAR_5);
 if (FUNC_1(!FUNC_0(VAR_6->dentry)) ||
    !(VAR_7 & VAR_3 || VAR_5->flags & VAR_1)) {

  FUNC_2(VAR_6, VAR_5);
  VAR_5->inode = VAR_8;
  VAR_5->seq = VAR_9;
  return 0;
 }

 if (VAR_5->flags & VAR_2) {
  if (FUNC_5(&VAR_6->dentry->d_seq, VAR_9))
   return -VAR_0;
 }
 return FUNC_3(VAR_5, VAR_6, VAR_8, VAR_9);
}
