
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct path {struct dentry* dentry; } ;
struct dentry {TYPE_1__* d_sb; } ;
struct audit_watch {int ino; int dev; int path; } ;
struct TYPE_5__ {int i_ino; } ;
struct TYPE_4__ {int s_dev; } ;


 scalar_t__ FUNC_0 (struct dentry*) ;
 int FUNC_1 (struct dentry*) ;
 TYPE_2__* FUNC_2 (struct dentry*) ;
 scalar_t__ FUNC_3 (struct dentry*) ;
 int FUNC_4 (struct dentry*) ;
 int FUNC_5 (TYPE_2__*) ;
 struct dentry* FUNC_6 (int ,struct path*) ;

__attribute__((used)) static int FUNC_7(struct audit_watch *VAR_0, struct path *VAR_1)
{
 struct dentry *VAR_2 = FUNC_6(VAR_0->path, VAR_1);
 if (FUNC_0(VAR_2))
  return FUNC_1(VAR_2);
 FUNC_5(FUNC_2(VAR_1->dentry));
 if (FUNC_3(VAR_2)) {

  VAR_0->dev = VAR_2->d_sb->s_dev;
  VAR_0->ino = FUNC_2(VAR_2)->i_ino;
 }
 FUNC_4(VAR_2);
 return 0;
}
