
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct kioctx {int dummy; } ;
struct inode {int i_size; TYPE_1__* i_mapping; } ;
struct file {int i_size; TYPE_1__* i_mapping; } ;
typedef int loff_t ;
struct TYPE_5__ {int mnt_sb; } ;
struct TYPE_4__ {struct kioctx* private_data; int * a_ops; } ;


 struct inode* FUNC_0 (struct inode*) ;
 scalar_t__ FUNC_1 (struct inode*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 TYPE_2__* VAR_3 ;
 int VAR_4 ;
 struct inode* FUNC_2 (int ) ;
 struct inode* FUNC_3 (struct inode*,TYPE_2__*,char*,int ,int *) ;
 int FUNC_4 (struct inode*) ;

__attribute__((used)) static struct file *FUNC_5(struct kioctx *VAR_5, loff_t VAR_6)
{
 struct file *VAR_7;
 struct inode *VAR_8 = FUNC_2(VAR_3->mnt_sb);
 if (FUNC_1(VAR_8))
  return FUNC_0(VAR_8);

 VAR_8->i_mapping->a_ops = &VAR_2;
 VAR_8->i_mapping->private_data = VAR_5;
 VAR_8->i_size = VAR_1 * VAR_6;

 VAR_7 = FUNC_3(VAR_8, VAR_3, "[aio]",
    VAR_0, &VAR_4);
 if (FUNC_1(VAR_7))
  FUNC_4(VAR_8);
 return VAR_7;
}
