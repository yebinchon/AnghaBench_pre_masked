
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct path {scalar_t__ dentry; TYPE_2__* mnt; } ;
struct mountpoint {int dummy; } ;
struct TYPE_3__ {scalar_t__ mnt_sb; int mnt_flags; int mnt_root; } ;
struct mount {TYPE_1__ mnt; int mnt_ns; } ;
struct TYPE_4__ {scalar_t__ mnt_sb; scalar_t__ mnt_root; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (struct mountpoint*) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (struct mountpoint*) ;
 int FUNC_2 (struct mount*) ;
 scalar_t__ FUNC_3 (int ) ;
 int FUNC_4 (struct mount*,struct mount*,struct mountpoint*) ;
 struct mountpoint* FUNC_5 (struct path*) ;
 struct mount* FUNC_6 (TYPE_2__*) ;
 scalar_t__ FUNC_7 (int) ;
 int FUNC_8 (struct mountpoint*) ;

__attribute__((used)) static int FUNC_9(struct mount *VAR_4, struct path *VAR_5, int VAR_6)
{
 struct mountpoint *VAR_7;
 struct mount *VAR_8;
 int VAR_9;

 VAR_6 &= ~VAR_2;

 VAR_7 = FUNC_5(VAR_5);
 if (FUNC_0(VAR_7))
  return FUNC_1(VAR_7);

 VAR_8 = FUNC_6(VAR_5->mnt);
 VAR_9 = -VAR_1;
 if (FUNC_7(!FUNC_2(VAR_8))) {

  if (!(VAR_6 & VAR_3))
   goto unlock;

  if (!VAR_8->mnt_ns)
   goto unlock;
 }


 VAR_9 = -VAR_0;
 if (VAR_5->mnt->mnt_sb == VAR_4->mnt.mnt_sb &&
     VAR_5->mnt->mnt_root == VAR_5->dentry)
  goto unlock;

 VAR_9 = -VAR_1;
 if (FUNC_3(VAR_4->mnt.mnt_root))
  goto unlock;

 VAR_4->mnt.mnt_flags = VAR_6;
 VAR_9 = FUNC_4(VAR_4, VAR_8, VAR_7);

unlock:
 FUNC_8(VAR_7);
 return VAR_9;
}
