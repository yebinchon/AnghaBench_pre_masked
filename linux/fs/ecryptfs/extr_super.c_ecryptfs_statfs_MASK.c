
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct kstatfs {int f_namelen; int f_type; } ;
struct dentry {TYPE_3__* d_sb; } ;
struct TYPE_6__ {TYPE_1__* s_op; } ;
struct TYPE_5__ {int mount_crypt_stat; } ;
struct TYPE_4__ {int (* statfs ) (struct dentry*,struct kstatfs*) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 struct dentry* FUNC_0 (struct dentry*) ;
 int FUNC_1 (int *,int ,int *) ;
 TYPE_2__* FUNC_2 (TYPE_3__*) ;
 int FUNC_3 (struct dentry*,struct kstatfs*) ;

__attribute__((used)) static int FUNC_4(struct dentry *VAR_2, struct kstatfs *VAR_3)
{
 struct dentry *VAR_4 = FUNC_0(VAR_2);
 int VAR_5;

 if (!VAR_4->d_sb->s_op->statfs)
  return -VAR_1;

 VAR_5 = VAR_4->d_sb->s_op->statfs(VAR_4, VAR_3);
 if (VAR_5)
  return VAR_5;

 VAR_3->f_type = VAR_0;
 VAR_5 = FUNC_1(&VAR_3->f_namelen, VAR_3->f_namelen,
        &FUNC_2(VAR_2->d_sb)->mount_crypt_stat);

 return VAR_5;
}
