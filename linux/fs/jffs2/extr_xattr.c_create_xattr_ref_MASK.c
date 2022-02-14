
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct jffs2_xattr_ref {struct jffs2_xattr_ref* next; struct jffs2_xattr_datum* xd; struct jffs2_inode_cache* ic; } ;
struct jffs2_xattr_datum {int dummy; } ;
struct jffs2_sb_info {int dummy; } ;
struct jffs2_inode_cache {struct jffs2_xattr_ref* xref; } ;


 int VAR_0 ;
 struct jffs2_xattr_ref* FUNC_0 (int) ;
 struct jffs2_xattr_ref* FUNC_1 () ;
 int FUNC_2 (struct jffs2_xattr_ref*) ;
 int FUNC_3 (struct jffs2_sb_info*,struct jffs2_xattr_ref*) ;

__attribute__((used)) static struct jffs2_xattr_ref *FUNC_4(struct jffs2_sb_info *VAR_1, struct jffs2_inode_cache *VAR_2,
      struct jffs2_xattr_datum *VAR_3)
{

 struct jffs2_xattr_ref *VAR_4;
 int VAR_5;

 VAR_4 = FUNC_1();
 if (!VAR_4)
  return FUNC_0(-VAR_0);
 VAR_4->ic = VAR_2;
 VAR_4->xd = VAR_3;

 VAR_5 = FUNC_3(VAR_1, VAR_4);
 if (VAR_5) {
  FUNC_2(VAR_4);
  return FUNC_0(VAR_5);
 }


 VAR_4->next = VAR_2->xref;
 VAR_2->xref = VAR_4;

 return VAR_4;
}
