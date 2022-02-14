
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ocfs2_super {scalar_t__ bitmap_blkno; } ;
struct inode {int i_sb; } ;
struct TYPE_2__ {scalar_t__ ip_blkno; } ;


 TYPE_1__* FUNC_0 (struct inode*) ;
 struct ocfs2_super* FUNC_1 (int ) ;

__attribute__((used)) static inline int FUNC_2(struct inode *VAR_0)
{
 struct ocfs2_super *VAR_1 = FUNC_1(VAR_0->i_sb);
 return VAR_1->bitmap_blkno == FUNC_0(VAR_0)->ip_blkno;
}
