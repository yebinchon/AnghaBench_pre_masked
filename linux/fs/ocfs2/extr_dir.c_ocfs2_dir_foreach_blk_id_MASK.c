
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u64 ;
struct ocfs2_inline_data {scalar_t__ id_data; } ;
struct ocfs2_dir_entry {int rec_len; int file_type; int inode; int name_len; int name; } ;
struct TYPE_3__ {struct ocfs2_inline_data i_data; } ;
struct ocfs2_dinode {TYPE_1__ id2; } ;
struct inode {int dummy; } ;
struct dir_context {unsigned long pos; } ;
struct buffer_head {scalar_t__ b_data; } ;
struct TYPE_4__ {scalar_t__ ip_blkno; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int) ;
 TYPE_2__* FUNC_1 (struct inode*) ;
 int FUNC_2 (struct buffer_head*) ;
 int FUNC_3 (struct dir_context*,int ,int ,scalar_t__,int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (struct inode*) ;
 int FUNC_6 (struct inode*,int ) ;
 int FUNC_7 (struct inode*) ;
 scalar_t__ FUNC_8 (int ) ;
 scalar_t__ FUNC_9 (int ) ;
 int FUNC_10 (int ,char*,unsigned long long) ;
 int FUNC_11 (struct inode*,struct ocfs2_dir_entry*,struct buffer_head*,unsigned long) ;
 int FUNC_12 (struct inode*,struct buffer_head**) ;

__attribute__((used)) static int FUNC_13(struct inode *VAR_1,
        u64 *VAR_2,
        struct dir_context *VAR_3)
{
 int VAR_4, VAR_5;
 unsigned long VAR_6 = VAR_3->pos;
 struct buffer_head *VAR_7 = ((void*)0);
 struct ocfs2_dinode *VAR_8;
 struct ocfs2_inline_data *VAR_9;
 struct ocfs2_dir_entry *VAR_10;

 VAR_4 = FUNC_12(VAR_1, &VAR_7);
 if (VAR_4) {
  FUNC_10(VAR_0, "Unable to read inode block for dir %llu\n",
       (unsigned long long)FUNC_1(VAR_1)->ip_blkno);
  goto out;
 }

 VAR_8 = (struct ocfs2_dinode *)VAR_7->b_data;
 VAR_9 = &VAR_8->id2.i_data;

 while (VAR_3->pos < FUNC_5(VAR_1)) {




  if (!FUNC_6(VAR_1, *VAR_2)) {
   for (VAR_5 = 0; VAR_5 < FUNC_5(VAR_1) && VAR_5 < VAR_6; ) {
    VAR_10 = (struct ocfs2_dir_entry *)
     (VAR_9->id_data + VAR_5);






    if (FUNC_8(VAR_10->rec_len) <
        FUNC_0(1))
     break;
    VAR_5 += FUNC_8(VAR_10->rec_len);
   }
   VAR_3->pos = VAR_6 = VAR_5;
   *VAR_2 = FUNC_7(VAR_1);
  }

  VAR_10 = (struct ocfs2_dir_entry *) (VAR_9->id_data + VAR_3->pos);
  if (!FUNC_11(VAR_1, VAR_10, VAR_7, VAR_3->pos)) {

   VAR_3->pos = FUNC_5(VAR_1);
   break;
  }
  VAR_6 += FUNC_8(VAR_10->rec_len);
  if (FUNC_9(VAR_10->inode)) {
   if (!FUNC_3(VAR_3, VAR_10->name, VAR_10->name_len,
          FUNC_9(VAR_10->inode),
          FUNC_4(VAR_10->file_type)))
    goto out;
  }
  VAR_3->pos += FUNC_8(VAR_10->rec_len);
 }
out:
 FUNC_2(VAR_7);
 return 0;
}
