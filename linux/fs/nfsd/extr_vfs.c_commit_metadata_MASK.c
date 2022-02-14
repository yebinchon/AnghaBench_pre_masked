
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct svc_fh {int fh_export; int fh_dentry; } ;
struct inode {TYPE_1__* i_sb; } ;
struct export_operations {int (* commit_metadata ) (struct inode*) ;} ;
struct TYPE_2__ {struct export_operations* s_export_op; } ;


 int FUNC_0 (int ) ;
 struct inode* FUNC_1 (int ) ;
 int FUNC_2 (struct inode*) ;
 int FUNC_3 (struct inode*,int) ;

__attribute__((used)) static int
FUNC_4(struct svc_fh *VAR_0)
{
 struct inode *VAR_1 = FUNC_1(VAR_0->fh_dentry);
 const struct export_operations *VAR_2 = VAR_1->i_sb->s_export_op;

 if (!FUNC_0(VAR_0->fh_export))
  return 0;

 if (VAR_2->commit_metadata)
  return VAR_2->commit_metadata(VAR_1);
 return FUNC_3(VAR_1, 1);
}
