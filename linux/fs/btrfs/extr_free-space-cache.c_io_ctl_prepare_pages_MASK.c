
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct page {int dummy; } ;
struct inode {int i_mapping; } ;
struct btrfs_io_ctl {int num_pages; struct page** pages; } ;
typedef int gfp_t ;
struct TYPE_4__ {TYPE_1__* root; } ;
struct TYPE_3__ {int fs_info; } ;


 TYPE_2__* FUNC_0 (struct inode*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (struct page*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,char*) ;
 int FUNC_4 (int *,struct page*) ;
 int FUNC_5 (struct page*) ;
 struct page* FUNC_6 (int ,int,int ) ;
 int FUNC_7 (struct btrfs_io_ctl*) ;
 int FUNC_8 (struct page*) ;
 int FUNC_9 (struct page*) ;

__attribute__((used)) static int FUNC_10(struct btrfs_io_ctl *VAR_2, struct inode *VAR_3,
    int VAR_4)
{
 struct page *VAR_5;
 gfp_t VAR_6 = FUNC_2(VAR_3->i_mapping);
 int VAR_7;

 for (VAR_7 = 0; VAR_7 < VAR_2->num_pages; VAR_7++) {
  VAR_5 = FUNC_6(VAR_3->i_mapping, VAR_7, VAR_6);
  if (!VAR_5) {
   FUNC_7(VAR_2);
   return -VAR_1;
  }
  VAR_2->pages[VAR_7] = VAR_5;
  if (VAR_4 && !FUNC_1(VAR_5)) {
   FUNC_4(((void*)0), VAR_5);
   FUNC_8(VAR_5);
   if (!FUNC_1(VAR_5)) {
    FUNC_3(FUNC_0(VAR_3)->root->fs_info,
        "error reading free space cache");
    FUNC_7(VAR_2);
    return -VAR_0;
   }
  }
 }

 for (VAR_7 = 0; VAR_7 < VAR_2->num_pages; VAR_7++) {
  FUNC_5(VAR_2->pages[VAR_7]);
  FUNC_9(VAR_2->pages[VAR_7]);
 }

 return 0;
}
