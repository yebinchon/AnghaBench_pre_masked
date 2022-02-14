
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct path {TYPE_4__* dentry; } ;
struct TYPE_9__ {scalar_t__* val; } ;
typedef TYPE_3__ __kernel_fsid_t ;
struct TYPE_10__ {TYPE_2__* d_sb; } ;
struct TYPE_8__ {TYPE_1__* s_export_op; TYPE_4__* s_root; } ;
struct TYPE_7__ {int fh_to_dentry; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (TYPE_4__*,TYPE_3__*) ;

__attribute__((used)) static int FUNC_1(struct path *VAR_3, __kernel_fsid_t *VAR_4)
{
 __kernel_fsid_t VAR_5;
 int VAR_6;




 VAR_6 = FUNC_0(VAR_3->dentry, VAR_4);
 if (VAR_6)
  return VAR_6;

 if (!VAR_4->val[0] && !VAR_4->val[1])
  return -VAR_0;





 VAR_6 = FUNC_0(VAR_3->dentry->d_sb->s_root, &VAR_5);
 if (VAR_6)
  return VAR_6;

 if (VAR_5.val[0] != VAR_4->val[0] ||
     VAR_5.val[1] != VAR_4->val[1])
  return -VAR_2;
 if (!VAR_3->dentry->d_sb->s_export_op ||
     !VAR_3->dentry->d_sb->s_export_op->fh_to_dentry)
  return -VAR_1;

 return 0;
}
