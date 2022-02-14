
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct path {int dentry; } ;
struct nameidata {unsigned int seq; int flags; struct inode* inode; struct path path; } ;
struct inode {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct nameidata*,struct path*,struct inode**,unsigned int*) ;
 struct inode* FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct path*,struct nameidata*) ;
 int FUNC_4 (struct path*,struct nameidata*) ;
 scalar_t__ FUNC_5 (int) ;

__attribute__((used)) static int FUNC_6(struct nameidata *VAR_2)
{
 struct path VAR_3 = VAR_2->path;
 struct inode *VAR_4 = VAR_2->inode;
 unsigned VAR_5 = VAR_2->seq;
 int VAR_6;

 if (VAR_2->flags & VAR_1) {





  if (FUNC_5(!FUNC_0(VAR_2, &VAR_3, &VAR_4, &VAR_5)))
   return -VAR_0;
 } else {
  FUNC_2(VAR_3.dentry);
  VAR_6 = FUNC_3(&VAR_3, VAR_2);
  if (FUNC_5(VAR_6 < 0))
   return VAR_6;
  VAR_4 = FUNC_1(VAR_3.dentry);
  VAR_5 = 0;
 }
 FUNC_4(&VAR_3, VAR_2);
 VAR_2->inode = VAR_4;
 VAR_2->seq = VAR_5;
 return 0;
}
