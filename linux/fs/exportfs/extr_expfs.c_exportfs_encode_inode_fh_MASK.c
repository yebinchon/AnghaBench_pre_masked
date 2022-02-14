
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct inode {TYPE_1__* i_sb; } ;
struct fid {int raw; } ;
struct export_operations {int (* encode_fh ) (struct inode*,int ,int*,struct inode*) ;} ;
struct TYPE_2__ {struct export_operations* s_export_op; } ;


 int FUNC_0 (struct inode*,struct fid*,int*,struct inode*) ;
 int FUNC_1 (struct inode*,int ,int*,struct inode*) ;

int FUNC_2(struct inode *VAR_0, struct fid *VAR_1,
        int *VAR_2, struct inode *VAR_3)
{
 const struct export_operations *VAR_4 = VAR_0->i_sb->s_export_op;

 if (VAR_4 && VAR_4->encode_fh)
  return VAR_4->encode_fh(VAR_0, VAR_1->raw, VAR_2, VAR_3);

 return FUNC_0(VAR_0, VAR_1, VAR_2, VAR_3);
}
