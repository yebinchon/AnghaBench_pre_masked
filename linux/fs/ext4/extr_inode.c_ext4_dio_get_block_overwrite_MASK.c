
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct inode {int i_ino; } ;
struct buffer_head {int dummy; } ;
typedef int sector_t ;


 int FUNC_0 (int) ;
 int FUNC_1 (struct inode*,int ,struct buffer_head*,int ) ;
 int FUNC_2 (struct buffer_head*) ;
 scalar_t__ FUNC_3 (struct buffer_head*) ;
 int FUNC_4 (char*,int ,int) ;
 int FUNC_5 () ;

__attribute__((used)) static int FUNC_6(struct inode *VAR_0, sector_t VAR_1,
     struct buffer_head *VAR_2, int VAR_3)
{
 int VAR_4;

 FUNC_4("ext4_dio_get_block_overwrite: inode %lu, create flag %d\n",
     VAR_0->i_ino, VAR_3);

 FUNC_0(FUNC_5());

 VAR_4 = FUNC_1(VAR_0, VAR_1, VAR_2, 0);




 FUNC_0(!FUNC_2(VAR_2) || FUNC_3(VAR_2));

 return VAR_4;
}
