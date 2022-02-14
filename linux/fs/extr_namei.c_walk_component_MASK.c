
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct path {int dentry; int mnt; } ;
struct TYPE_2__ {int mnt; int dentry; } ;
struct nameidata {scalar_t__ last_type; TYPE_1__ path; int flags; int last; scalar_t__ depth; } ;
struct inode {int dummy; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (int ) ;
 int VAR_2 ;
 struct inode* FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (struct path*,struct nameidata*) ;
 int FUNC_5 (struct nameidata*,scalar_t__) ;
 int FUNC_6 (struct nameidata*,struct path*,struct inode**,unsigned int*) ;
 int FUNC_7 (int *,int ,int ) ;
 int FUNC_8 (struct path*,struct nameidata*) ;
 int FUNC_9 (struct nameidata*) ;
 int FUNC_10 (struct nameidata*,struct path*,int,struct inode*,unsigned int) ;
 scalar_t__ FUNC_11 (int) ;

__attribute__((used)) static int FUNC_12(struct nameidata *VAR_3, int VAR_4)
{
 struct path VAR_5;
 struct inode *VAR_6;
 unsigned VAR_7;
 int VAR_8;





 if (FUNC_11(VAR_3->last_type != VAR_1)) {
  VAR_8 = FUNC_5(VAR_3, VAR_3->last_type);
  if (!(VAR_4 & VAR_2) && VAR_3->depth)
   FUNC_9(VAR_3);
  return VAR_8;
 }
 VAR_8 = FUNC_6(VAR_3, &VAR_5, &VAR_6, &VAR_7);
 if (FUNC_11(VAR_8 <= 0)) {
  if (VAR_8 < 0)
   return VAR_8;
  VAR_5.dentry = FUNC_7(&VAR_3->last, VAR_3->path.dentry,
       VAR_3->flags);
  if (FUNC_0(VAR_5.dentry))
   return FUNC_1(VAR_5.dentry);

  VAR_5.mnt = VAR_3->path.mnt;
  VAR_8 = FUNC_4(&VAR_5, VAR_3);
  if (FUNC_11(VAR_8 < 0))
   return VAR_8;

  if (FUNC_11(FUNC_3(VAR_5.dentry))) {
   FUNC_8(&VAR_5, VAR_3);
   return -VAR_0;
  }

  VAR_7 = 0;
  VAR_6 = FUNC_2(VAR_5.dentry);
 }

 return FUNC_10(VAR_3, &VAR_5, VAR_4, VAR_6, VAR_7);
}
