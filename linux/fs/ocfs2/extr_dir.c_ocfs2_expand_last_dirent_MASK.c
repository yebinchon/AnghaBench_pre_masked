
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct super_block {unsigned int s_blocksize; } ;
struct ocfs2_dir_entry {int rec_len; } ;
struct inode {struct super_block* i_sb; } ;


 unsigned int VAR_0 ;
 int FUNC_0 (int *,unsigned int) ;
 int FUNC_1 (int ) ;
 unsigned int FUNC_2 (struct super_block*) ;
 unsigned int FUNC_3 (struct ocfs2_dir_entry*) ;
 scalar_t__ FUNC_4 (struct inode*) ;

__attribute__((used)) static unsigned int FUNC_5(char *VAR_1, unsigned int VAR_2,
          struct inode *VAR_3)
{
 struct super_block *VAR_4 = VAR_3->i_sb;
 struct ocfs2_dir_entry *VAR_5;
 struct ocfs2_dir_entry *VAR_6;
 char *VAR_7, *VAR_8;
 unsigned int VAR_9 = VAR_4->s_blocksize;
 unsigned int VAR_10, VAR_11;
 unsigned int VAR_12 = 0;

 if (FUNC_4(VAR_3))
  VAR_9 = FUNC_2(VAR_4);

 VAR_10 = VAR_9 - VAR_2;

 VAR_8 = VAR_1 + VAR_2;
 VAR_7 = VAR_1;
 VAR_5 = (struct ocfs2_dir_entry *)VAR_7;
 do {
  VAR_11 = FUNC_3(VAR_5);
  if (VAR_11 > VAR_12)
   VAR_12 = VAR_11;

  VAR_6 = VAR_5;
  VAR_7 += FUNC_1(VAR_5->rec_len);
  VAR_5 = (struct ocfs2_dir_entry *)VAR_7;
 } while (VAR_7 < VAR_8);

 FUNC_0(&VAR_6->rec_len, VAR_10);



 VAR_11 = FUNC_3(VAR_6);
 if (VAR_11 > VAR_12)
  VAR_12 = VAR_11;

 if (VAR_12 >= VAR_0)
  return VAR_12;
 return 0;
}
