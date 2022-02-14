
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct inode_management {int ino_lock; int ino_num; int ino_list; int ino_root; } ;
struct ino_entry {int dirty_device; int list; int ino; } ;
struct f2fs_sb_info {struct inode_management* im; } ;
typedef int nid_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct f2fs_sb_info*,int) ;
 struct ino_entry* FUNC_1 (int ,int) ;
 int FUNC_2 (unsigned int,char*) ;
 int VAR_4 ;
 int FUNC_3 (int ,struct ino_entry*) ;
 int FUNC_4 (int *,int *) ;
 int FUNC_5 (struct ino_entry*,int ,int) ;
 int FUNC_6 (int *,int ,struct ino_entry*) ;
 struct ino_entry* FUNC_7 (int *,int ) ;
 int FUNC_8 (int) ;
 int FUNC_9 () ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int *) ;
 scalar_t__ FUNC_12 (int ) ;

__attribute__((used)) static void FUNC_13(struct f2fs_sb_info *VAR_5, nid_t VAR_6,
      unsigned int VAR_7, int VAR_8)
{
 struct inode_management *VAR_9 = &VAR_5->im[VAR_8];
 struct ino_entry *VAR_10, *VAR_11;

 VAR_11 = FUNC_1(VAR_4, VAR_1);

 FUNC_8(VAR_1 | VAR_3);

 FUNC_10(&VAR_9->ino_lock);
 VAR_10 = FUNC_7(&VAR_9->ino_root, VAR_6);
 if (!VAR_10) {
  VAR_10 = VAR_11;
  if (FUNC_12(FUNC_6(&VAR_9->ino_root, VAR_6, VAR_10)))
   FUNC_0(VAR_5, 1);

  FUNC_5(VAR_10, 0, sizeof(struct ino_entry));
  VAR_10->ino = VAR_6;

  FUNC_4(&VAR_10->list, &VAR_9->ino_list);
  if (VAR_8 != VAR_2)
   VAR_9->ino_num++;
 }

 if (VAR_8 == VAR_0)
  FUNC_2(VAR_7, (char *)&VAR_10->dirty_device);

 FUNC_11(&VAR_9->ino_lock);
 FUNC_9();

 if (VAR_10 != VAR_11)
  FUNC_3(VAR_4, VAR_11);
}
