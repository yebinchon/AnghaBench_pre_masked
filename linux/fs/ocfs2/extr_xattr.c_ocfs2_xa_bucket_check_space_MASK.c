
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct super_block {int dummy; } ;
struct ocfs2_xattr_info {int dummy; } ;
struct ocfs2_xattr_entry {int dummy; } ;
struct ocfs2_xa_loc {scalar_t__ xl_entry; TYPE_1__* xl_inode; TYPE_2__* xl_header; } ;
struct TYPE_4__ {int xh_count; } ;
struct TYPE_3__ {struct super_block* i_sb; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct ocfs2_xattr_info*) ;
 int FUNC_3 (struct super_block*,int,int) ;
 scalar_t__ FUNC_4 (struct ocfs2_xa_loc*,struct ocfs2_xattr_info*) ;
 int FUNC_5 (int,int,int) ;
 int FUNC_6 (struct ocfs2_xa_loc*) ;
 int FUNC_7 (struct ocfs2_xattr_info*) ;

__attribute__((used)) static int FUNC_8(struct ocfs2_xa_loc *VAR_1,
           struct ocfs2_xattr_info *VAR_2)
{
 int VAR_3;
 int VAR_4 = FUNC_1(VAR_1->xl_header->xh_count);
 int VAR_5 = FUNC_6(VAR_1);
 int VAR_6 = FUNC_7(VAR_2);
 int VAR_7 = FUNC_2(VAR_2);
 struct super_block *VAR_8 = VAR_1->xl_inode->i_sb;







 if (VAR_1->xl_entry) {

  if (FUNC_4(VAR_1, VAR_2))
   VAR_6 = 0;
  else
   VAR_6 -= sizeof(struct ocfs2_xattr_entry);
 }
 FUNC_0(VAR_6 < 0);

 if (VAR_5 < VAR_7) {
  if (VAR_6)
   return -VAR_0;
 } else {






  VAR_3 = FUNC_5(VAR_6, VAR_5,
       VAR_4);
  if (VAR_3)
   return VAR_3;
  VAR_5 = FUNC_3(VAR_8, VAR_5,
          VAR_7);
 }
 return FUNC_5(VAR_6, VAR_5, VAR_4);
}
