
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct super_block {int dummy; } ;
struct ocfs2_xattr_value_root {int dummy; } ;
struct ocfs2_xattr_header {int dummy; } ;
struct ocfs2_xattr_bucket {int dummy; } ;
struct buffer_head {int dummy; } ;


 int FUNC_0 (struct super_block*,struct ocfs2_xattr_bucket*,int,struct ocfs2_xattr_value_root**,struct buffer_head**) ;

__attribute__((used)) static int FUNC_1(struct super_block *VAR_0,
     struct buffer_head *VAR_1,
     struct ocfs2_xattr_header *VAR_2,
     int VAR_3,
     struct ocfs2_xattr_value_root **VAR_4,
     struct buffer_head **VAR_5,
     void *VAR_6)
{
 struct ocfs2_xattr_bucket *VAR_7 =
    (struct ocfs2_xattr_bucket *)VAR_6;

 return FUNC_0(VAR_0, VAR_7, VAR_3,
            VAR_4, VAR_5);
}
