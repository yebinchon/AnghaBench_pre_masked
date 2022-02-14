
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xattr_handler {char* name; scalar_t__ prefix; int (* list ) (struct dentry*) ;} ;
struct jffs2_xattr_ref {struct jffs2_xattr_ref* next; struct jffs2_xattr_datum* xd; struct jffs2_inode_cache* ic; } ;
struct jffs2_xattr_datum {char const* xname; size_t name_len; int xprefix; } ;
struct jffs2_sb_info {int xattr_sem; } ;
struct jffs2_inode_info {struct jffs2_inode_cache* inocache; } ;
struct jffs2_inode_cache {struct jffs2_xattr_ref* xref; } ;
struct inode {int i_sb; } ;
struct dentry {int dummy; } ;
typedef size_t ssize_t ;


 int FUNC_0 (int) ;
 size_t VAR_0 ;
 struct jffs2_inode_info* FUNC_1 (struct inode*) ;
 struct jffs2_sb_info* FUNC_2 (int ) ;
 size_t FUNC_3 (struct jffs2_sb_info*,struct jffs2_inode_cache*) ;
 struct inode* FUNC_4 (struct dentry*) ;
 int FUNC_5 (struct jffs2_sb_info*,struct jffs2_xattr_ref*) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 size_t FUNC_8 (struct jffs2_sb_info*,struct jffs2_xattr_datum*) ;
 int FUNC_9 (char*,char const*,size_t) ;
 size_t FUNC_10 (char const*) ;
 int FUNC_11 (struct dentry*) ;
 scalar_t__ FUNC_12 (int) ;
 int FUNC_13 (int *) ;
 int FUNC_14 (int *) ;
 struct xattr_handler* FUNC_15 (int ) ;

ssize_t FUNC_16(struct dentry *VAR_1, char *VAR_2, size_t VAR_3)
{
 struct inode *VAR_4 = FUNC_4(VAR_1);
 struct jffs2_inode_info *VAR_5 = FUNC_1(VAR_4);
 struct jffs2_sb_info *VAR_6 = FUNC_2(VAR_4->i_sb);
 struct jffs2_inode_cache *VAR_7 = VAR_5->inocache;
 struct jffs2_xattr_ref *VAR_8, **VAR_9;
 struct jffs2_xattr_datum *VAR_10;
 const struct xattr_handler *VAR_11;
 const char *VAR_12;
 ssize_t VAR_13, VAR_14, VAR_15;
 int VAR_16 = 0;

 VAR_15 = FUNC_3(VAR_6, VAR_7);
 if (FUNC_12(VAR_15))
  return VAR_15;

 FUNC_6(&VAR_6->xattr_sem);
 retry:
 VAR_14 = 0;
 for (VAR_8=VAR_7->xref, VAR_9=&VAR_7->xref; VAR_8; VAR_9=&VAR_8->next, VAR_8=VAR_8->next) {
  FUNC_0(VAR_8->ic != VAR_7);
  VAR_10 = VAR_8->xd;
  if (!VAR_10->xname) {

   if (!VAR_16) {
    VAR_16 = 1;
    FUNC_13(&VAR_6->xattr_sem);
    FUNC_7(&VAR_6->xattr_sem);
    goto retry;
   } else {
    VAR_15 = FUNC_8(VAR_6, VAR_10);
    if (FUNC_12(VAR_15 > 0)) {
     *VAR_9 = VAR_8->next;
     FUNC_5(VAR_6, VAR_8);
     goto retry;
    } else if (FUNC_12(VAR_15 < 0))
     goto out;
   }
  }
  VAR_11 = FUNC_15(VAR_10->xprefix);
  if (!VAR_11 || (VAR_11->list && !VAR_11->list(VAR_1)))
   continue;
  VAR_12 = VAR_11->prefix ?: VAR_11->name;
  VAR_13 = FUNC_10(VAR_12);
  VAR_15 = VAR_13 + VAR_10->name_len + 1;

  if (VAR_2) {
   if (VAR_15 > VAR_3 - VAR_14) {
    VAR_15 = -VAR_0;
    goto out;
   }
   FUNC_9(VAR_2, VAR_12, VAR_13);
   VAR_2 += VAR_13;
   FUNC_9(VAR_2, VAR_10->xname, VAR_10->name_len);
   VAR_2 += VAR_10->name_len;
   *VAR_2++ = 0;
  }
  VAR_14 += VAR_15;
 }
 VAR_15 = VAR_14;
 out:
 if (!VAR_16) {
  FUNC_13(&VAR_6->xattr_sem);
 } else {
  FUNC_14(&VAR_6->xattr_sem);
 }
 return VAR_15;
}
