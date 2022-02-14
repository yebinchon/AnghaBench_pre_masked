
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct inode {int i_sb; int i_ino; } ;
struct buffer_head {int dummy; } ;
typedef scalar_t__ sector_t ;


 int FUNC_0 (struct buffer_head*,int ,unsigned int) ;
 int FUNC_1 (char*,int ,unsigned long) ;
 unsigned int FUNC_2 (struct inode*,scalar_t__) ;

__attribute__((used)) static int FUNC_3(struct inode *VAR_0, sector_t VAR_1,
   struct buffer_head *VAR_2, int VAR_3)
{
 unsigned VAR_4;

 FUNC_1("qnx6_get_block inode=[%ld] iblock=[%ld]\n",
   VAR_0->i_ino, (unsigned long)VAR_1);

 VAR_4 = FUNC_2(VAR_0, VAR_1);
 if (VAR_4) {

  FUNC_0(VAR_2, VAR_0->i_sb, VAR_4);
 }
 return 0;
}
