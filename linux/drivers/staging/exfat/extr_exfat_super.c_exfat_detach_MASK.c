
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct inode {int i_sb; } ;
struct exfat_sb_info {int inode_hash_lock; } ;
struct TYPE_2__ {scalar_t__ i_pos; int i_hash_fat; } ;


 TYPE_1__* FUNC_0 (struct inode*) ;
 struct exfat_sb_info* FUNC_1 (int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static void FUNC_5(struct inode *VAR_0)
{
 struct exfat_sb_info *VAR_1 = FUNC_1(VAR_0->i_sb);

 FUNC_3(&VAR_1->inode_hash_lock);
 FUNC_2(&FUNC_0(VAR_0)->i_hash_fat);
 FUNC_0(VAR_0)->i_pos = 0;
 FUNC_4(&VAR_1->inode_hash_lock);
}
