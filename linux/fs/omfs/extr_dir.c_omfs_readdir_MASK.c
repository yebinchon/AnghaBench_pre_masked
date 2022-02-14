
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct inode {int i_size; int i_ino; int i_sb; } ;
struct file {int dummy; } ;
struct dir_context {int pos; } ;
struct buffer_head {int b_data; } ;
typedef int __u64 ;
typedef int __be64 ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct buffer_head*) ;
 int FUNC_2 (struct file*,struct dir_context*) ;
 struct inode* FUNC_3 (struct file*) ;
 struct buffer_head* FUNC_4 (int ,int ) ;
 int FUNC_5 (struct inode*,struct dir_context*,int ,unsigned int) ;

__attribute__((used)) static int FUNC_6(struct file *VAR_2, struct dir_context *VAR_3)
{
 struct inode *VAR_4 = FUNC_3(VAR_2);
 struct buffer_head *VAR_5;
 __be64 *VAR_6;
 unsigned int VAR_7, VAR_8;
 int VAR_9;

 if (VAR_3->pos >> 32)
  return -VAR_0;

 if (VAR_3->pos < 1 << 20) {
  if (!FUNC_2(VAR_2, VAR_3))
   return 0;
  VAR_3->pos = 1 << 20;
 }

 VAR_9 = (VAR_4->i_size - VAR_1) / 8;


 VAR_7 = (VAR_3->pos >> 20) - 1;
 VAR_8 = VAR_3->pos & 0xfffff;

 VAR_5 = FUNC_4(VAR_4->i_sb, VAR_4->i_ino);
 if (!VAR_5)
  return -VAR_0;

 VAR_6 = (__be64 *)(VAR_5->b_data + VAR_1) + VAR_7;

 for (; VAR_7 < VAR_9; VAR_7++) {
  __u64 VAR_10 = FUNC_0(*VAR_6++);
  if (!FUNC_5(VAR_4, VAR_3, VAR_10, VAR_8))
   break;
  VAR_8 = 0;
  VAR_3->pos = (VAR_7+2) << 20;
 }
 FUNC_1(VAR_5);
 return 0;
}
