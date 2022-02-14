
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct path {int dummy; } ;
struct nsproxy {struct mnt_namespace* mnt_ns; } ;
struct ns_common {int dummy; } ;
struct mnt_namespace {TYPE_1__* root; int user_ns; } ;
struct fs_struct {int users; } ;
struct TYPE_6__ {struct fs_struct* fs; } ;
struct TYPE_5__ {int mnt_root; } ;
struct TYPE_4__ {TYPE_2__ mnt; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 TYPE_3__* VAR_5 ;
 int FUNC_0 () ;
 int FUNC_1 (struct mnt_namespace*) ;
 scalar_t__ FUNC_2 (struct mnt_namespace*) ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (struct path*) ;
 int FUNC_5 (struct mnt_namespace*) ;
 int FUNC_6 (struct fs_struct*,struct path*) ;
 int FUNC_7 (struct fs_struct*,struct path*) ;
 struct mnt_namespace* FUNC_8 (struct ns_common*) ;
 int FUNC_9 (int ,TYPE_2__*,char*,int ,struct path*) ;

__attribute__((used)) static int FUNC_10(struct nsproxy *VAR_6, struct ns_common *VAR_7)
{
 struct fs_struct *VAR_8 = VAR_5->fs;
 struct mnt_namespace *VAR_9 = FUNC_8(VAR_7), *VAR_10;
 struct path VAR_11;
 int VAR_12;

 if (!FUNC_3(VAR_9->user_ns, VAR_0) ||
     !FUNC_3(FUNC_0(), VAR_1) ||
     !FUNC_3(FUNC_0(), VAR_0))
  return -VAR_3;

 if (FUNC_2(VAR_9))
  return -VAR_2;

 if (VAR_8->users != 1)
  return -VAR_2;

 FUNC_1(VAR_9);
 VAR_10 = VAR_6->mnt_ns;
 VAR_6->mnt_ns = VAR_9;


 VAR_12 = FUNC_9(VAR_9->root->mnt.mnt_root, &VAR_9->root->mnt,
    "/", VAR_4, &VAR_11);
 if (VAR_12) {

  VAR_6->mnt_ns = VAR_10;
  FUNC_5(VAR_9);
  return VAR_12;
 }

 FUNC_5(VAR_10);


 FUNC_6(VAR_8, &VAR_11);
 FUNC_7(VAR_8, &VAR_11);

 FUNC_4(&VAR_11);
 return 0;
}
