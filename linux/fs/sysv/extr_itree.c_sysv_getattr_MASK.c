
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct super_block {int s_blocksize; } ;
struct path {TYPE_1__* dentry; } ;
struct kstat {int blocks; int blksize; int size; } ;
struct TYPE_2__ {struct super_block* d_sb; } ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (int ,struct kstat*) ;
 int FUNC_2 (struct super_block*,int ) ;

int FUNC_3(const struct path *VAR_0, struct kstat *VAR_1,
   u32 VAR_2, unsigned int VAR_3)
{
 struct super_block *VAR_4 = VAR_0->dentry->d_sb;
 FUNC_1(FUNC_0(VAR_0->dentry), VAR_1);
 VAR_1->blocks = (VAR_4->s_blocksize / 512) * FUNC_2(VAR_4, VAR_1->size);
 VAR_1->blksize = VAR_4->s_blocksize;
 return 0;
}
