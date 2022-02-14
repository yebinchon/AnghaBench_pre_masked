
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct page {scalar_t__ mapping; } ;
struct f2fs_sb_info {int dummy; } ;
typedef scalar_t__ pgoff_t ;


 int FUNC_0 (struct page*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 struct page* FUNC_1 (int) ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ FUNC_2 (struct f2fs_sb_info*) ;
 int FUNC_3 (struct page*) ;
 int FUNC_4 (struct page*) ;
 scalar_t__ FUNC_5 (struct f2fs_sb_info*,scalar_t__) ;
 struct page* FUNC_6 (scalar_t__,scalar_t__,int) ;
 int FUNC_7 (struct f2fs_sb_info*,struct page*) ;
 int FUNC_8 (struct page*,int) ;
 int FUNC_9 (struct page*,int,int ) ;
 int FUNC_10 (struct f2fs_sb_info*,char*,scalar_t__,scalar_t__,int ,int ,int ,int ) ;
 int FUNC_11 (struct page*) ;
 int FUNC_12 (struct page*) ;
 int FUNC_13 (struct page*) ;
 scalar_t__ FUNC_14 (struct page*) ;
 int FUNC_15 (struct page*) ;
 int FUNC_16 (struct page*,int ) ;
 scalar_t__ FUNC_17 (int) ;

__attribute__((used)) static struct page *FUNC_18(struct f2fs_sb_info *VAR_7, pgoff_t VAR_8,
     struct page *VAR_9, int VAR_10)
{
 struct page *VAR_11;
 int VAR_12;

 if (!VAR_8)
  return FUNC_1(-VAR_3);
 if (FUNC_5(VAR_7, VAR_8))
  return FUNC_1(-VAR_1);
repeat:
 VAR_11 = FUNC_6(FUNC_2(VAR_7), VAR_8, 0);
 if (!VAR_11)
  return FUNC_1(-VAR_4);

 VAR_12 = FUNC_16(VAR_11, 0);
 if (VAR_12 < 0) {
  FUNC_8(VAR_11, 1);
  return FUNC_1(VAR_12);
 } else if (VAR_12 == VAR_5) {
  VAR_12 = 0;
  goto page_hit;
 }

 if (VAR_9)
  FUNC_9(VAR_9, VAR_10 + 1, VAR_6);

 FUNC_12(VAR_11);

 if (FUNC_17(VAR_11->mapping != FUNC_2(VAR_7))) {
  FUNC_8(VAR_11, 1);
  goto repeat;
 }

 if (FUNC_17(!FUNC_3(VAR_11))) {
  VAR_12 = -VAR_2;
  goto out_err;
 }

 if (!FUNC_7(VAR_7, VAR_11)) {
  VAR_12 = -VAR_0;
  goto out_err;
 }
page_hit:
 if(FUNC_17(VAR_8 != FUNC_14(VAR_11))) {
  FUNC_10(VAR_7, "inconsistent node block, nid:%lu, node_footer[nid:%u,ino:%u,ofs:%u,cpver:%llu,blkaddr:%u]",
     VAR_8, FUNC_14(VAR_11), FUNC_11(VAR_11),
     FUNC_15(VAR_11), FUNC_4(VAR_11),
     FUNC_13(VAR_11));
  VAR_12 = -VAR_1;
out_err:
  FUNC_0(VAR_11);
  FUNC_8(VAR_11, 1);
  return FUNC_1(VAR_12);
 }
 return VAR_11;
}
