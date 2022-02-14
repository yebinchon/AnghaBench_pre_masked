
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct ocfs2_dir_entry {int rec_len; scalar_t__ inode; scalar_t__ name_len; } ;
struct TYPE_3__ {char* id_data; } ;
struct TYPE_4__ {TYPE_1__ i_data; } ;
struct ocfs2_dinode {TYPE_2__ id2; } ;
struct inode {int i_sb; } ;
struct buffer_head {scalar_t__ b_data; } ;


 int FUNC_0 (struct inode*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static int FUNC_3(struct inode *VAR_0,
      struct buffer_head *VAR_1)
{
 int VAR_2 = 0;
 char *VAR_3, *VAR_4;
 struct ocfs2_dir_entry *VAR_5;
 struct ocfs2_dinode *VAR_6 = (struct ocfs2_dinode *)VAR_1->b_data;

 VAR_3 = VAR_6->id2.i_data.id_data;
 VAR_4 = VAR_3 + FUNC_0(VAR_0);

 while (VAR_3 < VAR_4) {
  VAR_5 = (struct ocfs2_dir_entry *)VAR_3;

  if (VAR_5->name_len && VAR_5->inode)
   VAR_2++;

  VAR_3 += FUNC_1(VAR_5->rec_len);
 }


 return VAR_2 < FUNC_2(VAR_0->i_sb);
}
