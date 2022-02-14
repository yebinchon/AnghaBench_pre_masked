
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
typedef int u16 ;
struct ocfs2_dinode {scalar_t__ i_suballoc_loc; int i_suballoc_bit; scalar_t__ i_blkno; } ;
struct inode {int dummy; } ;
struct buffer_head {int dummy; } ;
typedef int handle_t ;


 int FUNC_0 (int ) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (int *,struct inode*,struct buffer_head*,int ,int ,int) ;
 int FUNC_3 (int ,int ) ;

int FUNC_4(handle_t *VAR_0,
        struct inode *VAR_1,
        struct buffer_head *VAR_2,
        struct ocfs2_dinode *VAR_3)
{
 u64 VAR_4 = FUNC_1(VAR_3->i_blkno);
 u16 VAR_5 = FUNC_0(VAR_3->i_suballoc_bit);
 u64 VAR_6 = FUNC_3(VAR_4, VAR_5);

 if (VAR_3->i_suballoc_loc)
  VAR_6 = FUNC_1(VAR_3->i_suballoc_loc);
 return FUNC_2(VAR_0, VAR_1,
     VAR_2, VAR_5, VAR_6, 1);
}
