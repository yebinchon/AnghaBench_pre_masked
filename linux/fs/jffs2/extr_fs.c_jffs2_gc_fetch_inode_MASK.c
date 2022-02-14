
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct jffs2_sb_info {int inocache_lock; int inocache_wq; } ;
struct jffs2_inode_info {int dummy; } ;
struct jffs2_inode_cache {scalar_t__ state; int ino; } ;
struct inode {int dummy; } ;


 int VAR_0 ;
 struct jffs2_inode_info* FUNC_0 (struct inode*) ;
 struct jffs2_inode_info* FUNC_1 (int ) ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_2 (struct inode*) ;
 struct jffs2_inode_info* FUNC_3 (struct inode*) ;
 int FUNC_4 (struct jffs2_sb_info*) ;
 struct inode* FUNC_5 (int ,int) ;
 int FUNC_6 (struct inode*) ;
 scalar_t__ FUNC_7 (struct inode*) ;
 int FUNC_8 (int,char*,int,...) ;
 struct jffs2_inode_cache* FUNC_9 (struct jffs2_sb_info*,int) ;
 struct inode* FUNC_10 (int ,int) ;
 int FUNC_11 (char*,int,int) ;
 int FUNC_12 (int *,int *) ;
 int FUNC_13 (int *) ;
 int FUNC_14 (int *) ;

struct jffs2_inode_info *FUNC_15(struct jffs2_sb_info *VAR_2,
           int VAR_3, int VAR_4)
{
 struct inode *VAR_5;
 struct jffs2_inode_cache *VAR_6;

 if (VAR_4) {
  VAR_5 = FUNC_5(FUNC_4(VAR_2), VAR_3);
  if (!VAR_5) {
   FUNC_8(1, "ilookup() failed for ino #%u; inode is probably deleted.\n",
      VAR_3);

   FUNC_13(&VAR_2->inocache_lock);
   VAR_6 = FUNC_9(VAR_2, VAR_3);
   if (!VAR_6) {
    FUNC_8(1, "Inode cache for ino #%u is gone\n",
       VAR_3);
    FUNC_14(&VAR_2->inocache_lock);
    return ((void*)0);
   }
   if (VAR_6->state != VAR_1) {

    FUNC_8(1, "Waiting for ino #%u in state %d\n",
       VAR_6->ino, VAR_6->state);
    FUNC_12(&VAR_2->inocache_wq, &VAR_2->inocache_lock);
   } else {
    FUNC_14(&VAR_2->inocache_lock);
   }

   return ((void*)0);
  }
 } else {




  VAR_5 = FUNC_10(FUNC_4(VAR_2), VAR_3);
  if (FUNC_2(VAR_5))
   return FUNC_0(VAR_5);
 }
 if (FUNC_7(VAR_5)) {
  FUNC_11("Eep. read_inode() failed for ino #%u. unlinked %d\n",
     VAR_3, VAR_4);

  FUNC_6(VAR_5);
  return FUNC_1(-VAR_0);
 }

 return FUNC_3(VAR_5);
}
