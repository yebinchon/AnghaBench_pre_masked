
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct ubifs_inode {scalar_t__ last_page_read; int read_in_a_row; int bulk_read; int ui_mutex; } ;
struct bu_info {int key; int buf_len; int * buf; } ;
struct ubifs_info {int bu_mutex; int max_bu_buf_len; struct bu_info bu; int bulk_read; } ;
struct page {scalar_t__ index; TYPE_1__* mapping; } ;
struct inode {int i_ino; TYPE_2__* i_sb; } ;
typedef scalar_t__ pgoff_t ;
struct TYPE_4__ {struct ubifs_info* s_fs_info; } ;
struct TYPE_3__ {struct inode* host; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct ubifs_info*,int *,int ,int) ;
 int FUNC_1 (struct bu_info*) ;
 struct bu_info* FUNC_2 (int,int) ;
 scalar_t__ FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (struct ubifs_info*,struct bu_info*,struct page*) ;
 struct ubifs_inode* FUNC_6 (struct inode*) ;

__attribute__((used)) static int FUNC_7(struct page *VAR_3)
{
 struct inode *VAR_4 = VAR_3->mapping->host;
 struct ubifs_info *VAR_5 = VAR_4->i_sb->s_fs_info;
 struct ubifs_inode *VAR_6 = FUNC_6(VAR_4);
 pgoff_t VAR_7 = VAR_3->index, VAR_8 = VAR_6->last_page_read;
 struct bu_info *VAR_9;
 int VAR_10 = 0, VAR_11 = 0;

 VAR_6->last_page_read = VAR_7;
 if (!VAR_5->bulk_read)
  return 0;





 if (!FUNC_3(&VAR_6->ui_mutex))
  return 0;

 if (VAR_7 != VAR_8 + 1) {

  VAR_6->read_in_a_row = 1;
  if (VAR_6->bulk_read)
   VAR_6->bulk_read = 0;
  goto out_unlock;
 }

 if (!VAR_6->bulk_read) {
  VAR_6->read_in_a_row += 1;
  if (VAR_6->read_in_a_row < 3)
   goto out_unlock;

  VAR_6->bulk_read = 1;
 }





 if (FUNC_3(&VAR_5->bu_mutex))
  VAR_9 = &VAR_5->bu;
 else {
  VAR_9 = FUNC_2(sizeof(struct bu_info), VAR_0 | VAR_2);
  if (!VAR_9)
   goto out_unlock;

  VAR_9->buf = ((void*)0);
  VAR_11 = 1;
 }

 VAR_9->buf_len = VAR_5->max_bu_buf_len;
 FUNC_0(VAR_5, &VAR_9->key, VAR_4->i_ino,
        VAR_3->index << VAR_1);
 VAR_10 = FUNC_5(VAR_5, VAR_9, VAR_3);

 if (!VAR_11)
  FUNC_4(&VAR_5->bu_mutex);
 else
  FUNC_1(VAR_9);

out_unlock:
 FUNC_4(&VAR_6->ui_mutex);
 return VAR_10;
}
