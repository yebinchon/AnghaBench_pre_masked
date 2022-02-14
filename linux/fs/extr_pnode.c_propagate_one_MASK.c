
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int mnt_root; } ;
struct mount {int mnt_ns; int mnt_hash; struct mount* mnt_master; TYPE_1__ mnt; struct mount* mnt_parent; } ;
struct TYPE_5__ {int m_dentry; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (struct mount*) ;
 scalar_t__ FUNC_1 (struct mount*) ;
 scalar_t__ FUNC_2 (struct mount*) ;
 scalar_t__ FUNC_3 (struct mount*) ;
 int FUNC_4 (struct mount*) ;
 int FUNC_5 (struct mount*) ;
 struct mount* FUNC_6 (struct mount*,int ,int) ;
 int FUNC_7 (int ,struct mount*) ;
 struct mount* VAR_2 ;
 struct mount* VAR_3 ;
 int FUNC_8 (int *,int ) ;
 int FUNC_9 (int ,int ) ;
 struct mount* VAR_4 ;
 struct mount* VAR_5 ;
 int VAR_6 ;
 int FUNC_10 (struct mount*,TYPE_2__*,struct mount*) ;
 int VAR_7 ;
 TYPE_2__* VAR_8 ;
 scalar_t__ FUNC_11 (struct mount*,struct mount*) ;
 int FUNC_12 (int *) ;
 int FUNC_13 (int *) ;

__attribute__((used)) static int FUNC_14(struct mount *VAR_9)
{
 struct mount *VAR_10;
 int VAR_11;

 if (FUNC_2(VAR_9))
  return 0;

 if (!FUNC_9(VAR_8->m_dentry, VAR_9->mnt.mnt_root))
  return 0;
 if (FUNC_11(VAR_9, VAR_4)) {
  VAR_11 = VAR_0;
 } else {
  struct mount *VAR_12, *VAR_13;
  bool VAR_14;
  for (VAR_12 = VAR_9; ; VAR_12 = VAR_13) {
   VAR_13 = VAR_12->mnt_master;
   if (VAR_13 == VAR_2 || FUNC_1(VAR_13))
    break;
  }
  do {
   struct mount *VAR_15 = VAR_5->mnt_parent;
   if (VAR_5 == VAR_3)
    break;
   VAR_14 = VAR_15->mnt_master == VAR_13;
   if (VAR_14 && FUNC_11(VAR_12, VAR_15))
    break;
   VAR_5 = VAR_5->mnt_master;
  } while (!VAR_14);

  VAR_11 = VAR_1;

  if (FUNC_3(VAR_9))
   VAR_11 |= VAR_0;
 }

 VAR_10 = FUNC_6(VAR_5, VAR_5->mnt.mnt_root, VAR_11);
 if (FUNC_0(VAR_10))
  return FUNC_4(VAR_10);
 FUNC_10(VAR_9, VAR_8, VAR_10);
 VAR_4 = VAR_9;
 VAR_5 = VAR_10;
 if (VAR_9->mnt_master != VAR_2) {
  FUNC_12(&VAR_7);
  FUNC_5(VAR_9->mnt_master);
  FUNC_13(&VAR_7);
 }
 FUNC_8(&VAR_10->mnt_hash, VAR_6);
 return FUNC_7(VAR_9->mnt_ns, VAR_10);
}
