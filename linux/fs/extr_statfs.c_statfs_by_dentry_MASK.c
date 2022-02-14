
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct kstatfs {scalar_t__ f_frsize; scalar_t__ f_bsize; } ;
struct dentry {TYPE_2__* d_sb; } ;
struct TYPE_4__ {TYPE_1__* s_op; } ;
struct TYPE_3__ {int (* statfs ) (struct dentry*,struct kstatfs*) ;} ;


 int VAR_0 ;
 int FUNC_0 (struct kstatfs*,int ,int) ;
 int FUNC_1 (struct dentry*) ;
 int FUNC_2 (struct dentry*,struct kstatfs*) ;

__attribute__((used)) static int FUNC_3(struct dentry *VAR_1, struct kstatfs *VAR_2)
{
 int VAR_3;

 if (!VAR_1->d_sb->s_op->statfs)
  return -VAR_0;

 FUNC_0(VAR_2, 0, sizeof(*VAR_2));
 VAR_3 = FUNC_1(VAR_1);
 if (VAR_3)
  return VAR_3;
 VAR_3 = VAR_1->d_sb->s_op->statfs(VAR_1, VAR_2);
 if (VAR_3 == 0 && VAR_2->f_frsize == 0)
  VAR_2->f_frsize = VAR_2->f_bsize;
 return VAR_3;
}
