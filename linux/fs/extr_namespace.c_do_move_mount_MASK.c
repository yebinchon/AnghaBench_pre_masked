
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct path {scalar_t__ dentry; TYPE_1__* mnt; } ;
struct mountpoint {int dummy; } ;
struct TYPE_4__ {int mnt_flags; } ;
struct mount {int mnt_expire; struct mount* mnt_parent; TYPE_2__ mnt; struct mnt_namespace* mnt_ns; struct mountpoint* mnt_mp; } ;
struct mnt_namespace {int dummy; } ;
struct TYPE_3__ {scalar_t__ mnt_root; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (struct mountpoint*) ;
 scalar_t__ FUNC_1 (struct mount*) ;
 int VAR_2 ;
 int FUNC_2 (struct mountpoint*) ;
 int FUNC_3 (struct mount*,struct mount*,struct mountpoint*,int) ;
 int FUNC_4 (struct mount*) ;
 int FUNC_5 (struct mount*) ;
 scalar_t__ FUNC_6 (scalar_t__) ;
 int FUNC_7 (struct mnt_namespace*) ;
 int FUNC_8 (struct mnt_namespace*) ;
 int FUNC_9 (TYPE_2__*) ;
 int FUNC_10 (int *) ;
 struct mountpoint* FUNC_11 (struct path*) ;
 int FUNC_12 (struct mount*) ;
 int FUNC_13 (struct mount*) ;
 int FUNC_14 (struct mountpoint*) ;
 struct mount* FUNC_15 (TYPE_1__*) ;
 scalar_t__ FUNC_16 (struct mount*) ;
 int FUNC_17 (struct mountpoint*) ;

__attribute__((used)) static int FUNC_18(struct path *VAR_3, struct path *VAR_4)
{
 struct mnt_namespace *VAR_5;
 struct mount *VAR_6;
 struct mount *VAR_7;
 struct mount *VAR_8;
 struct mountpoint *VAR_9, *VAR_10;
 int VAR_11;
 bool VAR_12;

 VAR_9 = FUNC_11(VAR_4);
 if (FUNC_0(VAR_9))
  return FUNC_2(VAR_9);

 VAR_7 = FUNC_15(VAR_3->mnt);
 VAR_6 = FUNC_15(VAR_4->mnt);
 VAR_8 = VAR_7->mnt_parent;
 VAR_12 = FUNC_12(VAR_7);
 VAR_10 = VAR_7->mnt_mp;
 VAR_5 = VAR_7->mnt_ns;

 VAR_11 = -VAR_0;

 if (!FUNC_5(VAR_6))
  goto out;


 if (!FUNC_9(&VAR_7->mnt))
  goto out;


 if (!(VAR_12 ? FUNC_5(VAR_7) : FUNC_8(VAR_5)))
  goto out;

 if (VAR_7->mnt.mnt_flags & VAR_2)
  goto out;

 if (VAR_3->dentry != VAR_3->mnt->mnt_root)
  goto out;

 if (FUNC_6(VAR_4->dentry) !=
     FUNC_6(VAR_3->dentry))
  goto out;



 if (VAR_12 && FUNC_1(VAR_8))
  goto out;




 if (FUNC_1(VAR_6) && FUNC_16(VAR_7))
  goto out;
 VAR_11 = -VAR_1;
 if (!FUNC_4(VAR_7))
  goto out;
 for (; FUNC_12(VAR_6); VAR_6 = VAR_6->mnt_parent)
  if (VAR_6 == VAR_7)
   goto out;

 VAR_11 = FUNC_3(VAR_7, FUNC_15(VAR_4->mnt), VAR_9,
       VAR_12);
 if (VAR_11)
  goto out;



 FUNC_10(&VAR_7->mnt_expire);
 if (VAR_12)
  FUNC_14(VAR_10);
out:
 FUNC_17(VAR_9);
 if (!VAR_11) {
  if (VAR_12)
   FUNC_13(VAR_8);
  else
   FUNC_7(VAR_5);
 }
 return VAR_11;
}
