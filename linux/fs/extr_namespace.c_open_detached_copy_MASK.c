
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct user_namespace {int dummy; } ;
struct path {int * mnt; } ;
struct mount {int f_mode; int mnt; int mnt_list; int list; struct mount* root; int mounts; struct mount* mnt_ns; } ;
struct mnt_namespace {int f_mode; int mnt; int mnt_list; int list; struct mnt_namespace* root; int mounts; struct mnt_namespace* mnt_ns; } ;
struct file {int f_mode; int mnt; int mnt_list; int list; struct file* root; int mounts; struct file* mnt_ns; } ;
struct TYPE_6__ {TYPE_2__* nsproxy; } ;
struct TYPE_5__ {TYPE_1__* mnt_ns; } ;
struct TYPE_4__ {struct user_namespace* user_ns; } ;


 struct mount* FUNC_0 (struct mount*) ;
 int VAR_0 ;
 scalar_t__ FUNC_1 (struct mount*) ;
 int VAR_1 ;
 struct mount* FUNC_2 (struct path*,int) ;
 struct mount* FUNC_3 (struct user_namespace*,int) ;
 TYPE_3__* VAR_2 ;
 int FUNC_4 () ;
 struct mount* FUNC_5 (struct path*,int ,int ) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (struct mount*) ;
 int FUNC_8 (int *,int *) ;
 int FUNC_9 () ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int *) ;
 int FUNC_12 () ;
 int FUNC_13 () ;
 struct mount* FUNC_14 (struct mount*,struct mount*) ;
 int FUNC_15 () ;

__attribute__((used)) static struct file *FUNC_16(struct path *VAR_3, bool VAR_4)
{
 struct user_namespace *VAR_5 = VAR_2->nsproxy->mnt_ns->user_ns;
 struct mnt_namespace *VAR_6 = FUNC_3(VAR_5, 1);
 struct mount *VAR_7, *VAR_8;
 struct file *VAR_9;

 if (FUNC_1(VAR_6))
  return FUNC_0(VAR_6);

 FUNC_12();
 VAR_7 = FUNC_2(VAR_3, VAR_4);
 if (FUNC_1(VAR_7)) {
  FUNC_13();
  FUNC_7(VAR_6);
  return FUNC_0(VAR_7);
 }

 FUNC_9();
 for (VAR_8 = VAR_7; VAR_8; VAR_8 = FUNC_14(VAR_8, VAR_7)) {
  VAR_8->mnt_ns = VAR_6;
  VAR_6->mounts++;
 }
 VAR_6->root = VAR_7;
 FUNC_8(&VAR_6->list, &VAR_7->mnt_list);
 FUNC_10(&VAR_7->mnt);
 FUNC_15();
 FUNC_13();

 FUNC_11(VAR_3->mnt);
 VAR_3->mnt = &VAR_7->mnt;
 VAR_9 = FUNC_5(VAR_3, VAR_1, FUNC_4());
 if (FUNC_1(VAR_9))
  FUNC_6(VAR_3->mnt);
 else
  VAR_9->f_mode |= VAR_0;
 return VAR_9;
}
