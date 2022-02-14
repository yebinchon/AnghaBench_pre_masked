
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int umode_t ;
struct qstr {int len; int name; } ;
struct inode {int i_data; } ;
struct f2fs_dir_entry {int name_len; int ino; } ;
struct f2fs_dentry_ptr {unsigned long max; int * filename; struct f2fs_dir_entry* dentry; int bitmap; } ;
typedef int nid_t ;


 scalar_t__ FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (struct inode*,struct qstr*,int *,int *,int ,int) ;
 int FUNC_2 (struct f2fs_dir_entry*) ;
 int FUNC_3 (struct inode*) ;
 int FUNC_4 (struct inode*,int ,int) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (struct inode*,struct f2fs_dentry_ptr*,void*) ;
 int FUNC_8 (unsigned long,int ) ;
 int FUNC_9 (int *,int ) ;
 scalar_t__ FUNC_10 (int) ;

__attribute__((used)) static int FUNC_11(struct inode *VAR_1, void *VAR_2)
{
 struct f2fs_dentry_ptr VAR_3;
 unsigned long VAR_4 = 0;
 int VAR_5 = 0;

 FUNC_7(VAR_1, &VAR_3, VAR_2);

 while (VAR_4 < VAR_3.max) {
  struct f2fs_dir_entry *VAR_6;
  struct qstr VAR_7;
  nid_t VAR_8;
  umode_t VAR_9;

  if (!FUNC_8(VAR_4, VAR_3.bitmap)) {
   VAR_4++;
   continue;
  }

  VAR_6 = &VAR_3.dentry[VAR_4];

  if (FUNC_10(!VAR_6->name_len)) {
   VAR_4++;
   continue;
  }

  VAR_7.name = VAR_3.filename[VAR_4];
  VAR_7.len = FUNC_5(VAR_6->name_len);

  VAR_8 = FUNC_6(VAR_6->ino);
  VAR_9 = FUNC_2(VAR_6) << VAR_0;

  VAR_5 = FUNC_1(VAR_1, &VAR_7, ((void*)0), ((void*)0),
       VAR_8, VAR_9);
  if (VAR_5)
   goto punch_dentry_pages;

  VAR_4 += FUNC_0(FUNC_5(VAR_6->name_len));
 }
 return 0;
punch_dentry_pages:
 FUNC_9(&VAR_1->i_data, 0);
 FUNC_4(VAR_1, 0, 0);
 FUNC_3(VAR_1);
 return VAR_5;
}
