
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct path {scalar_t__ dentry; int mnt; } ;
struct TYPE_2__ {int mnt; struct dentry* dentry; } ;
struct nameidata {int flags; scalar_t__ last_type; TYPE_1__ path; int last; } ;
struct dentry {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (scalar_t__) ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (scalar_t__) ;
 scalar_t__ FUNC_3 (scalar_t__) ;
 scalar_t__ FUNC_4 (struct dentry*,int *) ;
 scalar_t__ FUNC_5 (struct dentry*) ;
 int FUNC_6 (scalar_t__) ;
 int FUNC_7 (struct nameidata*,scalar_t__) ;
 scalar_t__ FUNC_8 (int *,struct dentry*,int) ;
 int FUNC_9 (struct nameidata*,struct path*,int ,int ,int ) ;
 scalar_t__ FUNC_10 (struct nameidata*) ;
 scalar_t__ FUNC_11 (int) ;

__attribute__((used)) static int
FUNC_12(struct nameidata *VAR_6)
{
 int VAR_7 = 0;
 struct dentry *VAR_8 = VAR_6->path.dentry;
 struct path VAR_9;


 if (VAR_6->flags & VAR_5) {
  if (FUNC_10(VAR_6))
   return -VAR_0;
 }

 VAR_6->flags &= ~VAR_4;

 if (FUNC_11(VAR_6->last_type != VAR_2)) {
  VAR_7 = FUNC_7(VAR_6, VAR_6->last_type);
  if (VAR_7)
   return VAR_7;
  VAR_9.dentry = FUNC_5(VAR_6->path.dentry);
 } else {
  VAR_9.dentry = FUNC_4(VAR_8, &VAR_6->last);
  if (!VAR_9.dentry) {






   VAR_9.dentry = FUNC_8(&VAR_6->last, VAR_8,
          VAR_6->flags | VAR_3);
   if (FUNC_0(VAR_9.dentry))
    return FUNC_1(VAR_9.dentry);
  }
 }
 if (FUNC_3(VAR_9.dentry)) {
  FUNC_6(VAR_9.dentry);
  return -VAR_1;
 }
 VAR_9.mnt = VAR_6->path.mnt;
 return FUNC_9(VAR_6, &VAR_9, 0, FUNC_2(VAR_9.dentry), 0);
}
