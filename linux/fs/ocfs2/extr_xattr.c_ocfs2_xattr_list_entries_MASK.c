
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ocfs2_xattr_header {struct ocfs2_xattr_entry* xh_entries; int xh_count; } ;
struct ocfs2_xattr_entry {int xe_name_len; int xe_name_offset; } ;
struct inode {int i_sb; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (struct ocfs2_xattr_entry*) ;
 int FUNC_2 (int ,char*,size_t,size_t*,int,char const*,int ) ;

__attribute__((used)) static int FUNC_3(struct inode *VAR_0,
        struct ocfs2_xattr_header *VAR_1,
        char *VAR_2, size_t VAR_3)
{
 size_t VAR_4 = 0;
 int VAR_5, VAR_6, VAR_7;
 const char *VAR_8;

 for (VAR_5 = 0 ; VAR_5 < FUNC_0(VAR_1->xh_count); VAR_5++) {
  struct ocfs2_xattr_entry *VAR_9 = &VAR_1->xh_entries[VAR_5];
  VAR_6 = FUNC_1(VAR_9);
  VAR_8 = (const char *)VAR_1 +
   FUNC_0(VAR_9->xe_name_offset);

  VAR_7 = FUNC_2(VAR_0->i_sb,
          VAR_2, VAR_3,
          &VAR_4, VAR_6, VAR_8,
          VAR_9->xe_name_len);
  if (VAR_7)
   return VAR_7;
 }

 return VAR_4;
}
