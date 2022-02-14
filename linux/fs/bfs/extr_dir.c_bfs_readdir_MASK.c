
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct inode {int i_size; TYPE_1__* i_sb; int i_ino; } ;
struct file {int dummy; } ;
struct dir_context {int pos; } ;
struct buffer_head {scalar_t__ b_data; } ;
struct bfs_dirent {scalar_t__ ino; int name; } ;
struct TYPE_4__ {int i_sblock; } ;
struct TYPE_3__ {int s_id; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 TYPE_2__* FUNC_0 (struct inode*) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (struct buffer_head*) ;
 int FUNC_2 (struct dir_context*,int ,int,int ,int ) ;
 struct inode* FUNC_3 (struct file*) ;
 int FUNC_4 (scalar_t__) ;
 int FUNC_5 (char*,unsigned long,int ,int ) ;
 struct buffer_head* FUNC_6 (TYPE_1__*,int) ;
 int FUNC_7 (int ,int ) ;

__attribute__((used)) static int FUNC_8(struct file *VAR_6, struct dir_context *VAR_7)
{
 struct inode *VAR_8 = FUNC_3(VAR_6);
 struct buffer_head *VAR_9;
 struct bfs_dirent *VAR_10;
 unsigned int VAR_11;
 int VAR_12;

 if (VAR_7->pos & (VAR_2 - 1)) {
  FUNC_5("Bad f_pos=%08lx for %s:%08lx\n",
     (unsigned long)VAR_7->pos,
     VAR_8->i_sb->s_id, VAR_8->i_ino);
  return -VAR_5;
 }

 while (VAR_7->pos < VAR_8->i_size) {
  VAR_11 = VAR_7->pos & (VAR_0 - 1);
  VAR_12 = FUNC_0(VAR_8)->i_sblock + (VAR_7->pos >> VAR_1);
  VAR_9 = FUNC_6(VAR_8->i_sb, VAR_12);
  if (!VAR_9) {
   VAR_7->pos += VAR_0 - VAR_11;
   continue;
  }
  do {
   VAR_10 = (struct bfs_dirent *)(VAR_9->b_data + VAR_11);
   if (VAR_10->ino) {
    int VAR_13 = FUNC_7(VAR_10->name, VAR_3);
    if (!FUNC_2(VAR_7, VAR_10->name, VAR_13,
      FUNC_4(VAR_10->ino),
      VAR_4)) {
     FUNC_1(VAR_9);
     return 0;
    }
   }
   VAR_11 += VAR_2;
   VAR_7->pos += VAR_2;
  } while ((VAR_11 < VAR_0) && (VAR_7->pos < VAR_8->i_size));
  FUNC_1(VAR_9);
 }
 return 0;
}
