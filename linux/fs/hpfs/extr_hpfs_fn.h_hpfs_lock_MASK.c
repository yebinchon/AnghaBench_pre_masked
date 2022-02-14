
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct super_block {int dummy; } ;
struct hpfs_sb_info {int hpfs_mutex; } ;


 struct hpfs_sb_info* FUNC_0 (struct super_block*) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static inline void FUNC_2(struct super_block *VAR_0)
{
 struct hpfs_sb_info *VAR_1 = FUNC_0(VAR_0);
 FUNC_1(&VAR_1->hpfs_mutex);
}
