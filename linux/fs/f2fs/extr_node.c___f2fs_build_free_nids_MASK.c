
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct page {int dummy; } ;
struct f2fs_sb_info {int dummy; } ;
struct f2fs_nm_info {int next_scan_nid; int max_nid; int* nid_cnt; int ra_nid_pages; int nat_tree_lock; int nat_block_bitmap; } ;
typedef int nid_t ;


 size_t VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (struct page*) ;
 int VAR_3 ;
 int FUNC_1 (int) ;
 int VAR_4 ;
 struct f2fs_nm_info* FUNC_2 (struct f2fs_sb_info*) ;
 int FUNC_3 (struct page*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (struct f2fs_sb_info*,int ) ;
 int FUNC_6 (struct f2fs_sb_info*,int) ;
 int FUNC_7 (struct f2fs_sb_info*,char*) ;
 int FUNC_8 (struct page*,int) ;
 int FUNC_9 (struct f2fs_sb_info*,int ,int,int ,int) ;
 struct page* FUNC_10 (struct f2fs_sb_info*,int) ;
 int FUNC_11 (struct f2fs_sb_info*) ;
 int FUNC_12 (struct f2fs_sb_info*) ;
 int FUNC_13 (struct f2fs_sb_info*,struct page*,int) ;
 int FUNC_14 (int ,int ) ;
 scalar_t__ FUNC_15 (int) ;
 int FUNC_16 (int *) ;

__attribute__((used)) static int FUNC_17(struct f2fs_sb_info *VAR_5,
      bool VAR_6, bool VAR_7)
{
 struct f2fs_nm_info *VAR_8 = FUNC_2(VAR_5);
 int VAR_9 = 0, VAR_10;
 nid_t VAR_11 = VAR_8->next_scan_nid;

 if (FUNC_15(VAR_11 >= VAR_8->max_nid))
  VAR_11 = 0;


 if (VAR_8->nid_cnt[VAR_0] >= VAR_4)
  return 0;

 if (!VAR_6 && !FUNC_5(VAR_5, VAR_1))
  return 0;

 if (!VAR_7) {

  FUNC_12(VAR_5);

  if (VAR_8->nid_cnt[VAR_0] >= VAR_4)
   return 0;
 }


 FUNC_9(VAR_5, FUNC_1(VAR_11), VAR_2,
       VAR_3, 1);

 FUNC_4(&VAR_8->nat_tree_lock);

 while (1) {
  if (!FUNC_14(FUNC_1(VAR_11),
      VAR_8->nat_block_bitmap)) {
   struct page *VAR_12 = FUNC_10(VAR_5, VAR_11);

   if (FUNC_0(VAR_12)) {
    VAR_10 = FUNC_3(VAR_12);
   } else {
    VAR_10 = FUNC_13(VAR_5, VAR_12, VAR_11);
    FUNC_8(VAR_12, 1);
   }

   if (VAR_10) {
    FUNC_16(&VAR_8->nat_tree_lock);
    FUNC_6(VAR_5, !VAR_7);
    FUNC_7(VAR_5, "NAT is corrupt, run fsck to fix it");
    return VAR_10;
   }
  }

  VAR_11 += (VAR_4 - (VAR_11 % VAR_4));
  if (FUNC_15(VAR_11 >= VAR_8->max_nid))
   VAR_11 = 0;

  if (++VAR_9 >= VAR_2)
   break;
 }


 VAR_8->next_scan_nid = VAR_11;


 FUNC_11(VAR_5);

 FUNC_16(&VAR_8->nat_tree_lock);

 FUNC_9(VAR_5, FUNC_1(VAR_8->next_scan_nid),
     VAR_8->ra_nid_pages, VAR_3, 0);

 return 0;
}
