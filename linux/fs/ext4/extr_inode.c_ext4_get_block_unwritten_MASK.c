
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct inode {int i_ino; } ;
struct buffer_head {int dummy; } ;
typedef int sector_t ;


 int VAR_0 ;
 int FUNC_0 (struct inode*,int ,struct buffer_head*,int ) ;
 int FUNC_1 (char*,int ,int) ;

int FUNC_2(struct inode *VAR_1, sector_t VAR_2,
        struct buffer_head *VAR_3, int VAR_4)
{
 FUNC_1("ext4_get_block_unwritten: inode %lu, create flag %d\n",
     VAR_1->i_ino, VAR_4);
 return FUNC_0(VAR_1, VAR_2, VAR_3,
          VAR_0);
}
