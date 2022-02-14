
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct super_block {int dummy; } ;
struct ocfs2_xattr_value_root {int dummy; } ;
struct ocfs2_xattr_header {struct ocfs2_xattr_entry* xh_entries; } ;
struct ocfs2_xattr_entry {int xe_name_len; } ;
struct ocfs2_xattr_bucket {struct buffer_head** bu_bhs; } ;
struct buffer_head {int dummy; } ;


 int FUNC_0 (int ) ;
 void* FUNC_1 (struct ocfs2_xattr_bucket*,int) ;
 struct ocfs2_xattr_header* FUNC_2 (struct ocfs2_xattr_bucket*) ;
 int FUNC_3 (int) ;
 int FUNC_4 (struct super_block*,struct ocfs2_xattr_header*,int,int*,int*) ;

__attribute__((used)) static int FUNC_5(struct super_block *VAR_0,
        struct ocfs2_xattr_bucket *VAR_1,
        int VAR_2,
        struct ocfs2_xattr_value_root **VAR_3,
        struct buffer_head **VAR_4)
{
 int VAR_5, VAR_6, VAR_7;
 struct ocfs2_xattr_header *VAR_8 = FUNC_2(VAR_1);
 struct ocfs2_xattr_entry *VAR_9 = &VAR_8->xh_entries[VAR_2];
 void *VAR_10;

 VAR_5 = FUNC_4(VAR_0,
      FUNC_2(VAR_1),
      VAR_2,
      &VAR_6,
      &VAR_7);
 if (VAR_5) {
  FUNC_3(VAR_5);
  goto out;
 }

 VAR_10 = FUNC_1(VAR_1, VAR_6);

 *VAR_3 = (struct ocfs2_xattr_value_root *)(VAR_10 + VAR_7 +
    FUNC_0(VAR_9->xe_name_len));

 if (VAR_4)
  *VAR_4 = VAR_1->bu_bhs[VAR_6];
out:
 return VAR_5;
}
