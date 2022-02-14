
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct super_block {int dummy; } ;
struct inode {struct super_block* i_sb; } ;
struct buffer_head {int dummy; } ;
typedef scalar_t__ ino_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct super_block*,scalar_t__) ;
 int FUNC_1 (struct super_block*,char*,unsigned long) ;
 int FUNC_2 (struct super_block*,int ,char*,int,unsigned long) ;
 int FUNC_3 (struct inode*,scalar_t__,int ,struct buffer_head**) ;
 scalar_t__ FUNC_4 (int) ;

int FUNC_5(struct inode *VAR_2, ino_t VAR_3,
    struct buffer_head **VAR_4)
{
 struct super_block *VAR_5 = VAR_2->i_sb;
 int VAR_6;

 if (FUNC_4(!FUNC_0(VAR_5, VAR_3))) {
  FUNC_1(VAR_5, "bad inode number: %lu", (unsigned long)VAR_3);
  return -VAR_0;
 }

 VAR_6 = FUNC_3(VAR_2, VAR_3, 0, VAR_4);
 if (FUNC_4(VAR_6))
  FUNC_2(VAR_5, VAR_1, "error %d reading inode: ino=%lu",
     VAR_6, (unsigned long)VAR_3);
 return VAR_6;
}
