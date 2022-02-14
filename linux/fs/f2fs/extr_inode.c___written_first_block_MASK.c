
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct f2fs_sb_info {int dummy; } ;
struct f2fs_inode {int * i_addr; } ;
typedef int block_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct f2fs_sb_info*,int ,int ) ;
 int FUNC_2 (int ) ;
 size_t FUNC_3 (struct f2fs_inode*) ;

__attribute__((used)) static int FUNC_4(struct f2fs_sb_info *VAR_2,
     struct f2fs_inode *VAR_3)
{
 block_t VAR_4 = FUNC_2(VAR_3->i_addr[FUNC_3(VAR_3)]);

 if (!FUNC_0(VAR_4))
  return 1;
 if (!FUNC_1(VAR_2, VAR_4, VAR_0))
  return -VAR_1;
 return 0;
}
