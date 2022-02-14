
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct super_block {int s_blocksize; } ;
struct path {TYPE_1__* dentry; } ;
struct kstat {int blocks; int blksize; int size; } ;
struct inode {int dummy; } ;
struct TYPE_2__ {struct super_block* d_sb; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct inode*) ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (int ,struct super_block*) ;
 int FUNC_2 (int ,struct super_block*) ;
 struct inode* FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (struct inode*,struct kstat*) ;

int FUNC_5(const struct path *VAR_2, struct kstat *VAR_3,
    u32 VAR_4, unsigned int VAR_5)
{
 struct super_block *VAR_6 = VAR_2->dentry->d_sb;
 struct inode *VAR_7 = FUNC_3(VAR_2->dentry);

 FUNC_4(VAR_7, VAR_3);
 if (FUNC_0(VAR_7) == VAR_1)
  VAR_3->blocks = (VAR_0 / 512) * FUNC_1(VAR_3->size, VAR_6);
 else
  VAR_3->blocks = (VAR_6->s_blocksize / 512) * FUNC_2(VAR_3->size, VAR_6);
 VAR_3->blksize = VAR_6->s_blocksize;
 return 0;
}
