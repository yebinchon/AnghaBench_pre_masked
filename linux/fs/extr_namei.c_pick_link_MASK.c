
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct path {scalar_t__ mnt; } ;
struct saved {unsigned int seq; int done; struct path link; } ;
struct TYPE_2__ {scalar_t__ mnt; int * dentry; } ;
struct nameidata {int flags; struct inode* link_inode; scalar_t__ depth; struct saved* stack; TYPE_1__ path; int total_link_count; } ;
struct inode {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (struct nameidata*) ;
 int FUNC_2 (struct nameidata*,struct path*,unsigned int) ;
 scalar_t__ FUNC_3 (int ) ;
 int FUNC_4 (scalar_t__) ;
 int FUNC_5 (struct nameidata*) ;
 int FUNC_6 (struct path*) ;
 int FUNC_7 (struct path*,struct nameidata*) ;
 int FUNC_8 () ;
 int FUNC_9 (struct nameidata*) ;
 scalar_t__ FUNC_10 (int) ;

__attribute__((used)) static int FUNC_11(struct nameidata *VAR_4, struct path *VAR_5,
       struct inode *VAR_6, unsigned VAR_7)
{
 int VAR_8;
 struct saved *VAR_9;
 if (FUNC_10(VAR_4->total_link_count++ >= VAR_3)) {
  FUNC_7(VAR_5, VAR_4);
  return -VAR_1;
 }
 if (!(VAR_4->flags & VAR_2)) {
  if (VAR_5->mnt == VAR_4->path.mnt)
   FUNC_4(VAR_5->mnt);
 }
 VAR_8 = FUNC_5(VAR_4);
 if (FUNC_10(VAR_8)) {
  if (VAR_8 == -VAR_0) {
   if (FUNC_10(!FUNC_2(VAR_4, VAR_5, VAR_7))) {
    FUNC_1(VAR_4);
    VAR_4->depth = 0;
    VAR_4->flags &= ~VAR_2;
    VAR_4->path.mnt = ((void*)0);
    VAR_4->path.dentry = ((void*)0);
    FUNC_8();
   } else if (FUNC_3(FUNC_9(VAR_4)) == 0)
    VAR_8 = FUNC_5(VAR_4);
  }
  if (VAR_8) {
   FUNC_6(VAR_5);
   return VAR_8;
  }
 }

 VAR_9 = VAR_4->stack + VAR_4->depth++;
 VAR_9->link = *VAR_5;
 FUNC_0(&VAR_9->done);
 VAR_4->link_inode = VAR_6;
 VAR_9->seq = VAR_7;
 return 1;
}
