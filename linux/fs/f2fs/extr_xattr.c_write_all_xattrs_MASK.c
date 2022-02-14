
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct page {int dummy; } ;
struct inode {scalar_t__ i_ino; } ;
struct f2fs_sb_info {int dummy; } ;
struct dnode_of_data {int dummy; } ;
typedef int nid_t ;
typedef size_t __u32 ;
struct TYPE_2__ {scalar_t__ i_xattr_nid; } ;


 int VAR_0 ;
 TYPE_1__* FUNC_0 (struct inode*) ;
 struct f2fs_sb_info* FUNC_1 (struct inode*) ;
 scalar_t__ FUNC_2 (struct page*) ;
 int VAR_1 ;
 int FUNC_3 (struct page*) ;
 size_t VAR_2 ;
 int VAR_3 ;
 int FUNC_4 (struct f2fs_sb_info*,int *) ;
 int FUNC_5 (struct f2fs_sb_info*,int ) ;
 int FUNC_6 (struct f2fs_sb_info*,int ) ;
 int FUNC_7 (struct f2fs_sb_info*,int ) ;
 struct page* FUNC_8 (struct f2fs_sb_info*,scalar_t__) ;
 struct page* FUNC_9 (struct dnode_of_data*,int ) ;
 int FUNC_10 (struct page*,int) ;
 int FUNC_11 (struct inode*) ;
 int FUNC_12 (struct page*,int ,int,int) ;
 void* FUNC_13 (struct inode*,struct page*) ;
 size_t FUNC_14 (struct inode*) ;
 int FUNC_15 (void*,void*,size_t) ;
 void* FUNC_16 (struct page*) ;
 int FUNC_17 (struct dnode_of_data*,struct inode*,int *,int *,int ) ;
 int FUNC_18 (struct page*) ;

__attribute__((used)) static inline int FUNC_19(struct inode *VAR_4, __u32 VAR_5,
    void *VAR_6, struct page *VAR_7)
{
 struct f2fs_sb_info *VAR_8 = FUNC_1(VAR_4);
 size_t VAR_9 = FUNC_14(VAR_4);
 struct page *VAR_10 = ((void*)0);
 void *VAR_11;
 void *VAR_12 = ((void*)0);
 struct page *VAR_13;
 nid_t VAR_14 = 0;
 int VAR_15 = 0;

 if (VAR_5 > VAR_9 && !FUNC_0(VAR_4)->i_xattr_nid)
  if (!FUNC_4(VAR_8, &VAR_14))
   return -VAR_0;


 if (VAR_9) {
  if (VAR_7) {
   VAR_12 = FUNC_13(VAR_4, VAR_7);
  } else {
   VAR_10 = FUNC_8(VAR_8, VAR_4->i_ino);
   if (FUNC_2(VAR_10)) {
    FUNC_6(VAR_8, VAR_14);
    return FUNC_3(VAR_10);
   }
   VAR_12 = FUNC_13(VAR_4, VAR_10);
  }

  FUNC_12(VAR_7 ? VAR_7 : VAR_10,
       VAR_1, 1, 1);

  if (VAR_5 <= VAR_9) {
   VAR_15 = FUNC_11(VAR_4);
   FUNC_6(VAR_8, VAR_14);
   if (VAR_15) {
    FUNC_10(VAR_10, 1);
    return VAR_15;
   }
   FUNC_15(VAR_12, VAR_6, VAR_9);
   FUNC_18(VAR_7 ? VAR_7 : VAR_10);
   goto in_page_out;
  }
 }


 if (FUNC_0(VAR_4)->i_xattr_nid) {
  VAR_13 = FUNC_8(VAR_8, FUNC_0(VAR_4)->i_xattr_nid);
  if (FUNC_2(VAR_13)) {
   VAR_15 = FUNC_3(VAR_13);
   FUNC_6(VAR_8, VAR_14);
   goto in_page_out;
  }
  FUNC_7(VAR_8, VAR_14);
  FUNC_12(VAR_13, VAR_1, 1, 1);
 } else {
  struct dnode_of_data VAR_16;
  FUNC_17(&VAR_16, VAR_4, ((void*)0), ((void*)0), VAR_14);
  VAR_13 = FUNC_9(&VAR_16, VAR_3);
  if (FUNC_2(VAR_13)) {
   VAR_15 = FUNC_3(VAR_13);
   FUNC_6(VAR_8, VAR_14);
   goto in_page_out;
  }
  FUNC_5(VAR_8, VAR_14);
 }
 VAR_11 = FUNC_16(VAR_13);

 if (VAR_9)
  FUNC_15(VAR_12, VAR_6, VAR_9);
 FUNC_15(VAR_11, VAR_6 + VAR_9, VAR_2);

 if (VAR_9)
  FUNC_18(VAR_7 ? VAR_7 : VAR_10);
 FUNC_18(VAR_13);

 FUNC_10(VAR_13, 1);
in_page_out:
 FUNC_10(VAR_10, 1);
 return VAR_15;
}
