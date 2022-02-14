
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct super_block {int dummy; } ;
struct inode {struct super_block* i_sb; } ;
struct file {int dummy; } ;
struct TYPE_3__ {int size; } ;
struct TYPE_4__ {TYPE_1__ fid; } ;


 TYPE_2__* FUNC_0 (struct inode*) ;
 int FUNC_1 (struct super_block*,int) ;
 int FUNC_2 (struct inode*) ;

__attribute__((used)) static int FUNC_3(struct inode *VAR_0, struct file *VAR_1)
{
 struct super_block *VAR_2 = VAR_0->i_sb;

 FUNC_0(VAR_0)->fid.size = FUNC_2(VAR_0);
 FUNC_1(VAR_2, 0);
 return 0;
}
