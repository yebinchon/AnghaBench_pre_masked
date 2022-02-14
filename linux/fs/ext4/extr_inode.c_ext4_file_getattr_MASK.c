
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u64 ;
typedef int u32 ;
struct path {int dentry; } ;
struct kstat {int blocks; int size; } ;
struct inode {TYPE_1__* i_sb; } ;
struct TYPE_4__ {int i_reserved_data_blocks; } ;
struct TYPE_3__ {int s_blocksize_bits; } ;


 int FUNC_0 (int ,int ) ;
 TYPE_2__* FUNC_1 (struct inode*) ;
 int FUNC_2 (TYPE_1__*) ;
 struct inode* FUNC_3 (int ) ;
 int FUNC_4 (struct path const*,struct kstat*,int ,unsigned int) ;
 int FUNC_5 (struct inode*) ;
 scalar_t__ FUNC_6 (int ) ;

int FUNC_7(const struct path *VAR_0, struct kstat *VAR_1,
        u32 VAR_2, unsigned int VAR_3)
{
 struct inode *VAR_4 = FUNC_3(VAR_0->dentry);
 u64 VAR_5;

 FUNC_4(VAR_0, VAR_1, VAR_2, VAR_3);







 if (FUNC_6(FUNC_5(VAR_4)))
  VAR_1->blocks += (VAR_1->size + 511) >> 9;
 VAR_5 = FUNC_0(FUNC_2(VAR_4->i_sb),
       FUNC_1(VAR_4)->i_reserved_data_blocks);
 VAR_1->blocks += VAR_5 << (VAR_4->i_sb->s_blocksize_bits - 9);
 return 0;
}
