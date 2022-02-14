
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct jfs_inode_info {int active_ag; int agstart; int ixpxd; } ;
struct inode {int i_ino; } ;
struct iag {int agstart; int * inoext; } ;


 struct jfs_inode_info* FUNC_0 (struct inode*) ;
 int VAR_0 ;
 int FUNC_1 (int ) ;

__attribute__((used)) static inline void
FUNC_2(struct inode *VAR_1, int VAR_2, int VAR_3, int VAR_4, struct iag * VAR_5)
{
 struct jfs_inode_info *VAR_6 = FUNC_0(VAR_1);

 VAR_1->i_ino = (VAR_2 << VAR_0) + VAR_3;
 VAR_6->ixpxd = VAR_5->inoext[VAR_4];
 VAR_6->agstart = FUNC_1(VAR_5->agstart);
 VAR_6->active_ag = -1;
}
