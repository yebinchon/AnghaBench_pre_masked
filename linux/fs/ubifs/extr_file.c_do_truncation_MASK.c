
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ubifs_inode {int ui_size; int ui_mutex; } ;
struct TYPE_2__ {scalar_t__ nospace_rp; scalar_t__ nospace; } ;
struct ubifs_info {TYPE_1__ bi; } ;
struct ubifs_budget_req {int dirtied_page; int dirtied_ino; int dirtied_ino_d; } ;
struct page {int dummy; } ;
struct inode {int i_size; int i_ctime; int i_mtime; int i_mapping; int i_ino; } ;
struct iattr {int ia_size; } ;
typedef int pgoff_t ;
typedef int loff_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (struct page*) ;
 int FUNC_1 (struct page*) ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_2 (struct page*) ;
 int FUNC_3 (struct inode*) ;
 int FUNC_4 (char*,int ,int,int) ;
 int FUNC_5 (struct inode*,struct iattr const*) ;
 int FUNC_6 (struct page*,int) ;
 struct page* FUNC_7 (int ,int) ;
 int FUNC_8 (struct ubifs_budget_req*,int ,int) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (struct page*) ;
 int FUNC_12 () ;
 int FUNC_13 (struct inode*,int) ;
 int FUNC_14 (struct ubifs_info*,int ) ;
 int FUNC_15 (struct ubifs_info*,struct ubifs_budget_req*) ;
 struct ubifs_inode* FUNC_16 (struct inode*) ;
 int FUNC_17 (struct ubifs_info*,struct inode*,int,int) ;
 int FUNC_18 (struct ubifs_info*,struct ubifs_budget_req*) ;
 int FUNC_19 (struct page*) ;

__attribute__((used)) static int FUNC_20(struct ubifs_info *VAR_6, struct inode *VAR_7,
    const struct iattr *VAR_8)
{
 int VAR_9;
 struct ubifs_budget_req VAR_10;
 loff_t VAR_11 = VAR_7->i_size, VAR_12 = VAR_8->ia_size;
 int VAR_13 = VAR_12 & (VAR_4 - 1), VAR_14 = 1;
 struct ubifs_inode *VAR_15 = FUNC_16(VAR_7);

 FUNC_4("ino %lu, size %lld -> %lld", VAR_7->i_ino, VAR_11, VAR_12);
 FUNC_8(&VAR_10, 0, sizeof(struct ubifs_budget_req));






 if (VAR_12 & (VAR_4 - 1))
  VAR_10.dirtied_page = 1;

 VAR_10.dirtied_ino = 1;

 VAR_10.dirtied_ino_d = VAR_5;
 VAR_9 = FUNC_15(VAR_6, &VAR_10);
 if (VAR_9) {




  if (VAR_12 || VAR_9 != -VAR_0)
   return VAR_9;
  VAR_14 = 0;
 }

 FUNC_13(VAR_7, VAR_12);

 if (VAR_13) {
  pgoff_t VAR_16 = VAR_12 >> VAR_1;
  struct page *VAR_17;

  VAR_17 = FUNC_7(VAR_7->i_mapping, VAR_16);
  if (VAR_17) {
   if (FUNC_0(VAR_17)) {
    FUNC_14(VAR_6, FUNC_1(VAR_17));

    FUNC_2(VAR_17);
    if (VAR_3)
     VAR_13 = VAR_12 &
       (VAR_2 - 1);
    VAR_9 = FUNC_6(VAR_17, VAR_13);
    FUNC_11(VAR_17);
    if (VAR_9)
     goto out_budg;




   } else {





    FUNC_19(VAR_17);
    FUNC_11(VAR_17);
   }
  }
 }

 FUNC_9(&VAR_15->ui_mutex);
 VAR_15->ui_size = VAR_7->i_size;

 VAR_7->i_mtime = VAR_7->i_ctime = FUNC_3(VAR_7);

 FUNC_5(VAR_7, VAR_8);
 VAR_9 = FUNC_17(VAR_6, VAR_7, VAR_11, VAR_12);
 FUNC_10(&VAR_15->ui_mutex);

out_budg:
 if (VAR_14)
  FUNC_18(VAR_6, &VAR_10);
 else {
  VAR_6->bi.nospace = VAR_6->bi.nospace_rp = 0;
  FUNC_12();
 }
 return VAR_9;
}
