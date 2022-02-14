
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ocfs2_dir_entry {int rec_len; scalar_t__ inode; } ;
struct inode {int dummy; } ;
struct buffer_head {int dummy; } ;
typedef int (* ocfs2_journal_access_func ) (int *,int ,struct buffer_head*,int ) ;
typedef int handle_t ;
struct TYPE_2__ {int ip_dyn_features; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct inode*) ;
 TYPE_1__* FUNC_1 (struct inode*) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (struct inode*) ;
 int FUNC_3 (int *,int) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int) ;
 int FUNC_6 (struct inode*,struct ocfs2_dir_entry*,struct buffer_head*,int) ;
 int FUNC_7 (int *,int ,struct buffer_head*,int ) ;
 int FUNC_8 (int *,int ,struct buffer_head*,int ) ;
 int FUNC_9 (int *,struct buffer_head*) ;

__attribute__((used)) static int FUNC_10(handle_t *VAR_4, struct inode *VAR_5,
    struct ocfs2_dir_entry *VAR_6,
    struct buffer_head *VAR_7, char *VAR_8,
    unsigned int VAR_9)
{
 struct ocfs2_dir_entry *VAR_10, *VAR_11;
 int VAR_12, VAR_13 = -VAR_1;
 ocfs2_journal_access_func VAR_14 = FUNC_7;

 if (FUNC_1(VAR_5)->ip_dyn_features & VAR_2)
  VAR_14 = FUNC_8;

 VAR_12 = 0;
 VAR_11 = ((void*)0);
 VAR_10 = (struct ocfs2_dir_entry *) VAR_8;
 while (VAR_12 < VAR_9) {
  if (!FUNC_6(VAR_5, VAR_10, VAR_7, VAR_12)) {
   VAR_13 = -VAR_0;
   FUNC_5(VAR_13);
   goto bail;
  }
  if (VAR_10 == VAR_6) {
   VAR_13 = VAR_14(VAR_4, FUNC_0(VAR_5), VAR_7,
     VAR_3);
   if (VAR_13 < 0) {
    VAR_13 = -VAR_0;
    FUNC_5(VAR_13);
    goto bail;
   }
   if (VAR_11)
    FUNC_3(&VAR_11->rec_len,
      FUNC_4(VAR_10->rec_len));
   VAR_10->inode = 0;
   FUNC_2(VAR_5);
   FUNC_9(VAR_4, VAR_7);
   goto bail;
  }
  VAR_12 += FUNC_4(VAR_10->rec_len);
  VAR_11 = VAR_10;
  VAR_10 = (struct ocfs2_dir_entry *)((char *)VAR_10 + FUNC_4(VAR_10->rec_len));
 }
bail:
 return VAR_13;
}
